// FUN_00059dcc @ 00059dcc

void FUN_00059dcc(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  long lVar7;
  ulong local_1a0;
  ulong local_198;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  undefined *local_130;
  ulong local_128;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined *local_d0;
  uint local_c8;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar2 = local_b0;
  local_b8 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_count_0269cfe0);
  if ((uVar2 == 0) || (FUN_0004bf04(), (uVar2 & 1) == 0)) {
    local_c8 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar3;
    _memset(auStack_118,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_198 != 0) {
      lVar7 = *local_108;
      local_1a0 = 0;
      do {
        do {
          if (*local_108 - lVar7 != 0) {
            _objc_enumerationMutation(*local_108 - lVar7,uVar2);
          }
          local_d8 = *(undefined8 *)(local_110 + local_1a0 * 8);
          uVar4 = 0;
          FUN_00052874(0,local_d8);
          _objc_retainAutoreleasedReturnValue();
          local_120 = uVar4;
          FUN_0005a278(uVar4,local_d8);
          if ((uVar4 & 1) == 0) {
            if (local_b8 < 8) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_d8);
            }
            local_c8 = 3;
          }
          else {
            FUN_00051888(local_120,local_d8,0);
            local_c8 = 0;
          }
          _objc_storeStrong(&local_120,0);
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_1a0 = 0;
      } while (local_198 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    if (puVar3 != (undefined *)0x0) {
      dVar5 = _dispatch_time(0,500000000);
      puVar6 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_d0;
      local_150 = PTR___NSConcreteStackBlock_02578660;
      local_148 = 0xc2000000;
      local_144 = 0;
      local_140 = FUN_0005a544;
      local_138 = &DAT_025791c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = puVar1;
      local_128 = local_b8;
      _dispatch_after(dVar5,puVar6,&local_150);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      _objc_storeStrong(&local_130,0);
    }
    local_c8 = (uint)(puVar3 == (undefined *)0x0);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

