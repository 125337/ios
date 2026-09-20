// FUN_006e205c @ 006e205c

/* WARNING: Removing unreachable block (ram,0x006e25b4) */

void FUN_006e205c(double param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_170;
  undefined *local_168;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined *local_d0 [3];
  undefined *local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  if ((((DAT_028cc310 & 1) != 0) || ((DAT_028cc311 & 1) != 0)) && ((DAT_028cc312 & 1) == 0)) {
    DAT_028cc312 = 1;
    local_a9 = 0;
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineScheduledTask_026ce850;
    local_b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineScheduledTask_026ce850,PTR_s_tasks_026a53a8);
    _objc_retainAutoreleasedReturnValue();
    local_d0[0] = puVar3;
    _memset(auStack_118,0,0x40);
    puVar2 = local_d0[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_168 != (undefined *)0x0) {
      lVar5 = *local_108;
      local_170 = (undefined *)0x0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,puVar2);
          }
          local_d8 = *(undefined8 *)(local_110 + (long)local_170 * 8);
          puVar3 = PTR_WCRefineScheduledTask_026ce850;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineScheduledTask_026ce850,PTR_s_isTaskEnabled__026a6cb8,local_d8);
          if (((((ulong)puVar3 & 1) != 0) &&
              ((puVar3 = PTR_WCRefineScheduledTask_026ce850,
               (*(code *)PTR__objc_msgSend_02578628)
                         (PTR_WCRefineScheduledTask_026ce850,PTR_s_isAutoClearChatTask__026a6cc0,
                          local_d8), ((ulong)puVar3 & 1) == 0 || ((DAT_028cc311 & 1) != 0)))) &&
             ((((ulong)puVar3 & 1) != 0 || ((DAT_028cc310 & 1) != 0)))) {
            puVar3 = PTR_WCRefineScheduledTask_026ce850;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineScheduledTask_026ce850,PTR_s_integerInTask_forKey__026a6cc8,
                       local_d8,_kWCRScheduledTaskKeyScheduleMode);
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineScheduledTask_026ce850,PTR_s_doubleInTask_forKey__026a6cd0,
                       local_d8,_kWCRScheduledTaskKeyLastFiredAt);
            if ((0.0 < param_1) ||
               ((puVar3 != (undefined1 *)((long)&MACH_HEADER.magic + 3) &&
                ((dword *)puVar3 != &MACH_HEADER.cputype)))) {
              puVar4 = PTR_WCRefineScheduledTask_026ce850;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineScheduledTask_026ce850,PTR_s_task_shouldFireAtDate__026a6ce0,
                         local_d8,local_b8);
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              if (((ulong)puVar4 & 1) != 0) {
                puVar4 = PTR_WCRefineScheduledTask_026ce850;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineScheduledTask_026ce850,PTR_s_taskID__026a6cd8,local_d8);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_sched_firetask___);
                _objc_retainAutoreleasedReturnValue();
                _WCRefineCrashReporterBreadcrumb();
                (*(code *)PTR__objc_release_02578630)(puVar3);
                (*(code *)PTR__objc_release_02578630)(puVar4);
                FUN_006e2b48(local_d8,local_b8);
              }
            }
            else {
              puVar3 = PTR_WCRefineScheduledTask_026ce850;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineScheduledTask_026ce850,PTR_s_taskID__026a6cd8,local_d8);
              _objc_retainAutoreleasedReturnValue();
              FUN_006e2754();
              (*(code *)PTR__objc_release_02578630)(puVar3);
            }
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_170 = (undefined *)0x0;
      } while (local_168 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(local_d0);
    _objc_storeStrong(&local_b8,0);
    DAT_028cc312 = 0;
    if ((local_a9 & 1) != 0) {
      _objc_exception_rethrow();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x6e25a4);
      (*pcVar1)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

