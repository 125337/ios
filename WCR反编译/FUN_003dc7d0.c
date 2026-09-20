// FUN_003dc7d0 @ 003dc7d0

void FUN_003dc7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_40;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_4;
  if (local_18 == 0) {
    local_34 = 1;
  }
  else {
    FUN_003dc694(local_18,local_20,local_28,param_4);
    uVar1 = local_18;
    FUN_003ca4e8();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_18;
    local_40 = uVar1;
    if (uVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) != 0) {
        _objc_storeStrong(&local_40,local_18);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTintColor__026caab0,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setContentMode__026ca8e0,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAccessibilityLabel__0269e968,&cf_4YP);
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setImage__026ca978);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setImage__026ca978,local_20);
    }
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

