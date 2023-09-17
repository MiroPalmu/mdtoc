#include <iostream>
#include <span>
#include <string_view>
#include <vector>

auto main(int argc, char const* const* const argv) -> int {
    [[nodiscard]] int better_main(std::span<const std::string_view>) noexcept;

    auto args = std::vector<std::string_view>(
        argv, std::next(argv, static_cast<std::ptrdiff_t>(argc)));

    return better_main(args);
}

[[nodiscard]] int better_main(std::span<const std::string_view> args) noexcept {

    const auto 

    return 0;
}
