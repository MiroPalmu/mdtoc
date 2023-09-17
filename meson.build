project(
    'mdtoc',
    'cpp',
    default_options : ['warning_level=3', 'werror=true', 'optimization=3', 'cpp_std=c++20']
)


# Directories where compiler is able to include from
project_include_directories = []
project_include_directories += include_directories('include')

# Subprojects (using meson wraps)
ut = subproject('ut')

project_dependencies = [dependency('ut')]

# Project sources
project_sources = []

# Subdirectors
subdir('docs')
subdir('include')
subdir('src')
subdir('tests')

executable(
    'mdtoc',
    project_sources,
    include_directories : project_include_directories,
    dependencies : project_dependencies
)
