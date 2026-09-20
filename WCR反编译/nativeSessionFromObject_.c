// nativeSessionFromObject: @ 01a93320

/* Function Stack Size: 0x18 bytes */

ID WCRefineGroupDataProvider::nativeSessionFromObject_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined *local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  char *local_120;
  int local_114;
  undefined *local_110;
  SEL local_108;
  ID local_100;
  undefined *local_f8;
  undefined1 auStack_f0 [128];
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
  local_110 = (undefined *)0x0;
  local_108 = param_2;
  local_100 = param_1;
  _objc_storeStrong(&local_110,param_3);
  if (local_110 == (undefined *)0x0) {
    local_f8 = (undefined *)0x0;
    local_114 = 1;
  }
  else {
    pcVar1 = "MMSessionInfo";
    _objc_getClass();
    local_120 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       (puVar2 = local_110,
       (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_isKindOfClass__0269cd68,pcVar1),
       puVar3 = local_110, ((ulong)puVar2 & 1) == 0)) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_110
                );
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_128 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_138 = (undefined *)0x0;
      local_50 = &cf_m_sessionInfo;
      local_48 = &cf_mainSession;
      local_40 = &cf_sessionInfo;
      local_38 = &cf_m_session;
      local_30 = &cf_session;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_130 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50
                 ,5);
      _objc_retainAutoreleasedReturnValue();
      local_140 = puVar3;
      do {
        puVar2 = local_128;
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_count_0269cfe0);
        puVar3 = local_138;
        if (puVar2 == (undefined *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_f8 = puVar3;
          iVar4 = 1;
          local_114 = 1;
          break;
        }
        puVar3 = local_128;
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_148 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_removeObjectAtIndex__0269d530,0);
        puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithNonretainedObject__026a1fc0,
                   local_148);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_130;
        local_150 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_containsObject__0269cbb8,puVar3);
        if (((ulong)puVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_addObject__0269d180,local_150);
          if ((local_120 == (char *)0x0) ||
             (puVar2 = local_148,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_148,PTR_s_isKindOfClass__0269cd68,local_120), puVar3 = local_148,
             ((ulong)puVar2 & 1) == 0)) {
            puVar3 = local_148;
            local_70 = &cf_m_nsUserName;
            local_68 = &cf_m_nsUsrName;
            local_60 = &cf_userName;
            local_58 = &cf_username;
            puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_70,4);
            _objc_retainAutoreleasedReturnValue();
            FUN_01a93950();
            _objc_retainAutoreleasedReturnValue();
            local_158 = puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            if ((local_138 == (undefined *)0x0) &&
               (puVar3 = local_158,
               (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0),
               puVar3 != (undefined *)0x0)) {
              _objc_storeStrong(puVar3,&local_138,local_148);
            }
            _memset(auStack_1a0,0,0x40);
            puVar3 = local_140;
            (*(code *)PTR__objc_retain_02578638)();
            local_1e8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_f0
                       ,0x10);
            if (local_1e8 != (undefined *)0x0) {
              lVar5 = *local_190;
              local_1f0 = (undefined *)0x0;
              do {
                do {
                  if (*local_190 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_190 - lVar5,puVar3);
                  }
                  puVar2 = local_148;
                  uVar6 = *(undefined8 *)(local_198 + (long)local_1f0 * 8);
                  local_160 = uVar6;
                  _NSSelectorFromString(uVar6);
                  FUN_01a91e98(puVar2,uVar6);
                  _objc_retainAutoreleasedReturnValue();
                  local_1a8 = puVar2;
                  if ((puVar2 != (undefined *)0x0) && (puVar2 != local_148)) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_128,PTR_s_addObject__0269d180,puVar2);
                  }
                  _objc_storeStrong(&local_1a8,0);
                  local_1f0 = local_1f0 + 1;
                } while (local_1f0 < local_1e8);
                local_1e8 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,
                           auStack_f0,0x10);
                local_1f0 = (undefined *)0x0;
              } while (local_1e8 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            _objc_storeStrong(&local_158,0);
            local_114 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_f8 = puVar3;
            local_114 = 1;
          }
        }
        else {
          local_114 = 2;
        }
        _objc_storeStrong(&local_150);
        _objc_storeStrong(&local_148,0);
      } while ((local_114 == 0) || (iVar4 = local_114 + -2, iVar4 == 0));
      _objc_storeStrong(iVar4,&local_140);
      _objc_storeStrong(&local_138,0);
      _objc_storeStrong(&local_130,0);
      _objc_storeStrong(&local_128,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = puVar3;
      local_114 = 1;
    }
  }
  _objc_storeStrong(&local_110,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_f8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

