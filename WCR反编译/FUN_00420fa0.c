// FUN_00420fa0 @ 00420fa0

void FUN_00420fa0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined *local_320;
  undefined *local_318;
  undefined *local_288;
  undefined *local_280;
  undefined8 local_250;
  undefined8 local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  undefined8 local_188;
  undefined *local_180 [3];
  undefined *local_168;
  undefined8 local_160;
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_160 = 0;
  _objc_storeStrong(&local_160,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_58 = &cf_m_nsUsrName;
  local_50 = &cf_m_nsOriginalUsrName;
  local_48 = &cf_m_nsSource;
  local_40 = &cf_m_nsSourceUserName;
  local_38 = &cf_m_nsFromUsr;
  local_30 = &cf_m_nsToUsr;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_168 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6);
  _objc_retainAutoreleasedReturnValue();
  local_180[0] = puVar2;
  _memset(auStack_1c8,0,0x40);
  puVar1 = local_180[0];
  (*(code *)PTR__objc_retain_02578638)();
  local_280 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_d8,0x10);
  if (local_280 != (undefined *)0x0) {
    lVar5 = *local_1b8;
    local_288 = (undefined *)0x0;
    do {
      do {
        if (*local_1b8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_1b8 - lVar5,puVar1);
        }
        local_188 = *(undefined8 *)(local_1c0 + (long)local_288 * 8);
        uVar3 = local_160;
        FUN_00422aac(local_160,local_188);
        _objc_retainAutoreleasedReturnValue();
        local_1d0 = uVar3;
        FUN_00422bb4(local_168,uVar3);
        _objc_storeStrong(&local_1d0,0);
        local_288 = local_288 + 1;
      } while (local_288 < local_280);
      local_280 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_d8,0x10)
      ;
      local_288 = (undefined *)0x0;
    } while (local_280 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar3 = local_160;
  pcVar4 = &cf_getRealUserName;
  _NSSelectorFromString();
  FUN_00422cd4(uVar3,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = uVar3;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_1e0 = uVar3;
  FUN_00422bb4(local_168,uVar3);
  uVar3 = local_160;
  pcVar4 = &cf_toContact;
  _NSSelectorFromString();
  FUN_00422cd4(uVar3,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  local_1e8 = uVar3;
  FUN_00422aac(uVar3,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  local_1f0 = uVar3;
  FUN_00422bb4(local_168,uVar3);
  uVar3 = local_160;
  FUN_00422e38(local_160,&cf_m_oVerifyContact);
  _objc_retainAutoreleasedReturnValue();
  local_1f8 = uVar3;
  _memset(auStack_240,0,0x40);
  puVar1 = local_180[0];
  (*(code *)PTR__objc_retain_02578638)();
  local_318 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_158,0x10);
  if (local_318 != (undefined *)0x0) {
    lVar5 = *local_230;
    local_320 = (undefined *)0x0;
    do {
      do {
        if (*local_230 - lVar5 != 0) {
          _objc_enumerationMutation(*local_230 - lVar5,puVar1);
        }
        puVar2 = local_168;
        local_200 = *(undefined8 *)(local_238 + (long)local_320 * 8);
        uVar3 = local_1f8;
        FUN_00422aac(local_1f8,local_200);
        _objc_retainAutoreleasedReturnValue();
        FUN_00422bb4(puVar2);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_320 = local_320 + 1;
      } while (local_320 < local_318);
      local_318 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_158,0x10
                );
      local_320 = (undefined *)0x0;
    } while (local_318 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar3 = local_1f8;
  pcVar4 = &cf_getRealUserName;
  _NSSelectorFromString();
  FUN_00422cd4(uVar3,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_168;
  local_248 = uVar3;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  FUN_00422bb4(puVar1);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_1f8;
  pcVar4 = &cf_toContact;
  _NSSelectorFromString();
  FUN_00422cd4(uVar3,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_168;
  local_250 = uVar3;
  FUN_00422aac(uVar3,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  FUN_00422bb4(puVar1);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar1 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_250);
  _objc_storeStrong(&local_248,0);
  _objc_storeStrong(&local_1f8,0);
  _objc_storeStrong(&local_1f0,0);
  _objc_storeStrong(&local_1e8,0);
  _objc_storeStrong(&local_1e0,0);
  _objc_storeStrong(&local_1d8,0);
  _objc_storeStrong(local_180,0);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_160,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

