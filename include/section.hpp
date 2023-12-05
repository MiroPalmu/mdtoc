#pragma once
#include <algorithm>
#include <fstream>
#include <regex>
#include <iterator>
#include <sstream>
#include <string>
#include <string_view>
#include <vector>

namespace mdtoc {

/**
 * Implementation from:
 * https://insanecoding.blogspot.com/2011/11/how-to-read-in-file-in-c.html
 */
[[nodiscard]] auto read_file(std::string_view file_path) -> std::string {
    auto file_stream = std::ifstream(file_path);

    std::string contents;
    file_stream.seekg(0, std::ios::end);
    contents.resize(file_stream.tellg());
    file_stream.seekg(0, std::ios::beg);
    file_stream.read(&contents[0], contents.size());
    return contents;
}

struct Section {
    std::string name;
    size_t depth;
}

/**
 * Opens file and reads sections from it
 */

[[nodiscard]] get_sections(const std::string_view file)
    ->std::vector<Section> {

    auto sections = std::vector<Section>;

    auto section_marker = std::regex("^#");
    auto section_header_iterator = std::s

    const auto begin_of_section_i = file.find(section_marker);
    auto name_of_section = std::stringstream("");
}

}  // namespace mdtoc
