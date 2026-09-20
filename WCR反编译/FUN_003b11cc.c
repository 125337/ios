// FUN_003b11cc @ 003b11cc

undefined1 *
FUN_003b11cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,byte param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  undefined *local_430;
  undefined *local_428;
  ulong local_3f0;
  ulong local_3e8;
  ulong local_3b0;
  ulong local_3a8;
  undefined *local_380;
  undefined1 *local_350;
  undefined1 auStack_348 [8];
  long local_340;
  long *local_338;
  undefined8 local_308;
  undefined1 *local_300;
  undefined1 auStack_2f8 [8];
  long local_2f0;
  long *local_2e8;
  undefined8 local_2b8;
  undefined1 *local_2b0;
  undefined1 auStack_2a8 [8];
  long local_2a0;
  long *local_298;
  undefined8 local_268;
  undefined *local_260;
  undefined1 *local_258;
  bool local_249;
  undefined *local_248;
  undefined *local_240;
  undefined *local_238;
  undefined *local_230;
  undefined1 *local_228;
  int local_220;
  byte local_21a;
  byte local_219;
  ulong local_218;
  ulong local_210;
  ulong local_208;
  undefined1 *local_200;
  undefined1 auStack_1f8 [128];
  undefined1 auStack_178 [128];
  undefined1 auStack_f8 [128];
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_208 = 0;
  _objc_storeStrong(&local_208,param_1);
  local_210 = 0;
  _objc_storeStrong(&local_210,param_2);
  local_218 = 0;
  _objc_storeStrong(&local_218,param_3);
  local_21a = param_5;
  local_219 = param_4;
  if (local_208 == 0) {
    local_200 = (undefined1 *)0x0;
    local_220 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_208;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_228 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_addObject__0269d180,local_208);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_addObjectsFromArray__0269d540,local_208)
      ;
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_78 = &cf_mainSession;
    local_70 = &cf_m_sessionInfo;
    local_68 = &cf_sessionInfo;
    local_60 = &cf_m_baseSessionInfo;
    local_58 = &cf_m_session;
    local_50 = &cf_session;
    local_48 = &cf_m_msgWrap;
    local_40 = &cf_msgWrap;
    local_38 = &cf_lastMessage;
    local_30 = &cf_pbLastMessage;
    local_380 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_230 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78,
               10);
    _objc_retainAutoreleasedReturnValue();
    local_249 = false;
    bVar1 = (local_219 & 1) == 0;
    local_238 = local_380;
    if (bVar1) {
      local_380 = (undefined *)0x0;
    }
    else {
      FUN_003b1b64();
      _objc_retainAutoreleasedReturnValue();
      local_248 = local_380;
    }
    local_249 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_240 = local_380;
    if ((local_249 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_248);
    }
    do {
      puVar5 = local_228;
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_count_0269cfe0);
      if (puVar5 == (undefined1 *)0x0) {
        local_200 = (undefined1 *)0x0;
        iVar6 = 1;
        local_220 = 1;
        break;
      }
      puVar5 = local_228;
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_258 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_removeObjectAtIndex__0269d530,0);
      puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithNonretainedObject__026a1fc0,
                 local_258);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_230;
      local_260 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_containsObject__0269cbb8,puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_addObject__0269d180,local_260);
        _memset(auStack_2a8,0,0x40);
        uVar4 = local_210;
        (*(code *)PTR__objc_retain_02578638)();
        local_3a8 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_f8,0x10
                  );
        if (local_3a8 != 0) {
          lVar7 = *local_298;
          local_3b0 = 0;
          do {
            do {
              if (*local_298 - lVar7 != 0) {
                _objc_enumerationMutation(*local_298 - lVar7,uVar4);
              }
              local_268 = *(undefined8 *)(local_2a0 + local_3b0 * 8);
              puVar5 = local_258;
              FUN_00396798(local_258,local_268);
              local_2b0 = puVar5;
              if (puVar5 != (undefined1 *)0x0) {
                local_220 = 1;
                local_200 = puVar5;
                goto LAB_003b16a8;
              }
              local_3b0 = local_3b0 + 1;
            } while (local_3b0 < local_3a8);
            local_3a8 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_f8,
                       0x10);
            local_3b0 = 0;
          } while (local_3a8 != 0);
        }
        local_220 = 0;
LAB_003b16a8:
        (*(code *)PTR__objc_release_02578630)(uVar4);
        if (local_220 == 0) {
          _memset(auStack_2f8,0,0x40);
          uVar4 = local_218;
          (*(code *)PTR__objc_retain_02578638)();
          local_3e8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f8,auStack_178,
                     0x10);
          if (local_3e8 != 0) {
            lVar7 = *local_2e8;
            local_3f0 = 0;
            do {
              do {
                if (*local_2e8 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_2e8 - lVar7,uVar4);
                }
                local_2b8 = *(undefined8 *)(local_2f0 + local_3f0 * 8);
                puVar5 = local_258;
                FUN_0037a830(local_258,local_2b8);
                if (((ulong)puVar5 & 1) != 0) {
                  local_200 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
                  local_220 = 1;
                  goto LAB_003b1814;
                }
                local_3f0 = local_3f0 + 1;
              } while (local_3f0 < local_3e8);
              local_3e8 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f8,
                         auStack_178,0x10);
              local_3f0 = 0;
            } while (local_3e8 != 0);
          }
          local_220 = 0;
LAB_003b1814:
          (*(code *)PTR__objc_release_02578630)(uVar4);
          if (local_220 == 0) {
            puVar5 = local_258;
            FUN_003b202c();
            _objc_retainAutoreleasedReturnValue();
            local_300 = puVar5;
            if (((local_219 & 1) == 0) || (FUN_003b2300(puVar5,local_240), ((ulong)puVar5 & 1) == 0)
               ) {
              if (((local_21a & 1) == 0) ||
                 ((puVar5 = local_300, FUN_003b2300(local_300,&cf_notify_all),
                  ((ulong)puVar5 & 1) == 0 &&
                  (puVar5 = local_300, FUN_003b2300(local_300,&cf__all), ((ulong)puVar5 & 1) == 0)))
                 ) {
                _memset(auStack_348,0,0x40);
                puVar2 = local_238;
                (*(code *)PTR__objc_retain_02578638)();
                local_428 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_348,
                           auStack_1f8,0x10);
                if (local_428 != (undefined *)0x0) {
                  lVar7 = *local_338;
                  local_430 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_338 - lVar7 != 0) {
                        _objc_enumerationMutation(*local_338 - lVar7,puVar2);
                      }
                      local_308 = *(undefined8 *)(local_340 + (long)local_430 * 8);
                      puVar5 = local_258;
                      FUN_003612b8(local_258,local_308);
                      _objc_retainAutoreleasedReturnValue();
                      local_350 = puVar5;
                      if ((puVar5 != (undefined1 *)0x0) && (puVar5 != local_258)) {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_228,PTR_s_addObject__0269d180,puVar5);
                      }
                      _objc_storeStrong(&local_350,0);
                      local_430 = local_430 + 1;
                    } while (local_430 < local_428);
                    local_428 = puVar2;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_348,
                               auStack_1f8,0x10);
                    local_430 = (undefined *)0x0;
                  } while (local_428 != (undefined *)0x0);
                }
                (*(code *)PTR__objc_release_02578630)(puVar2);
                local_220 = 0;
              }
              else {
                local_200 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
                local_220 = 1;
              }
            }
            else {
              local_200 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
              local_220 = 1;
            }
            _objc_storeStrong(&local_300,0);
          }
        }
      }
      else {
        local_220 = 2;
      }
      _objc_storeStrong(&local_260);
      _objc_storeStrong(&local_258,0);
    } while ((local_220 == 0) || (iVar6 = local_220 + -2, iVar6 == 0));
    _objc_storeStrong(iVar6,&local_240);
    _objc_storeStrong(&local_238,0);
    _objc_storeStrong(&local_230,0);
    _objc_storeStrong(&local_228,0);
  }
  _objc_storeStrong(&local_218);
  _objc_storeStrong(&local_210,0);
  _objc_storeStrong(&local_208,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_200;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

