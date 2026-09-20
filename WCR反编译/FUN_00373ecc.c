// FUN_00373ecc @ 00373ecc

void FUN_00373ecc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  dispatch_time_t dVar6;
  long lVar7;
  double dVar8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
  undefined1 local_d9;
  long local_d8;
  ulong local_d0;
  long local_c8;
  undefined1 auStack_c0 [128];
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  local_c8 = param_1;
  _objc_storeStrong(&local_d0);
  local_d8 = param_1;
  FUN_0037435c();
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_tryInstall_026a2310);
  local_d9 = (undefined1)uVar1;
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
               PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    dVar8 = 3.0;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_130,0,0x40);
    puVar2 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_c0,0x10);
    if (local_1b8 != (undefined *)0x0) {
      lVar7 = *local_120;
      local_1c0 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar7 != 0) {
            _objc_enumerationMutation(*local_120 - lVar7,puVar2);
          }
          local_f0 = *(undefined8 *)(local_128 + (long)local_1c0 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_doubleValue_026ca608);
          dVar8 = dVar8 * 1000000000.0;
          dVar6 = _dispatch_time(0,(long)dVar8);
          puVar3 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          local_158 = PTR___NSConcreteStackBlock_02578660;
          local_150 = 0xc0000000;
          local_14c = 0;
          local_148 = FUN_003744b8;
          local_140 = &DAT_02578c00;
          local_138 = *(undefined8 *)(param_1 + 0x20);
          _dispatch_after(dVar6,puVar3,&local_158);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_1c0 = local_1c0 + 1;
        } while (local_1c0 < local_1b8);
        local_1b8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_c0,
                   0x10);
        local_1c0 = (undefined *)0x0;
      } while (local_1b8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_e8,0);
  }
  if (local_d0 != 0) {
    _objc_storeWeak(&DAT_028ca0d0,local_d0);
    FUN_00374514(local_d0,&cf_coldBootInstall);
    puVar2 = PTR_s_wcrGrouping_scheduleRefreshForTr_026a28a0;
    uVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_respondsToSelector__026ca818,
               PTR_s_wcrGrouping_scheduleRefreshForTr_026a28a0);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,puVar2);
      FUN_00374800(local_d0,&cf_coldBootInstall);
    }
  }
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

