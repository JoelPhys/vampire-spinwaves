//------------------------------------------------------------------------------
//
//   This file is part of the VAMPIRE open source package under the
//   Free BSD licence (see licence file for details).
//
//   (c) Sergiu Ruta 2022. All rights reserved.
//
//   Email: sergiu.ruta@york.ac.uk
//
//------------------------------------------------------------------------------
//

// C++ standard library headers

// Vampire headers
#include "spinwaves.hpp"

// sw module headers
#include "internal.hpp"

namespace spinwaves{

   std::vector <double> Skx_FFT_array_R;
   std::vector <double> Sky_FFT_array_R;
   std::vector <double> Skz_FFT_array_R;
   std::vector <double> Skx_FFT_array_I;
   std::vector <double> Sky_FFT_array_I;
   std::vector <double> Skz_FFT_array_I;
   //------------------------------------------------------------------------------
   // Externally visible variables
   //------------------------------------------------------------------------------
  //    std::vector <double> Skx_FFT_array; // 1D list of biquadratic neighbours
   namespace internal{

      //------------------------------------------------------------------------
      // Shared variables inside sw module
      //------------------------------------------------------------------------

      bool enabled; // bool to enable module
      std::vector <double> kx_FFT_array; // 1D list of biquadratic neighbours
      std::vector <double> ky_FFT_array; // 1D list of biquadratic neighbours
      std::vector <double> kz_FFT_array; // 1D list of biquadratic neighbours
 	  std::vector <double> structure_factor_array_R, structure_factor_array_I ;
      std::vector<internal::mp_t> mp; // array of material properties

   } // end of internal namespace

} // end of sw namespace

