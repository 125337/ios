// FUN_003c4310 @ 003c4310

void FUN_003c4310(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  undefined **local_358;
  undefined **local_350;
  cfstringStruct *local_308;
  cfstringStruct *local_2f0;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  undefined1 *local_278;
  undefined *local_260;
  undefined4 local_258;
  undefined4 local_254;
  code *local_250;
  undefined *local_248;
  undefined *local_240;
  undefined *local_238;
  undefined1 *local_230;
  undefined *local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  undefined8 local_1e0;
  undefined *local_1d8;
  undefined1 *local_1d0;
  undefined1 local_1c1;
  undefined *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  cfstringStruct *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined4 local_144;
  undefined **local_140;
  undefined *local_138;
  undefined1 *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  ppuVar4 = &local_138;
  local_138 = (undefined1 *)0x0;
  _objc_storeStrong(ppuVar4,param_2);
  FUN_003b4c6c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_138;
  local_140 = ppuVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
  if (((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar5) &&
     (ppuVar4 = local_140, (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0),
     ppuVar4 != (undefined **)0x0)) {
    _CACurrentMediaTime();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    puVar5 = local_138;
    local_150 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_dictionaryWithCapacity__026a1ad0,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    puVar7 = local_138;
    local_158 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_arrayWithCapacity__0269d9b8,puVar7);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar5;
    _memset(auStack_1a8,0,0x40);
    puVar5 = local_138;
    (*(code *)PTR__objc_retain_02578638)();
    local_2b8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
    if (local_2b8 != (undefined1 *)0x0) {
      lVar10 = *local_198;
      local_2c0 = (undefined1 *)0x0;
      do {
        do {
          if (*local_198 - lVar10 != 0) {
            _objc_enumerationMutation(*local_198 - lVar10,puVar5);
          }
          local_168 = *(cfstringStruct **)(local_1a0 + (long)local_2c0 * 8);
          pcVar8 = (cfstringStruct *)PTR_WCRefineGroupDataProvider_026ce540;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          pcVar9 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_2f0 = pcVar9;
          if (pcVar9 == (cfstringStruct *)0x0) {
            local_2f0 = local_168;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_1b0 = local_2f0;
          (*(code *)PTR__objc_release_02578630)(pcVar9);
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          pcVar8 = local_1b0;
          FUN_00366324();
          _objc_retainAutoreleasedReturnValue();
          local_308 = pcVar8;
          if (pcVar8 == (cfstringStruct *)0x0) {
            local_308 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_1b8 = local_308;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addObject__0269d180,local_1b8);
          pcVar8 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_length_0269cca0);
          local_1c1 = 0;
          bVar3 = false;
          uVar1 = pcVar8 != (cfstringStruct *)0x0;
          if ((bool)uVar1) {
            puVar6 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_objectForKeyedSubscript__0269d098,local_1b8);
            _objc_retainAutoreleasedReturnValue();
            bVar3 = puVar6 == (undefined *)0x0;
            local_1c1 = uVar1;
            local_1c0 = puVar6;
            (*(code *)PTR__objc_release_02578630)(puVar6);
            uVar1 = local_1c1;
          }
          local_1c1 = uVar1;
          if (bVar3) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_setObject_forKeyedSubscript__0269d248,local_168,local_1b8);
          }
          _objc_storeStrong(&local_1b8);
          _objc_storeStrong(&local_1b0,0);
          local_2c0 = local_2c0 + 1;
        } while (local_2c0 < local_2b8);
        local_2b8 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                   0x10);
        local_2c0 = (undefined1 *)0x0;
      } while (local_2b8 != (undefined1 *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    puVar6 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_arrayWithCapacity__0269d9b8,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_1d0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_1d8 = puVar6;
    _memset(auStack_220,0,0x40);
    ppuVar4 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_350 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (ppuVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_128,0x10)
    ;
    if (local_350 != (undefined **)0x0) {
      lVar10 = *local_210;
      local_358 = (undefined **)0x0;
      do {
        do {
          if (*local_210 - lVar10 != 0) {
            _objc_enumerationMutation(*local_210 - lVar10,ppuVar4);
          }
          local_1e0 = *(undefined8 *)(local_218 + (long)local_358 * 8);
          puVar5 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_objectForKeyedSubscript__0269d098,local_1e0);
          _objc_retainAutoreleasedReturnValue();
          local_228 = puVar5;
          if (puVar5 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_addObject__0269d180,puVar5);
            (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_addObject__0269d180,local_1e0);
          }
          _objc_storeStrong(&local_228,0);
          local_358 = (undefined **)((long)local_358 + 1);
        } while (local_358 < local_350);
        local_350 = ppuVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (ppuVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_128,
                   0x10);
        local_358 = (undefined **)0x0;
      } while (local_350 != (undefined **)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(ppuVar4);
    puVar7 = local_138;
    puVar6 = local_160;
    local_260 = PTR___NSConcreteGlobalBlock_02578658;
    local_258 = 0xd0800000;
    local_254 = 0;
    local_250 = FUN_003c4d48;
    local_248 = &DAT_0257ccc8;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_1d8;
    local_240 = puVar6;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_1d0;
    local_238 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_230 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_260);
    _CACurrentMediaTime();
    puVar2 = local_1d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar2;
    local_144 = 1;
    _objc_storeStrong(&local_230);
    _objc_storeStrong(&local_238,0);
    _objc_storeStrong(&local_240,0);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_1d0,0);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_158,0);
  }
  else {
    if (local_138 == (undefined1 *)0x0) {
      local_278 = *(undefined1 **)PTR____NSArray0___02578280;
    }
    else {
      local_278 = local_138;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_278;
    local_144 = 1;
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

