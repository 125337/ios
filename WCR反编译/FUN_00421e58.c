// FUN_00421e58 @ 00421e58

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00421e58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  undefined *local_2d8;
  undefined *local_268;
  undefined *local_260;
  undefined *local_178;
  undefined *local_168;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  ulong local_120;
  undefined8 local_118;
  undefined8 local_110 [3];
  undefined *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = 0;
  _objc_storeStrong(&local_e8,param_1);
  local_f0 = (undefined *)0x0;
  _objc_storeStrong(&local_f0,param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_e8;
  local_f8 = puVar1;
  FUN_00422e38(local_e8,&cf_m_oVerifyContact);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = &cf_toContact;
  local_110[0] = uVar2;
  _NSSelectorFromString();
  FUN_00422cd4(uVar2,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  local_118 = uVar2;
  _memset(auStack_160,0,0x40);
  uVar4 = local_118;
  FUN_00422aac(local_118,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_110[0];
  local_d8 = uVar4;
  FUN_00422aac(local_110[0],&cf_m_nsSource);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = local_110[0];
  local_d0 = uVar5;
  FUN_00422aac(local_110[0],&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_e8;
  pcVar3 = &cf_getRealUserName;
  local_c8 = uVar6;
  _NSSelectorFromString();
  FUN_00422cd4(uVar2,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_e8;
  local_c0 = uVar7;
  FUN_00422aac(local_e8,&cf_m_nsOriginalUsrName);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = local_e8;
  local_b8 = uVar8;
  FUN_00422aac(local_e8,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_b0 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d8,6);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar9);
  (*(code *)PTR__objc_release_02578630)(uVar8);
  (*(code *)PTR__objc_release_02578630)(uVar7);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar6);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  local_260 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10);
  if (local_260 != (undefined *)0x0) {
    lVar11 = *local_150;
    local_268 = (undefined *)0x0;
    do {
      do {
        if (*local_150 - lVar11 != 0) {
          _objc_enumerationMutation(*local_150 - lVar11,puVar1);
        }
        uVar12 = *(ulong *)(local_158 + (long)local_268 * 8);
        local_120 = uVar12;
        FUN_00422fbc();
        if ((uVar12 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addObject__0269d180,local_120);
        }
        local_268 = local_268 + 1;
      } while (local_268 < local_260);
      local_260 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10)
      ;
      local_268 = (undefined *)0x0;
    } while (local_260 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar10 = local_f8;
  FUN_004231e0(local_f8,0);
  _objc_retainAutoreleasedReturnValue();
  local_168 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_length_0269cca0);
  puVar1 = local_168;
  if (puVar10 == (undefined *)0x0) {
    puVar10 = local_f0;
    FUN_004231e0(local_f0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_168;
    local_168 = puVar10;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar10 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
    puVar1 = local_168;
    if (puVar10 == (undefined *)0x0) {
      puVar10 = local_f8;
      FUN_004231e0(local_f8,1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_168;
      local_168 = puVar10;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
      if (puVar1 == (undefined *)0x0) {
        local_2d8 = local_f0;
        FUN_004231e0(local_f0,1);
        _objc_retainAutoreleasedReturnValue();
        local_178 = local_2d8;
      }
      else {
        local_2d8 = local_168;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = local_2d8;
      if (puVar1 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_178);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = puVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = puVar1;
  }
  _objc_storeStrong(&local_168);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(local_110,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_e0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

