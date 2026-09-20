// FUN_01db9f58 @ 01db9f58

void FUN_01db9f58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  cfstringStruct *local_118;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_b8;
  cfstringStruct *local_a8;
  cfstringStruct *local_98;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined8 local_78;
  long local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = 0;
  local_70 = param_1;
  _objc_storeStrong(&local_78);
  local_80 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_80,param_3);
  local_88 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_88,param_4);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  local_68 = &cf_title;
  local_48 = local_78;
  local_60 = &cf_usr;
  pcVar3 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_usr_026af770);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_f8 = &cf___;
  }
  else {
    local_f8 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_usr_026af770);
    _objc_retainAutoreleasedReturnValue();
    local_98 = local_f8;
  }
  local_40 = local_f8;
  local_58 = &cf_name;
  uVar5 = *(ulong *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_privacyOn_026c4ea0);
  bVar2 = false;
  bVar1 = false;
  if ((uVar5 & 1) == 0) {
    local_a8 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_displayName_026ac378);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    pcVar6 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar6 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      local_108 = &cf_lg;
    }
    else {
      local_108 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_displayName_026ac378);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = local_108;
    }
    bVar1 = pcVar6 != (cfstringStruct *)0x0;
    local_100 = local_108;
  }
  else {
    local_100 = &cf__YS;
  }
  local_38 = local_100;
  local_50 = &cf_detail;
  if (local_88 == (cfstringStruct *)0x0) {
    local_118 = &cf___;
  }
  else {
    local_118 = local_88;
  }
  local_30 = local_118;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_48,&local_68,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_addObject__0269d180);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_b8);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  if (pcVar4 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

