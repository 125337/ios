// appDidBecomeActive @ 00eb799c

/* Function Stack Size: 0x10 bytes */

void WCRefineBackgroundKeepAlive::appDidBecomeActive(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isInBackground_026ab300);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stopAudio_026ab338);
  }
  return;
}

