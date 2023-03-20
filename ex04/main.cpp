/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:56:17 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/20 18:08:22 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

static void	_replace_substring_in_file(std::ifstream& f1, std::ofstream& f2, \
	std::string const& s1, std::string const& s2)
{
	std::string			line;
	size_t				pos;
	size_t				s1_len;

	s1_len = s1.length();
	while (std::getline(f1, line))
	{
		pos = line.find(s1);
		while (!s1.empty() && pos != std::string::npos)
		{
			f2 << line.substr(0, pos);
			f2 << s2;
			line = line.substr(pos + s1_len);
			pos = line.find(s1);
		}
		f2 << line << std::endl;
	}
}

static int	_sed_open_files(std::string const& in_path, std::string const& out_path,\
	std::ifstream& istream, std::ofstream& ostream)
{
	if (in_path.empty())
	{
		std::cerr << "SED ERROR :: No input filepath provided" << std::endl;
		return (-1);
	}
	istream.open(in_path);
	if (!istream)
	{
		std::cerr << "SED ERROR :: Could not open file : " << in_path << std::endl;
		return (-1);
	}
	ostream.open(out_path);
	if (!ostream)
	{
		istream.close();
		std::cerr << "SED ERROR :: Could not open or create file : " << out_path << std::endl;
		return (-1);
	}
	return (0);
}

int	sed(std::string const& filepath, std::string const& find, std::string const& replace)
{
	std::ifstream	in_file;
	std::ofstream	out_file;
	std::string		outpath;

	outpath = filepath + ".replace";
	if (_sed_open_files(filepath, outpath, in_file, out_file) < 0)
		return (-1);
	_replace_substring_in_file(in_file, out_file, find, replace);
	in_file.close();
	out_file.close();
	return (0);	
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "ERROR :: Wrong nb of arguments.";
		std::cerr << " Provide a filename, a string sequence to replace in the file and its replacement string" << std::endl;
		return (EXIT_FAILURE);
	}
	if (sed(argv[1], argv[2], argv[3]) < 0)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
