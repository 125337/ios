// toggleFromQuickEntry @ 00f23800

/* Function Stack Size: 0x10 bytes */

bool WCRefineDoNotDisturbSupport::toggleFromQuickEntry(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEffectivelyActive_0269d708);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setUserWantsActive__026abe28,((byte)IVar1 ^ 1) & 1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEffectivelyActive_0269d708);
  return (bool)param_1;
}

