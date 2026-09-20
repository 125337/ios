// speedMpsForTransportType: @ 00f5b294

/* Function Stack Size: 0x18 bytes */

double __thiscall
WCRefineFakeLocationEngine::speedMpsForTransportType_
          (WCRefineFakeLocationEngine *this,ID param_1,SEL param_2,long_long param_3)

{
  double in_d0;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_speedKmhForTransportType__026ac630,param_3);
  return (in_d0 * 1000.0) / 3600.0;
}

