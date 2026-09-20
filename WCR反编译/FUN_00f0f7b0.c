// FUN_00f0f7b0 @ 00f0f7b0

void FUN_00f0f7b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong local_d8;
  ulong local_a8;
  ulong local_a0;
  undefined *local_98;
  ulong local_90;
  int local_84;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulong local_68;
  long local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  local_60 = param_1;
  _objc_storeStrong(&local_68);
  uVar1 = local_68;
  local_80 = param_1;
  local_78 = param_4;
  local_70 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_numberOfRanges_0269ef18);
  if (uVar1 < 2) {
    local_84 = 1;
    goto LAB_00f0fb20;
  }
  uVar5 = *(ulong *)(param_1 + 0x20);
  uVar1 = local_68;
  puVar4 = PTR_s_rangeAtIndex__0269ef20;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rangeAtIndex__0269ef20,1);
  local_a0 = uVar1;
  local_98 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_substringWithRange__0269d138,uVar1,puVar4);
  _objc_retainAutoreleasedReturnValue();
  local_90 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_stringByRemovingPercentEncoding_0269d840);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = uVar5;
  if (uVar5 == 0) {
    local_d8 = local_90;
  }
  _objc_storeStrong(&local_90,local_d8);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  uVar1 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_hasSuffix__0269d018,&cf__);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
LAB_00f0f994:
      local_84 = 1;
    }
    else {
      uVar1 = *(ulong *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsObject__0269cbb8,local_a8);
      if ((uVar1 & 1) != 0) goto LAB_00f0f994;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__0269d180,local_a8);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      local_58 = &cf_name;
      local_40 = local_a8;
      local_50 = &cf_path;
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_pathByAppendingFileName__026abb78,local_a8);
      _objc_retainAutoreleasedReturnValue();
      local_48 = &cf_title;
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      local_38 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_displayTitleForBackupName__026abc90,local_a8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_84 = 0;
    }
    _objc_storeStrong(&local_a8,0);
  }
  else {
    local_84 = 1;
  }
  _objc_storeStrong(&local_90,0);
  if (local_84 == 0) {
    local_84 = 0;
  }
LAB_00f0fb20:
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

