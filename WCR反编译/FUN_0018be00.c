// FUN_0018be00 @ 0018be00

ulong FUN_0018be00(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar3;
  undefined *puVar4;
  ulong local_e0;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  ulong *puVar2;
  
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  local_30 = param_3;
  local_28 = param_2;
  if (((local_20 == 0) || ((long)param_3 < 1)) || (FUN_0018b0b8(param_3), (uVar1 & 1) == 0)) {
    local_18 = local_30;
    local_40 = 1;
  }
  else {
    uVar3 = local_20;
    FUN_0018a9d0(local_20,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar3 = local_50;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar3 & 1) == 0) {
      local_18 = local_30;
    }
    else {
      local_e0 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
      if ((long)local_e0 < 0) {
        local_18 = 0;
      }
      else {
        if ((long)local_30 < (long)local_e0) {
          local_e0 = local_30;
        }
        local_18 = local_e0;
      }
    }
    local_40 = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

