#ifndef __Synthesis__
#define __Synthesis__

#include "IPlug_include_in_plug_hdr.h"

class Synthesis : public IPlug
{
public:
  Synthesis(IPlugInstanceInfo instanceInfo);
  ~Synthesis();

  void Reset();
  void OnParamChange(int paramIdx);
  void ProcessDoubleReplacing(double** inputs, double** outputs, int nFrames);

private:
  double mFrequency;
  void CreatePresets();
};

#endif
