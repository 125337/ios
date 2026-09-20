// FUN_000794a8 @ 000794a8

void FUN_000794a8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_38 [3];
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    _objc_setAssociatedObject(local_18,DAT_026df770,0,1);
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026df778);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38[0] = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_unsignedIntValue_0269db10);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setConerSize__0269e110,uVar1 & 0xffffffff);
    }
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_setHeadImageViewCornerRadius__0269de40);
    if ((uVar1 & 1) != 0) {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_preferCornerSize_0269de38);
      uVar1 = local_18;
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_preferCornerSize_0269de38);
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,uVar1,PTR_s_setHeadImageViewCornerRadius__0269de40);
      }
    }
    _objc_storeStrong(local_38,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

