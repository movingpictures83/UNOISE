# UNOISE
# Language: C++
# Input: FASTA
# Output: PREFIX
# Tested with: PluMA 1.0, GCC 4.8.4
# Dependencies: USearch 11.0

PluMA plugin that takes a FASTA file of sequences and
denoises them with the UNOISE algorithm (Edgar, 2016)

Input is the FASTA file, output is a prefix that will be
used for a FASTA file of the denoised sequences and a TXT file of 
denoising statistics (i.e. quality of each sequence)
