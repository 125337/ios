// stopSimulatedProgress @ 01126ba0

/* Function Stack Size: 0x10 bytes */

void WCRefineProgressToast::stopSimulatedProgress(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_simulatedProgressTimer_026af1a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSimulatedProgressTimer__026af1a8,0);
  return;
}

