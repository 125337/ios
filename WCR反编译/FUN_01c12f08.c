// FUN_01c12f08 @ 01c12f08

void FUN_01c12f08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_168;
  undefined *local_138;
  undefined *local_130;
  int local_124;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined4 local_bc;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_01bfe1c0();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
  local_b0 = local_b8;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_168 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_168 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = local_168;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)();
    FUN_01bfdd7c();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar3;
    if ((puVar3 == (undefined *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_respondsToSelector__026ca818,PTR_s_IdToLabelName__026c0c28),
       ((ulong)puVar3 & 1) == 0)) {
      puVar3 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_bc = 1;
      local_b0 = puVar3;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = puVar3;
      _memset(auStack_120,0,0x40);
      puVar3 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_198 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      if (local_198 != (undefined *)0x0) {
        lVar6 = *local_110;
        local_1a0 = (undefined *)0x0;
        do {
          do {
            if (*local_110 - lVar6 != 0) {
              _objc_enumerationMutation(*local_110 - lVar6,puVar3);
            }
            uVar7 = *(ulong *)(local_118 + (long)local_1a0 * 8);
            local_e0 = uVar7;
            FUN_01bfdeac();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            iVar5 = (int)uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar7);
            local_124 = iVar5;
            if (iVar5 != 0) {
              puVar1 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_IdToLabelName__026c0c28,uVar4 & 0xffffffff);
              _objc_retainAutoreleasedReturnValue();
              local_130 = puVar1;
              FUN_01bfdeac();
              _objc_retainAutoreleasedReturnValue();
              local_138 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
              if (puVar1 != (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_138);
              }
              _objc_storeStrong(&local_138);
              _objc_storeStrong(&local_130,0);
            }
            local_1a0 = local_1a0 + 1;
          } while (local_1a0 < local_198);
          local_198 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_1a0 = (undefined *)0x0;
        } while (local_198 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_bc = 1;
      local_b0 = puVar3;
      _objc_storeStrong(&local_d8,0);
    }
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_bc = 1;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

