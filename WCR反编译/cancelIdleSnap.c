// cancelIdleSnap @ 015e6b60

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatWindow::cancelIdleSnap(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_idleSnapBlock_026b12d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_idleSnapBlock_026b12d8);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_block_cancel();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setIdleSnapBlock__026b12e0,0);
  }
  return;
}

