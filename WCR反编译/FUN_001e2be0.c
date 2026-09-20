// FUN_001e2be0 @ 001e2be0

void FUN_001e2be0(undefined8 param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_e8;
  ulong local_a8;
  undefined *local_58;
  ulong local_50;
  ulong local_48;
  long lStack_40;
  undefined *local_38;
  ulong local_30;
  long local_28;
  
  local_50 = 0;
  local_48 = param_2;
  lStack_40 = param_3;
  _objc_storeStrong(&local_50,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_48;
  uVar2 = local_50;
  local_58 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
  puVar1 = local_58;
  if (uVar3 < uVar2) {
    local_30 = local_48;
    local_28 = lStack_40;
    uVar3 = local_48 + lStack_40;
    local_e8 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    if (uVar3 < local_e8) {
      local_e8 = uVar3;
    }
    for (local_a8 = local_48; puVar1 = local_58, local_a8 < local_e8; local_a8 = local_a8 + 1) {
      uVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = puVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = puVar1;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_38);
  return;
}

