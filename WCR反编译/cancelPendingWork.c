// cancelPendingWork @ 00f77984

/* Function Stack Size: 0x10 bytes */

void WCRefineFriendRelationChecker::cancelPendingWork(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_requestToken_026acb48);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setRequestToken__026acb50,IVar1 + 1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setWaitingUserName__026acb58);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCurrentCgi__026acb60,0);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentBridge_026acb68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCurrentBridge__026acb70,0);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_timeoutBlock_026acb78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_timeoutBlock_026acb78);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_block_cancel();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setTimeoutBlock__026acb80,0);
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_gapBlock_026acb88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_gapBlock_026acb88);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_block_cancel();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setGapBlock__026acb90,0);
  }
  return;
}

