// FUN_00080b08 @ 00080b08

void FUN_00080b08(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_58;
  undefined4 local_50;
  undefined8 local_40;
  byte local_31;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_40 = param_4;
  local_31 = param_3;
  if ((local_28 == 0) ||
     (uVar2 = local_30, FUN_0007804c(local_30,param_3 & 1,param_4), (uVar2 & 1) == 0)) {
    local_50 = 1;
  }
  else {
    uVar3 = local_28;
    _objc_getAssociatedObject(local_28,DAT_026df778);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    uVar2 = local_28;
    uVar1 = DAT_026df778;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (uVar3 == 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_conerSize_0269e138);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_numberWithUnsignedInt__0269d800,uVar3 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,uVar1,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setConerSize__0269e110,0);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,
               PTR_s_setHeadImageViewCornerRadius__0269de40);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(0,local_28,PTR_s_setHeadImageViewCornerRadius__0269de40)
      ;
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_headImageView);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_58 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar2 & 1) != 0) {
      FUN_00073c54(local_58,3);
    }
    FUN_00081b94(local_28);
    _objc_storeStrong(&local_58,0);
    local_50 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

