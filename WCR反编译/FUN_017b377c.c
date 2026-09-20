// FUN_017b377c @ 017b377c

void FUN_017b377c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
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
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  long local_158;
  undefined *local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  undefined *local_100 [3];
  undefined *local_e8;
  undefined4 local_dc;
  long local_d8;
  undefined1 auStack_d0 [128];
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  if (local_d8 == 0) {
    local_dc = 1;
  }
  else {
    DAT_028e4220 = DAT_028e4220 + 1;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar2;
    _objc_setAssociatedObject(local_d8,&DAT_028e4228,puVar2,1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c90,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fd0000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
               PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323d00,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    dVar10 = DAT_02323f50;
    local_38 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5
              );
    _objc_retainAutoreleasedReturnValue();
    local_100[0] = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_148,0,0x40);
    puVar2 = local_100[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_1f8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_d0,0x10);
    if (local_1f8 != (undefined *)0x0) {
      lVar9 = *local_138;
      local_200 = (undefined *)0x0;
      do {
        do {
          if (*local_138 - lVar9 != 0) {
            _objc_enumerationMutation(*local_138 - lVar9,puVar2);
          }
          local_108 = *(undefined8 *)(local_140 + (long)local_200 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_doubleValue_026ca608);
          dVar10 = dVar10 * 1000000000.0;
          dVar8 = _dispatch_time(0,(long)dVar10);
          puVar3 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = local_d8;
          local_178 = PTR___NSConcreteStackBlock_02578660;
          local_170 = 0xc2000000;
          local_16c = 0;
          local_168 = FUN_017b55d4;
          local_160 = &DAT_02578e60;
          (*(code *)PTR__objc_retain_02578638)();
          puVar4 = local_e8;
          local_158 = lVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_150 = puVar4;
          _dispatch_after(dVar8,puVar3,&local_178);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_150);
          _objc_storeStrong(&local_158,0);
          local_200 = local_200 + 1;
        } while (local_200 < local_1f8);
        local_1f8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_d0,
                   0x10);
        local_200 = (undefined *)0x0;
      } while (local_1f8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(local_100);
    _objc_storeStrong(&local_e8,0);
    local_dc = 0;
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

