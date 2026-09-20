// FUN_007a57b8 @ 007a57b8

void FUN_007a57b8(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028ccb1e);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_18;
    if ((param_2 & 1) == 0) {
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidden__026ca970,0);
        (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_18,PTR_s_setAlpha__026ca860);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setUserInteractionEnabled__026caad8,1);
        _objc_setAssociatedObject(local_18,&DAT_028ccb1e,0,1);
      }
    }
    else {
      if ((uVar2 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar1,&DAT_028ccb1e,puVar3,1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidden__026ca970,1);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_18,PTR_s_setAlpha__026ca860);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setUserInteractionEnabled__026caad8,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

