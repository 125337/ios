// FUN_00f952d4 @ 00f952d4

void FUN_00f952d4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_setAutoAdjustAtKeyboardChange__026aafb8);
    uVar1 = local_18;
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_autoAdjustAtKeyboardChange);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setAutoAdjustAtKeyboardChange__026aafb8,1);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

