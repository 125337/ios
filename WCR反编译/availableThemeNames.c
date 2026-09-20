// availableThemeNames @ 015c71f4

/* Function Stack Size: 0x10 bytes */

ID WCRefineWechatThemeStore::availableThemeNames(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined *local_370;
  undefined *local_368;
  undefined1 *local_330;
  undefined1 *local_328;
  undefined1 *local_300;
  undefined *local_2b8;
  undefined *local_278;
  undefined *local_270;
  undefined4 local_268;
  undefined4 local_264;
  code *local_260;
  undefined *local_258;
  ID local_250;
  byte local_248;
  byte local_247;
  byte local_242;
  byte local_241;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  undefined8 local_200;
  undefined *local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  undefined *local_160;
  ID local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_130;
  local_140 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_repositoryPath_026aeb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_createDirectoryAtPath_withInterm_0269e230,IVar2,1,0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_prepareOfficialThemeIfNeeded_026b0e38);
  puVar1 = local_140;
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_repositoryPath_026aeb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_contentsOfDirectoryAtPath_error__0269e088,IVar2,0);
  _objc_retainAutoreleasedReturnValue();
  local_2b8 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_2b8 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = local_2b8;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar3 = local_140;
  puVar1 = PTR__OBJC_CLASS___NSPredicate_026ce8f0;
  local_180 = PTR___NSConcreteStackBlock_02578660;
  local_178 = 0xc2000000;
  local_174 = 0;
  local_170 = FUN_015c7a88;
  local_168 = &DAT_02587188;
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_130;
  local_160 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_predicateWithBlock__026ab6e0,&local_180);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_148;
  local_150 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_filteredArrayUsingPredicate__026b0178,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_188 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_190 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_wechatThemeBeautifyPinnedThemeNa_026b0e40);
  _objc_retainAutoreleasedReturnValue();
  local_300 = puVar1;
  if (puVar1 == (undefined1 *)0x0) {
    local_300 = *(undefined1 **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_198 = local_300;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_setWithArray__0269d9a0,local_198);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_1a0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_1a8 = puVar3;
  _memset(auStack_1f0,0,0x40);
  puVar4 = local_198;
  (*(code *)PTR__objc_retain_02578638)();
  local_328 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_a8,0x10);
  if (local_328 != (undefined1 *)0x0) {
    lVar5 = *local_1e0;
    local_330 = (undefined1 *)0x0;
    do {
      do {
        if (*local_1e0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_1e0 - lVar5,puVar4);
        }
        local_1b0 = *(undefined8 *)(local_1e8 + (long)local_330 * 8);
        puVar1 = local_188;
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_containsObject__0269cbb8,local_1b0);
        if (((ulong)puVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_addObject__0269d180,local_1b0);
        }
        local_330 = local_330 + 1;
      } while (local_330 < local_328);
      local_328 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_a8,0x10)
      ;
      local_330 = (undefined1 *)0x0;
    } while (local_328 != (undefined1 *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_1f8 = puVar1;
  _memset(auStack_240,0,0x40);
  puVar1 = local_188;
  (*(code *)PTR__objc_retain_02578638)();
  local_368 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128,0x10);
  if (local_368 != (undefined *)0x0) {
    lVar5 = *local_230;
    local_370 = (undefined *)0x0;
    do {
      do {
        if (*local_230 - lVar5 != 0) {
          _objc_enumerationMutation(*local_230 - lVar5,puVar1);
        }
        local_200 = *(undefined8 *)(local_238 + (long)local_370 * 8);
        puVar3 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_containsObject__0269cbb8,local_200);
        if (((ulong)puVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_addObject__0269d180,local_200);
        }
        local_370 = local_370 + 1;
      } while (local_370 < local_368);
      local_368 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128,0x10
                );
      local_370 = (undefined *)0x0;
    } while (local_368 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar4 = local_190;
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_wechatThemeBeautifySortMode_026b0e48);
  local_241 = puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
  puVar4 = local_190;
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_wechatThemeBeautifySortAscending_026b0e50);
  IVar2 = local_130;
  puVar1 = local_1f8;
  local_242 = (byte)puVar4;
  local_270 = PTR___NSConcreteGlobalBlock_02578658;
  local_268 = 0xd0800000;
  local_264 = 0;
  local_260 = FUN_015c7c54;
  local_258 = &DAT_025871b8;
  local_248 = local_241 & 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_250 = IVar2;
  local_247 = local_242 & 1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_sortUsingComparator__0269d168,&local_270);
  puVar1 = local_1a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_mutableCopy_0269d8a0);
  local_278 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540,local_1f8);
  puVar1 = local_278;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_278);
  _objc_storeStrong(&local_250,0);
  _objc_storeStrong(&local_1f8,0);
  _objc_storeStrong(&local_1a8,0);
  _objc_storeStrong(&local_1a0,0);
  _objc_storeStrong(&local_198,0);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_160,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

