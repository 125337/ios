// FUN_00374800 @ 00374800

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00374800(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  dispatch_time_t dVar6;
  long lVar7;
  double dVar8;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  ulong local_140;
  long local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
  long local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  ulong local_c8;
  undefined1 auStack_c0 [128];
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_2);
  if ((local_c8 == 0) || (uVar1 = local_c8, FUN_00373d3c(), (uVar1 & 1) == 0)) {
    local_d4 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_c8;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    DAT_028ca1e8 = DAT_028ca1e8 + 1;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_e0 = DAT_028ca1e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02324020,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff3333333333333,PTR__OBJC_CLASS___NSNumber_026ce038,
               PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    dVar8 = 2.5;
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
    local_1d0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_c0,0x10);
    if (local_1d0 != (undefined *)0x0) {
      lVar7 = *local_120;
      local_1d8 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar7 != 0) {
            _objc_enumerationMutation(*local_120 - lVar7,puVar2);
          }
          local_f0 = *(undefined8 *)(local_128 + (long)local_1d8 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_doubleValue_026ca608);
          dVar8 = dVar8 * 1000000000.0;
          dVar6 = _dispatch_time(0,(long)dVar8);
          puVar3 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_c8;
          local_160 = PTR___NSConcreteStackBlock_02578660;
          local_158 = 0xc2000000;
          local_154 = 0;
          local_150 = FUN_003c3ef4;
          local_148 = &DAT_0257cc98;
          local_138 = local_e0;
          (*(code *)PTR__objc_retain_02578638)();
          local_140 = uVar1;
          _dispatch_after(dVar6,puVar3,&local_160);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_140,0);
          local_1d8 = local_1d8 + 1;
        } while (local_1d8 < local_1d0);
        local_1d0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_c0,
                   0x10);
        local_1d8 = (undefined *)0x0;
      } while (local_1d0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_e8,0);
    local_d4 = 0;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

