// FUN_006e2b48 @ 006e2b48

void FUN_006e2b48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  dispatch_time_t dVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  double local_f0;
  undefined1 local_e1;
  undefined1 *local_e0;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  puVar1 = PTR_WCRefineScheduledTask_026ce850;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineScheduledTask_026ce850,PTR_s_taskID__026a6cd8,local_b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineScheduledTask_026ce850;
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineScheduledTask_026ce850,PTR_s_stringArrayInTask_forKey__026a6cf0,local_b0,
             _kWCRScheduledTaskKeyTargets);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineScheduledTask_026ce850;
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineScheduledTask_026ce850,PTR_s_resolvedTargetsForSending__026a6cf8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_c0;
  local_d0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    local_d4 = 1;
  }
  else {
    puVar1 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScheduledTask_026ce850,PTR_s_integerInTask_forKey__026a6cc8,local_b0,
               _kWCRScheduledTaskKeyScheduleMode);
    local_e1 = puVar1 == (undefined1 *)((long)&MACH_HEADER.cputype + 1);
    local_e0 = puVar1;
    FUN_006e2754(local_c0,local_b8,local_e1);
    puVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    if (puVar1 == (undefined *)0x0) {
      local_d4 = 1;
    }
    else {
      local_f0 = 0.0;
      _memset(auStack_138,0,0x40);
      puVar1 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10)
      ;
      if (local_1b0 != (undefined *)0x0) {
        lVar5 = *local_128;
        local_1b8 = (undefined *)0x0;
        do {
          do {
            if (*local_128 - lVar5 != 0) {
              _objc_enumerationMutation(*local_128 - lVar5,puVar1);
            }
            uVar6 = *(undefined8 *)(local_130 + (long)local_1b8 * 8);
            local_f8 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_copy_0269d150);
            uVar3 = local_b0;
            local_140 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_copy_0269d150);
            local_148 = uVar3;
            dVar4 = _dispatch_time(0,(long)(local_f0 * 1000000000.0));
            puVar2 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_148;
            local_178 = PTR___NSConcreteStackBlock_02578660;
            local_170 = 0xc2000000;
            local_16c = 0;
            local_168 = FUN_006e3004;
            local_160 = &DAT_0257a7a0;
            (*(code *)PTR__objc_retain_02578638)();
            uVar6 = local_140;
            local_158 = uVar3;
            (*(code *)PTR__objc_retain_02578638)();
            local_150 = uVar6;
            _dispatch_after(dVar4,puVar2,&local_178);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            local_f0 = local_f0 + 1.2;
            _objc_storeStrong(&local_150);
            _objc_storeStrong(&local_158,0);
            _objc_storeStrong(&local_148,0);
            _objc_storeStrong(&local_140,0);
            local_1b8 = local_1b8 + 1;
          } while (local_1b8 < local_1b0);
          local_1b0 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1b8 = (undefined *)0x0;
        } while (local_1b0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_d4 = 0;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

