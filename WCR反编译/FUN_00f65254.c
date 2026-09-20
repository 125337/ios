// FUN_00f65254 @ 00f65254

void FUN_00f65254(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_50;
  ulong local_48;
  undefined *local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_50 = local_18;
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
  if (0x13 < local_50) {
    local_50 = 0x14;
  }
  for (local_48 = 0; puVar1 = local_20, local_48 < local_50; local_48 = local_48 + 1) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_00f6649c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  FUN_00f667a4(local_20);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

