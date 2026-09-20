// wcr_scheduleColdStartCatchUp @ 01af8f50

/* Function Stack Size: 0x10 bytes */

void WCRefineHomeAvatarStripView::wcr_scheduleColdStartCatchUp(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  dispatch_time_t dVar8;
  long lVar9;
  double dVar10;
  undefined *local_200;
  undefined *local_1f8;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined1 auStack_158 [8];
  ID local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  undefined *local_f0;
  undefined1 auStack_e8 [8];
  ID local_e0;
  SEL local_d8;
  ID local_d0;
  undefined1 auStack_c8 [128];
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  IVar2 = param_1;
  local_d8 = param_2;
  local_d0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_coldStartCatchUpToken_026be6b8);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setColdStartCatchUpToken__026be6c0,IVar2 + 1);
  IVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_coldStartCatchUpToken_026be6b8);
  local_e0 = IVar2;
  _objc_initWeak(auStack_e8,local_d0);
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323da8,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fe3333333333333,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0
            );
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_40 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff8000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0
            );
  _objc_retainAutoreleasedReturnValue();
  dVar10 = 3.0;
  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar7;
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _memset(auStack_148,0,0x40);
  puVar3 = local_f0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1f8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_c8,0x10);
  if (local_1f8 != (undefined *)0x0) {
    lVar9 = *local_138;
    local_200 = (undefined *)0x0;
    do {
      do {
        if (*local_138 - lVar9 != 0) {
          _objc_enumerationMutation(*local_138 - lVar9,puVar3);
        }
        local_108 = *(undefined8 *)(local_140 + (long)local_200 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_doubleValue_026ca608);
        dVar10 = dVar10 * 1000000000.0;
        dVar8 = _dispatch_time(0,(long)dVar10);
        puVar4 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_180 = PTR___NSConcreteStackBlock_02578660;
        local_178 = 0xc2000000;
        local_174 = 0;
        local_170 = FUN_01af9418;
        local_168 = &DAT_0257c708;
        _objc_copyWeak(auStack_158,auStack_e8);
        uVar1 = local_108;
        local_150 = local_e0;
        (*(code *)PTR__objc_retain_02578638)();
        local_160 = uVar1;
        _dispatch_after(dVar8,puVar4,&local_180);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_storeStrong(&local_160,0);
        _objc_destroyWeak(auStack_158);
        local_200 = local_200 + 1;
      } while (local_200 < local_1f8);
      local_1f8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_c8,0x10)
      ;
      local_200 = (undefined *)0x0;
    } while (local_1f8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_f0,0);
  _objc_destroyWeak(auStack_e8);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

