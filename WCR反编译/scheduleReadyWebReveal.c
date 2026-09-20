// scheduleReadyWebReveal @ 01e8b1bc

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::scheduleReadyWebReveal(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if ((IVar1 != 0) &&
     (IVar1 = param_1,
     (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_readyWebRevealScheduled_026c72d0),
     (IVar1 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setReadyWebRevealScheduled__026c72d8,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fd6666666666666,param_1,PTR_s_performSelector_withObject_after_026a4990,
               PTR_s_revealReadyWebViewIfVisible_026c72e0,0);
  }
  return;
}

