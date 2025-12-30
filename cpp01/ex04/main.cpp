/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 11:22:19 by sfaouzi           #+#    #+#             */
/*   Updated: 2025/12/29 16:09:37 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string replacing(std::string &line, std::string &s2, std::string &s3)
{
    std::string result;
    int pos = 0;
    size_t found = 0;
    while (1)
    {
        found = line.find(s2, pos);
        if (found == std::string::npos)
            break;
        result.append(line, pos, found - pos);
        result.append(s3);
        pos = found + s2.size();
    }
    result.append(line, pos, line.size() - pos);
    return (result);
}

int main(int ac, char *av[])
{
    (void)av;
    if (ac != 4)
        return (1);

    std::string s1 = av[1];
    std::string s2 = av[2];
    std::string s3 = av[3];

    if (s2.empty())
        return (1);

    std::string n_file = std::string(s1) + ".replace";

    std::ifstream in(s1.c_str());
    std::ofstream out(n_file.c_str());

    std::string line;
    std::getline(in, line, '\0');

    if (!in.is_open() || !out.is_open())
    {
        std::cerr << "Failed to open file\n";
        return 1;
    }
    std::string result;

    result = replacing(line, s2, s3);
    out << result;
}
