// FUN_0043859c @ 0043859c

void FUN_0043859c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_e8;
  ulong local_80;
  undefined *local_60;
  ulong local_58;
  ulong local_50;
  undefined *local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_58 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar1;
  if (((local_58 == 0) || (local_50 == 0)) ||
     (uVar2 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_count_0269cfe0), (uVar2 & 1) == 0)
     ) {
    puVar1 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = puVar1;
  }
  else {
    uVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    for (local_80 = 0; puVar1 = local_60, local_80 < uVar2; local_80 = local_80 + local_58) {
      local_e8 = uVar2 - local_80;
      if (local_58 < local_e8) {
        local_e8 = local_58;
      }
      local_38 = local_80;
      local_40 = local_e8;
      local_30 = local_80;
      local_28 = local_e8;
      uVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_subarrayWithRange__0269d848,local_80,local_e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = puVar1;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

