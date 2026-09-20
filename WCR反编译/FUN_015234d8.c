// FUN_015234d8 @ 015234d8

void FUN_015234d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *local_348;
  undefined *local_340;
  undefined *local_308;
  undefined *local_300;
  undefined *local_268;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  undefined8 local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  code *local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined **local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined4 local_144;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = (undefined *)0x0;
  _objc_storeStrong(&local_138,param_1);
  local_140 = (undefined *)0x0;
  _objc_storeStrong(&local_140,param_2);
  puVar2 = local_140;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar1 = local_140, (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0),
     puVar2 = local_138, puVar1 == (undefined *)0x0)) {
    puVar2 = local_138;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      local_268 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_268 = local_138;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_268;
    local_144 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar2 = local_138, (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0),
       puVar2 == (undefined *)0x0)) {
      puVar2 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_copy_0269d150);
      local_144 = 1;
      local_130 = puVar2;
    }
    else {
      puVar2 = PTR_WCRefineGroupDataProvider_026ce540;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSHashTable_026ce238;
      local_150 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSHashTable_026ce238,PTR_s_hashTableWithOptions__026b0310,0x200);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      local_158 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      puVar1 = local_138;
      local_160 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
      puVar3 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_arrayWithCapacity__0269d9b8,puVar1 + (long)puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_158;
      ppuVar4 = &local_1b0;
      local_1b0 = PTR___NSConcreteStackBlock_02578660;
      local_1a8 = 0xc2000000;
      local_1a4 = 0;
      local_1a0 = FUN_0152686c;
      local_198 = &DAT_02586560;
      local_168 = puVar2;
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = local_150;
      local_190 = puVar1;
      (*(code *)PTR__objc_retain_02578638)();
      puVar1 = local_160;
      local_188 = puVar2;
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = local_168;
      local_180 = puVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_178 = puVar2;
      _objc_retainBlock();
      local_170 = ppuVar4;
      _memset(auStack_1f8,0,0x40);
      puVar2 = local_138;
      (*(code *)PTR__objc_retain_02578638)();
      local_300 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_a8,0x10)
      ;
      if (local_300 != (undefined *)0x0) {
        lVar5 = *local_1e8;
        local_308 = (undefined *)0x0;
        do {
          do {
            if (*local_1e8 - lVar5 != 0) {
              _objc_enumerationMutation(*local_1e8 - lVar5,puVar2);
            }
            local_1b8 = *(undefined8 *)(local_1f0 + (long)local_308 * 8);
            (*(code *)local_170[2])(local_170,local_1b8);
            local_308 = local_308 + 1;
          } while (local_308 < local_300);
          local_300 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_a8,
                     0x10);
          local_308 = (undefined *)0x0;
        } while (local_300 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _memset(auStack_240,0,0x40);
      puVar2 = local_140;
      (*(code *)PTR__objc_retain_02578638)();
      local_340 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128,0x10
                );
      if (local_340 != (undefined *)0x0) {
        lVar5 = *local_230;
        local_348 = (undefined *)0x0;
        do {
          do {
            if (*local_230 - lVar5 != 0) {
              _objc_enumerationMutation(*local_230 - lVar5,puVar2);
            }
            local_200 = *(undefined8 *)(local_238 + (long)local_348 * 8);
            (*(code *)local_170[2])(local_170,local_200);
            local_348 = local_348 + 1;
          } while (local_348 < local_340);
          local_340 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128,
                     0x10);
          local_348 = (undefined *)0x0;
        } while (local_340 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_168;
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = puVar2;
      local_144 = 1;
      _objc_storeStrong(&local_170);
      _objc_storeStrong(&local_178,0);
      _objc_storeStrong(&local_180,0);
      _objc_storeStrong(&local_188,0);
      _objc_storeStrong(&local_190,0);
      _objc_storeStrong(&local_168,0);
      _objc_storeStrong(&local_160,0);
      _objc_storeStrong(&local_158,0);
      _objc_storeStrong(&local_150,0);
    }
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

