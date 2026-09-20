// FUN_005720f4 @ 005720f4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005720f4(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_218;
  undefined *local_1f0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_150;
  undefined *local_148;
  bool local_139;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  cfstringStruct *local_e0;
  byte local_d1;
  undefined4 local_d0;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = (undefined *)0x0;
  _objc_storeStrong(&local_c0,param_2);
  puVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
  if (puVar3 != (undefined *)0x0) {
    uVar2 = (uint)local_b8;
    FUN_0056dec0();
    if ((uVar2 & 1) == 0) {
      local_d1 = 0;
      pcVar4 = &cf_MMMenuItem;
      _NSClassFromString();
      local_e0 = pcVar4;
      _memset(auStack_128,0,0x40);
      puVar3 = local_b8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      if (local_1b0 != (undefined *)0x0) {
        lVar6 = *local_118;
        local_1b8 = (undefined *)0x0;
        do {
          do {
            if (*local_118 - lVar6 != 0) {
              _objc_enumerationMutation(*local_118 - lVar6,puVar3);
            }
            uVar7 = *(ulong *)(local_120 + (long)local_1b8 * 8);
            local_e8 = uVar7;
            if ((local_e0 != (cfstringStruct *)0x0) &&
               ((*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,local_e0),
               (uVar7 & 1) != 0)) {
              local_d1 = 1;
              local_d0 = 2;
              goto LAB_005723c0;
            }
            local_1b8 = local_1b8 + 1;
          } while (local_1b8 < local_1b0);
          local_1b0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_1b8 = (undefined *)0x0;
        } while (local_1b0 != (undefined *)0x0);
      }
      local_d0 = 0;
LAB_005723c0:
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_139 = false;
      bVar1 = (local_d1 & 1) == 0;
      if (bVar1) {
        local_1f0 = (undefined *)0x0;
      }
      else {
        local_1f0 = local_c0;
        FUN_00572744();
        _objc_retainAutoreleasedReturnValue();
        local_138 = local_1f0;
      }
      local_139 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = local_1f0;
      if ((local_139 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_138);
      }
      if (local_130 == (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___UIMenuItem_026ce778;
        _objc_alloc();
        puVar3 = puVar5;
        FUN_00566204();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_initWithTitle_action__026a51e8,&cf_Y,puVar3);
        puVar3 = local_130;
        local_130 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      puVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_mutableCopy_0269d8a0);
      local_218 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_150 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_218 = local_150;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_148 = local_218;
      if (puVar3 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_150);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addObject__0269d180,local_130);
      puVar3 = local_148;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar3;
      local_d0 = 1;
      _objc_storeStrong(&local_148);
      _objc_storeStrong(&local_130,0);
      goto LAB_005726bc;
    }
  }
  puVar3 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = puVar3;
  local_d0 = 1;
LAB_005726bc:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

