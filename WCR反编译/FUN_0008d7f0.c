// FUN_0008d7f0 @ 0008d7f0

void FUN_0008d7f0(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_78;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_28 = 0;
    local_34 = 1;
  }
  else {
    local_18 = &DAT_028c7f88;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02579b10);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    if (DAT_028c7f80 == 0) {
      local_28 = 0;
      local_34 = 1;
    }
    else {
      uVar1 = local_30;
      _object_getIvar(local_30,DAT_028c7f80);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      local_40 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) == 0) {
        local_78 = 0;
      }
      else {
        local_78 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_78;
      local_34 = 1;
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

