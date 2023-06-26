/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 03:42:14 by hateisse          #+#    #+#             */
/*   Updated: 2023/06/22 09:07:16 by hateisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

bool	OpenInputOutputFiles(std::ifstream &ifs, std::ofstream &ofs, char *file_name) {
	ifs.open(file_name);
	if (!ifs) {
		std::cout << "Error: Couldn't open " << " file `" << file_name << '`' << std::endl;
		return false;
	}
	ofs.open((std::string(file_name) + ".replace").c_str());
	if (!ofs) {
		std::cout << "Error: Couldn't create " << " file `" << file_name << ".replace" << '`' << std::endl;
		return false;
	}
	return true;
}

void	ReplaceOccurences(const std::string &file_content, std::ofstream &ofs, std::string s1, std::string s2) {
	size_t	lindex = 0;
	size_t	rindex = 0;

	if (s1.empty()) {
		ofs << file_content;
		return;
	}
	do {
		rindex = file_content.find(s1, lindex);
		if (rindex != std::string::npos) {
			ofs << file_content.substr(lindex, rindex - lindex) << s2;
			lindex = rindex + s1.length();
		}
		else
			ofs << file_content.substr(lindex, 4);
	} while (rindex != std::string::npos);
	return;
}

int	main(int argc, char **argv) {
	std::ifstream		ifs;
	std::ofstream		ofs;
	std::stringstream	buffer;

	if (argc != 4) {
		std::cout << "Usage: ./sed <input_file> <from> <to>" << std::endl;
		return 1;
	}

	OpenInputOutputFiles(ifs, ofs, argv[1]);
	buffer << ifs.rdbuf();
	ReplaceOccurences(buffer.str(), ofs, argv[2], argv[3]);
	return 0;
}
