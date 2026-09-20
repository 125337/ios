// discardSilently @ 002732fc

/* Function Stack Size: 0x10 bytes */

void WCRFinderDLWaiter::discardSilently(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_finished_026a15b0);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setFinished__026a15b8,1);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cancel_0269d1e8);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCompletion__0269fdc8,0);
    if (DAT_028c95a0 == param_1) {
      _objc_storeStrong(0,&DAT_028c95a0,0);
    }
  }
  return;
}

