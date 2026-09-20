// FUN_004eacb8 @ 004eacb8

void FUN_004eacb8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_18;
  if ((uVar2 & 1) == 0) {
    local_28 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar3;
    _objc_getAssociatedObject(uVar3,&DAT_028cadf6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_38 = uVar3;
    _objc_getAssociatedObject(local_30,&DAT_028cadf7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_30;
    local_40 = uVar2;
    _objc_getAssociatedObject(local_30,&DAT_028cadf5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_48 = uVar3;
    _objc_getAssociatedObject(local_30,&DAT_028cadf3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_30;
    local_50 = uVar2;
    _objc_getAssociatedObject(local_30,&DAT_028cadf4);
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar3;
    if ((((local_38 == 0) && (local_40 == 0)) && (local_48 == 0)) &&
       ((local_50 == 0 && (uVar3 == 0)))) {
      local_28 = 1;
    }
    else {
      if (local_38 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_removeGestureRecognizer__026ca808,local_38);
        _objc_setAssociatedObject(local_30,&DAT_028cadf6,0,1);
      }
      if (local_40 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_removeGestureRecognizer__026ca808,local_40);
        _objc_setAssociatedObject(local_30,&DAT_028cadf7,0,1);
      }
      _objc_setAssociatedObject(local_30,&DAT_028cadf5,0,3);
      _objc_setAssociatedObject(local_30,&DAT_028cadf3,0,1);
      _objc_setAssociatedObject(local_30,&DAT_028cadf4,0,1);
      local_28 = 0;
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

