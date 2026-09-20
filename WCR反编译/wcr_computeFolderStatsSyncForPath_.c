// wcr_computeFolderStatsSyncForPath: @ 015adb38

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineVoicePackStore::wcr_computeFolderStatsSyncForPath_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_200;
  undefined *local_1f8;
  undefined *local_198;
  undefined *local_190;
  byte local_181;
  long local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  ulong local_138;
  undefined *local_130;
  undefined *local_128;
  undefined4 local_11c;
  undefined *local_118;
  long local_110;
  long local_108;
  SEL local_100;
  ID local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_108 = 0;
  local_100 = param_2;
  local_f8 = param_1;
  _objc_storeStrong(&local_108,param_3);
  local_110 = 0;
  local_118 = (undefined *)0x0;
  lVar8 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
  if (lVar8 == 0) {
    local_48 = &cf_count;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = &cf_size;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_11c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_128 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_enumeratorAtPath__026ad0c8,local_108);
    _objc_retainAutoreleasedReturnValue();
    local_130 = puVar2;
    _memset(auStack_178,0,0x40);
    puVar2 = local_130;
    (*(code *)PTR__objc_retain_02578638)();
    local_1f8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_c8,0x10);
    if (local_1f8 != (undefined *)0x0) {
      lVar8 = *local_168;
      local_200 = (undefined *)0x0;
      do {
        do {
          if (*local_168 - lVar8 != 0) {
            _objc_enumerationMutation(*local_168 - lVar8,puVar2);
          }
          uVar9 = *(ulong *)(local_170 + (long)local_200 * 8);
          local_138 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar9);
          if ((uVar3 & 1) == 0) {
            lVar4 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_108,PTR_s_stringByAppendingPathComponent__026cab30,local_138);
            _objc_retainAutoreleasedReturnValue();
            local_181 = 0;
            puVar5 = local_128;
            local_180 = lVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_fileExistsAtPath_isDirectory__026ca638,lVar4,&local_181);
            IVar6 = local_f8;
            if ((((ulong)puVar5 & 1) == 0) || ((local_181 & 1) != 0)) {
              local_11c = 3;
            }
            else {
              uVar3 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_isSupportedAudioExtension__026a9d50)
              ;
              (*(code *)PTR__objc_release_02578630)(uVar3);
              if ((IVar6 & 1) == 0) {
                local_11c = 3;
              }
              else {
                local_110 = local_110 + 1;
                puVar5 = local_128;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_128,PTR_s_attributesOfItemAtPath_error__0269db08,local_180);
                _objc_retainAutoreleasedReturnValue();
                local_190 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_fileSize_026a1640);
                local_118 = local_118 + (long)puVar5;
                _objc_storeStrong(&local_190,0);
                local_11c = 0;
              }
            }
            _objc_storeStrong(&local_180,0);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_skipDescendants_026b0be8);
          }
          local_200 = local_200 + 1;
        } while (local_200 < local_1f8);
        local_1f8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_c8,
                   0x10);
        local_200 = (undefined *)0x0;
      } while (local_1f8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_e8 = &cf_count;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
               local_110);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = &cf_size;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_d8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
               local_118);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_d0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d8,&local_e8,2);
    _objc_retainAutoreleasedReturnValue();
    local_198 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar1 = DAT_028e3ac8;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e3ac8,PTR_s_setObject_forKeyedSubscript__0269d248,local_198,local_108);
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_198;
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = puVar2;
    local_11c = 1;
    _objc_storeStrong(&local_198);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_128,0);
  }
  _objc_storeStrong(&local_108,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_f0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

