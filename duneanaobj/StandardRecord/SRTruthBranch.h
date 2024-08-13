////////////////////////////////////////////////////////////////////////
/// \file    SRTruthBranch.h
/// \brief   Top level truth info
/// \author  J. Wolcott <jwolcott@fnal.gov>


#ifndef DUNEANAOBJ_SRTRUTHBRANCH_H
#define DUNEANAOBJ_SRTRUTHBRANCH_H

#include "duneanaobj/StandardRecord/SREnums.h"
#include "duneanaobj/StandardRecord/SRTrueInteraction.h"

namespace caf
{

  class SRTruthBranch
  {
    public:
      /// Vector of true nus, cosmics, etc. contributing to this trigger
      std::vector<SRTrueInteraction> nu;
      std::size_t nnu = 0;

      /// Convenience method to find a  particle stored by its ID easily
      const SRTrueParticle * Particle(const TrueParticleID & id) const;
  };

} // caf

#endif //DUNEANAOBJ_SRTRUTHBRANCH_H
