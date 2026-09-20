// FUN_0054ace0 @ 0054ace0

void FUN_0054ace0(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  _objc_getAssociatedObject(local_20,&DAT_028cb3e8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if (uVar1 == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_likeUsers_026a4e88);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
      _objc_storeStrong(&local_40,*(undefined8 *)PTR____NSArray0___02578280);
    }
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
    local_48 = uVar1;
    _objc_setAssociatedObject(local_20,&DAT_028cb3e8,uVar1,1);
    uVar1 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_38 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = 1;
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

