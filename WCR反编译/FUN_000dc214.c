// FUN_000dc214 @ 000dc214

void FUN_000dc214(undefined8 param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_c0;
  undefined *local_a0;
  long local_58;
  bool local_49;
  undefined *local_48;
  undefined4 local_40;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c8375);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_18;
  if (lVar3 == 0) {
    local_40 = 1;
    local_30 = 0;
  }
  else {
    local_30 = lVar3 + -1;
    local_49 = false;
    bVar1 = local_30 == 0;
    if (bVar1) {
      local_a0 = (undefined *)0x0;
    }
    else {
      local_a0 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                 local_30);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_a0;
    }
    local_49 = !bVar1;
    _objc_setAssociatedObject(lVar2,&DAT_028c8375,local_a0,1);
    if ((local_49 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if ((local_30 == 0) && (local_20 != 0)) {
      lVar2 = local_18;
      _objc_getAssociatedObject(local_18,&DAT_028c8377);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = lVar2;
      if (lVar2 == 0) {
        local_c0 = local_28;
      }
      local_58 = lVar2;
      _object_setIvar(local_18,local_20,local_c0);
      _objc_setAssociatedObject(local_18,&DAT_028c8377,0,1);
      _objc_storeStrong(&local_58,0);
      local_40 = 0;
    }
    else {
      local_40 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

