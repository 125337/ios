// FUN_0150c2ac @ 0150c2ac

void FUN_0150c2ac(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 auStack_90 [24];
  long local_78;
  ulong local_70;
  ulong local_68;
  undefined1 *local_60;
  undefined4 local_54;
  ulong local_50;
  undefined1 local_41;
  ulong local_40;
  undefined1 *local_38;
  long local_30;
  ulong local_28;
  ulong local_20;
  long local_18;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  uVar1 = local_40;
  local_41 = param_2;
  FUN_0150c520(local_40,param_2);
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar1;
  if (uVar1 == 0) {
    local_38 = (undefined1 *)0x0;
    local_54 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_50;
    local_60 = puVar2;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_bytes_026a9630);
    local_68 = uVar1;
    for (local_70 = 0; uVar1 = local_70, uVar3 = local_50,
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0), uVar1 < uVar3;
        local_70 = local_70 + local_78) {
      puVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
      if (section_00000068.segname + 7 < puVar4) {
LAB_0150c408:
        local_38 = (undefined1 *)0x0;
        goto LAB_0150c4e4;
      }
      uVar1 = local_68 + local_70;
      uVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      FUN_0150d184(uVar1,uVar3 - local_70,0,auStack_90);
      puVar4 = local_60;
      if ((uVar1 & 1) == 0) goto LAB_0150c408;
      local_28 = local_70;
      local_30 = local_78;
      local_20 = local_70;
      local_18 = local_78;
      uVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_subdataWithRange__026a9e88,local_70,local_78);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    puVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_copy_0269d150);
    local_38 = puVar4;
LAB_0150c4e4:
    local_54 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_38);
  return;
}

