#!/bin/bash
cd "$( dirname "${BASH_SOURCE[0]}" )"

antlr4="java -jar antlr-4.9.2-complete.jar"

# Generate C++ target with visitor
$antlr4 -Dlanguage=Cpp -o cpp_src KotlinLexer.g4
$antlr4 -Dlanguage=Cpp -visitor -no-listener -o cpp_src KotlinParser.g4

# Generate Python target
$antlr4 -Dlanguage=Python3 -o . KotlinLexer.g4
$antlr4 -Dlanguage=Python3 -no-visitor -no-listener -o . KotlinParser.g4

# Run speedy-antlr-tool to generate parse accelerator
python3 <<EOF
from speedy_antlr_tool import generate

generate(
    py_parser_path="KotlinParser.py",
    cpp_output_dir="cpp_src",
)
EOF
