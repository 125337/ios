// updateAnimation @ 0061e460

/* Function Stack Size: 0x10 bytes */

void WCRefineTQQTypingAnimationHelper::updateAnimation(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    FUN_0061e528();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

