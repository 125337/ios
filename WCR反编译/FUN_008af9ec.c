// FUN_008af9ec @ 008af9ec

/* WARNING: Removing unreachable block (ram,0x008afa98) */
/* WARNING: Removing unreachable block (ram,0x008b0344) */
/* WARNING: Removing unreachable block (ram,0x008b0354) */
/* WARNING: Removing unreachable block (ram,0x008b03c4) */
/* WARNING: Removing unreachable block (ram,0x008b0320) */

void FUN_008af9ec(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  long lVar6;
  ulong local_288;
  ulong local_280;
  ulong local_200;
  ulong local_1f8;
  ulong local_1c8;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  undefined8 local_130;
  ulong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108 [2];
  byte local_f1;
  ulong local_f0;
  long local_e8;
  ulong local_e0;
  undefined1 local_d1;
  undefined4 local_d0;
  byte local_b9;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  FUN_008b4e10();
  if (((param_1 & 1) == 0) || (FUN_008c0c98(), (param_1 & 1) == 0)) {
    local_d1 = 0;
    FUN_008b4e10();
    if (((param_1 & 1) != 0) &&
       (lVar2 = DAT_028cde90,
       (*(code *)PTR__objc_msgSend_02578628)(DAT_028cde90,PTR_s_count_0269cfe0),
       lVar6 = DAT_028cde90, lVar2 != 0)) {
      local_e0 = 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = lVar6;
      local_f1 = 0;
      uVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_arrContacts_026a9b20);
      if ((uVar3 & 1) == 0) {
        local_1c8 = 0;
      }
      else {
        local_1c8 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_arrContacts_026a9b20);
        _objc_retainAutoreleasedReturnValue();
        local_f1 = 1;
        local_f0 = local_1c8;
      }
      _objc_storeStrong(&local_e0,local_1c8);
      if ((local_f1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f0);
      }
      local_108[0] = 0;
      local_110 = 0;
      local_118 = 0;
      local_120 = 0;
      FUN_008c0508(local_e8,&local_118,&local_120);
      _objc_storeStrong(local_108,local_118);
      _objc_storeStrong(&local_110,local_120);
      lVar6 = local_108[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_108[0],PTR_s_count_0269cfe0);
      local_d1 = lVar6 != 0;
      uVar3 = local_e0;
      FUN_008c0948();
      _objc_retainAutoreleasedReturnValue();
      local_128 = uVar3;
      _memset(auStack_170,0,0x40);
      uVar3 = local_128;
      (*(code *)PTR__objc_retain_02578638)();
      local_1f8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,0x10);
      if (local_1f8 != 0) {
        lVar6 = *local_160;
        local_200 = 0;
        do {
          do {
            if (*local_160 - lVar6 != 0) {
              _objc_enumerationMutation(*local_160 - lVar6,uVar3);
            }
            local_130 = *(undefined8 *)(local_168 + local_200 * 8);
            local_200 = local_200 + 1;
          } while (local_200 < local_1f8);
          local_1f8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,
                     0x10);
          local_200 = 0;
        } while (local_1f8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      lVar6 = local_108[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_108[0],PTR_s_count_0269cfe0);
      if ((lVar6 != 0) &&
         (uVar3 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0),
         uVar3 != 0)) {
        FUN_008c0db0(uVar3,local_108[0],local_e0);
        uVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_setArrMsgs__026a9878);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setArrMsgs__026a9878,local_110);
        }
      }
      lVar6 = local_108[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_108[0],PTR_s_count_0269cfe0);
      DAT_028ce028 = lVar6 != 0;
      lVar6 = local_108[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_108[0],PTR_s_count_0269cfe0);
      if (lVar6 == 0) {
        local_288 = 0;
      }
      else {
        local_280 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
        if (local_280 == 0) {
          local_280 = 1;
        }
        local_288 = local_280;
      }
      DAT_028ce030 = local_288;
      _objc_storeStrong(&local_128);
      _objc_storeStrong(&local_110,0);
      _objc_storeStrong(local_108,0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_e0,0);
    }
    (*DAT_028cdf70)(local_b0,local_b8);
    local_d0 = 0;
    _objc_storeStrong(&DAT_028cde90,0);
    if ((DAT_028ce028 & 1) != 0) {
      dVar4 = _dispatch_time(0,3000000000);
      puVar5 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar4,puVar5,&PTR___NSConcreteGlobalBlock_02580cf0);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
  }
  else {
    local_b9 = 0;
    (*DAT_028cdf70)(local_b0,local_b8);
    local_d0 = 0;
    FUN_008c0ca8(0x4008000000000000);
    if ((local_b9 & 1) != 0) {
      _objc_exception_rethrow();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x8afa88);
      (*pcVar1)();
    }
  }
  local_d0 = 0;
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

