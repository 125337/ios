// FUN_0036fbe8 @ 0036fbe8

void FUN_0036fbe8(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *local_560;
  undefined *local_558;
  undefined *local_520;
  undefined *local_518;
  undefined *local_4c8;
  undefined *local_4c0;
  ulong local_488;
  ulong local_480;
  ulong local_468;
  undefined *local_440;
  undefined1 auStack_438 [8];
  long local_430;
  long *local_428;
  undefined8 local_3f8;
  undefined1 auStack_3f0 [8];
  long local_3e8;
  long *local_3e0;
  undefined8 local_3b0;
  undefined1 auStack_3a8 [8];
  long local_3a0;
  long *local_398;
  undefined8 local_368;
  undefined *local_360;
  undefined *local_358;
  undefined *local_350;
  undefined *local_348;
  undefined1 auStack_340 [8];
  long local_338;
  long *local_330;
  long local_300;
  undefined *local_2f8 [4];
  cfstringStruct *local_2d8;
  char *local_2d0;
  undefined4 local_2c4;
  long local_2c0;
  ulong local_2b8;
  undefined1 auStack_2b0 [128];
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  undefined1 auStack_218 [128];
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  undefined1 auStack_178 [128];
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_2b8 = 0;
  _objc_storeStrong(&local_2b8,param_1);
  local_2c0 = 0;
  _objc_storeStrong(&local_2c0,param_2);
  lVar6 = local_2c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_length_0269cca0);
  if (lVar6 == 0) {
    local_2c4 = 1;
  }
  else {
    pcVar1 = "MMNewSessionMgr";
    _objc_getClass();
    FUN_00392f1c();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = &cf_clearAtMeCount_;
    local_2d0 = pcVar1;
    _NSSelectorFromString();
    pcVar1 = local_2d0;
    local_2d8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_respondsToSelector__026ca818,pcVar2);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_2d0,local_2d8,local_2c0);
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_2f8[0] = puVar3;
    _memset(auStack_340,0,0x40);
    if (local_2b8 == 0) {
      local_468 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_468 = local_2b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_480 = local_468;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_468,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_340,auStack_a8,0x10
              );
    if (local_480 != 0) {
      lVar6 = *local_330;
      local_488 = 0;
      do {
        do {
          if (*local_330 - lVar6 != 0) {
            _objc_enumerationMutation(*local_330 - lVar6,local_468);
          }
          local_300 = *(long *)(local_338 + local_488 * 8);
          if (local_300 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_2f8[0],PTR_s_addObject__0269d180,local_300);
          }
          local_488 = local_488 + 1;
        } while (local_488 < local_480);
        local_480 = local_468;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_468,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_340,auStack_a8,
                   0x10);
        local_488 = 0;
      } while (local_480 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_468);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = &cf_mainSession;
    local_f0 = &cf_m_sessionInfo;
    local_e8 = &cf_sessionInfo;
    local_e0 = &cf_m_baseSessionInfo;
    local_d8 = &cf_m_session;
    local_d0 = &cf_session;
    local_c8 = &cf_m_msgWrap;
    local_c0 = &cf_msgWrap;
    local_b8 = &cf_lastMessage;
    local_b0 = &cf_pbLastMessage;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_348 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_f8,
               10);
    _objc_retainAutoreleasedReturnValue();
    local_350 = puVar4;
    while (puVar3 = local_2f8[0],
          (*(code *)PTR__objc_msgSend_02578628)(local_2f8[0],PTR_s_count_0269cfe0),
          puVar3 != (undefined *)0x0) {
      puVar3 = local_2f8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_2f8[0],PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_358 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_2f8[0],PTR_s_removeObjectAtIndex__0269d530,0);
      puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithNonretainedObject__026a1fc0,
                 local_358);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_348;
      local_360 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_348,PTR_s_containsObject__0269cbb8,puVar3);
      if (((ulong)puVar4 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_348,PTR_s_addObject__0269d180,local_360);
        _memset(auStack_3a8,0,0x40);
        local_198 = &cf_m_uAtMeCount;
        local_190 = &cf_m_uAtAllCount;
        local_188 = &cf_mainAtMeCount;
        local_180 = &cf_mainAtAllCount;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_198,4);
        _objc_retainAutoreleasedReturnValue();
        local_4c0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_4c0 != (undefined *)0x0) {
          lVar6 = *local_398;
          local_4c8 = (undefined *)0x0;
          do {
            do {
              if (*local_398 - lVar6 != 0) {
                _objc_enumerationMutation(*local_398 - lVar6,puVar3);
              }
              puVar4 = local_358;
              uVar7 = *(undefined8 *)(local_3a0 + (long)local_4c8 * 8);
              puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
              local_368 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
              _objc_retainAutoreleasedReturnValue();
              FUN_00367110(puVar4,uVar7);
              (*(code *)PTR__objc_release_02578630)(puVar5);
              local_4c8 = local_4c8 + 1;
            } while (local_4c8 < local_4c0);
            local_4c0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3a8,
                       auStack_178,0x10);
            local_4c8 = (undefined *)0x0;
          } while (local_4c0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _memset(auStack_3f0,0,0x40);
        local_230 = &cf_m_atUserList;
        local_228 = &cf_atUserList;
        local_220 = &cf_m_nsAtUserList;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_230,3);
        _objc_retainAutoreleasedReturnValue();
        local_518 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_518 != (undefined *)0x0) {
          lVar6 = *local_3e0;
          local_520 = (undefined *)0x0;
          do {
            do {
              if (*local_3e0 - lVar6 != 0) {
                _objc_enumerationMutation(*local_3e0 - lVar6,puVar3);
              }
              local_3b0 = *(undefined8 *)(local_3e8 + (long)local_520 * 8);
              FUN_00367110(local_358,local_3b0,0);
              local_520 = local_520 + 1;
            } while (local_520 < local_518);
            local_518 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3f0,
                       auStack_218,0x10);
            local_520 = (undefined *)0x0;
          } while (local_518 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _memset(auStack_438,0,0x40);
        puVar3 = local_350;
        (*(code *)PTR__objc_retain_02578638)();
        local_558 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_438,auStack_2b0,
                   0x10);
        if (local_558 != (undefined *)0x0) {
          lVar6 = *local_428;
          local_560 = (undefined *)0x0;
          do {
            do {
              if (*local_428 - lVar6 != 0) {
                _objc_enumerationMutation(*local_428 - lVar6,puVar3);
              }
              local_3f8 = *(undefined8 *)(local_430 + (long)local_560 * 8);
              puVar4 = local_358;
              FUN_003612b8(local_358,local_3f8);
              _objc_retainAutoreleasedReturnValue();
              local_440 = puVar4;
              if ((puVar4 != (undefined *)0x0) && (puVar4 != local_358)) {
                (*(code *)PTR__objc_msgSend_02578628)(local_2f8[0],PTR_s_addObject__0269d180,puVar4)
                ;
              }
              _objc_storeStrong(&local_440,0);
              local_560 = local_560 + 1;
            } while (local_560 < local_558);
            local_558 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_438,
                       auStack_2b0,0x10);
            local_560 = (undefined *)0x0;
          } while (local_558 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_2c4 = 0;
      }
      else {
        local_2c4 = 5;
      }
      _objc_storeStrong(&local_360);
      _objc_storeStrong(&local_358,0);
    }
    _objc_storeStrong(0,&local_350);
    _objc_storeStrong(&local_348,0);
    _objc_storeStrong(local_2f8,0);
    _objc_storeStrong(&local_2d0,0);
    local_2c4 = 0;
  }
  _objc_storeStrong(&local_2c0);
  _objc_storeStrong(&local_2b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

