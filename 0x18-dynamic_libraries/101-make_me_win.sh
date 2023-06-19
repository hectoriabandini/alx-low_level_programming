#!/bin/bash

select_random_numbers() { local quantity=$1 pool=("${@:2}"); shuffled_pool=($(shuf -e "${pool[@]}")); selected_numbers=("${shuffled_pool[@]:0:quantity}"); echo "${selected_numbers[@]}"; }
pool_1_to_75=({1..75}); pool_1_to_15=({1..15}); selected_numbers_1_to_75=$(select_random_numbers 5 "${pool_1_to_75[@]}"); selected_number_1_to_15=$(select_random_numbers 1 "${pool_1_to_15[@]}"); echo "Selected numbers (1 to 75): ${selected_numbers_1_to_75[*]}"; echo "Selected number (1 to 15): $selected_number_1_to_15"
