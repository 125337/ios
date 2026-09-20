// cancelAvatarRestore @ 015e6c14

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatWindow::cancelAvatarRestore(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_avatarRestoreBlock_026b12e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_avatarRestoreBlock_026b12e8);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_block_cancel();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setAvatarRestoreBlock__026b12f0,0);
  }
  return;
}

