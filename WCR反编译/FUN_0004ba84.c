// FUN_0004ba84 @ 0004ba84

void FUN_0004ba84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar4;
  char *pcVar5;
  undefined *puVar6;
  dispatch_time_t dVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong local_1a8;
  ulong local_1a0;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  char *local_d8;
  uint local_d0;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  undefined8 uVar3;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  uVar3 = local_b0;
  (*DAT_028c7ba0)(local_b0,local_b8,local_c0);
  uVar2 = (uint)uVar3;
  FUN_0004bf04();
  if (((uVar2 & 1) == 0) ||
     (uVar4 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
     uVar4 == 0)) {
    local_d0 = 1;
  }
  else {
    pcVar5 = "CMessageWrap";
    _objc_getClass();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    uVar4 = local_c0;
    local_d8 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_arrayWithCapacity__0269d9b8,uVar4);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar6;
    _memset(auStack_128,0,0x40);
    uVar4 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_1a0 != 0) {
      lVar9 = *local_118;
      local_1a8 = 0;
      do {
        do {
          if (*local_118 - lVar9 != 0) {
            _objc_enumerationMutation(*local_118 - lVar9,uVar4);
          }
          uVar10 = *(ulong *)(local_120 + local_1a8 * 8);
          local_e8 = uVar10;
          if ((local_d8 != (char *)0x0) &&
             ((*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,local_d8),
             (uVar10 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_e8);
          }
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_1a8 = 0;
      } while (local_1a0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar6 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
    if (puVar6 != (undefined *)0x0) {
      dVar7 = _dispatch_time(0,1000000000);
      puVar8 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_e0;
      local_150 = PTR___NSConcreteStackBlock_02578660;
      local_148 = 0xc2000000;
      local_144 = 0;
      local_140 = FUN_00059d98;
      local_138 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = puVar1;
      _dispatch_after(dVar7,puVar8,&local_150);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      _objc_storeStrong(&local_130,0);
    }
    local_d0 = (uint)(puVar6 == (undefined *)0x0);
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

