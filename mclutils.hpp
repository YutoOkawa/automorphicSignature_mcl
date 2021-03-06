#ifndef INCLUDE_mclutils_h
#define INCLUDE_mclutils_h

#include <mcl/bn256.hpp>
#include <random>
#include <iostream>

mcl::bn256::G1 genG1Element();
mcl::bn256::G2 genG2Element();
void debugG1(std::string str, mcl::bn256::G1 g);
void debugG2(std::string str, mcl::bn256::G2 h);
void debugFr(std::string str, mcl::bn256::Fr fr);
void debugGT(std::string str, mcl::bn256::Fp12 gt);

#endif
