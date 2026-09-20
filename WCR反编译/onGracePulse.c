// onGracePulse @ 00eb8bf8

/* Function Stack Size: 0x10 bytes */

void WCRefineBackgroundKeepAlive::onGracePulse(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setGracePulseTimer__026ab378,0);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEnabled_026a0ef0);
  if (((IVar1 & 1) != 0) &&
     (IVar1 = param_1, (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isInBackground_026ab300),
     (IVar1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_requestMoreTime_026ab3a8);
  }
  return;
}

