// FUN_001f2fb0 @ 001f2fb0

void FUN_001f2fb0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_38;
  undefined4 local_30;
  byte local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  uVar3 = local_18;
  puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  local_19 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_30 = 1;
  }
  else {
    uVar3 = local_18;
    FUN_001f1564();
    if ((uVar3 & 1) == 0) {
      local_30 = 1;
    }
    else if ((local_19 & 1) == 0) {
      uVar3 = local_18;
      _objc_getAssociatedObject(local_18,DAT_026dfb10);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_38 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608);
        (*(code *)PTR__objc_msgSend_02578628)(param_1,local_18,PTR_s_setAlpha__026ca860);
        _objc_setAssociatedObject(local_18,DAT_026dfb10,0,1);
      }
      _objc_storeStrong(&local_38,0);
      local_30 = 0;
    }
    else {
      uVar4 = local_18;
      _objc_getAssociatedObject(local_18,DAT_026dfb10);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      uVar3 = local_18;
      uVar1 = DAT_026dfb10;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      if (uVar4 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_alpha_026ca4d8);
        (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar2,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar3,uVar1,puVar2,1);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      (*(code *)PTR__objc_msgSend_02578628)(0,local_18,PTR_s_setAlpha__026ca860);
      local_30 = 1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

