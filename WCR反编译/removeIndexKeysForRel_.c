// removeIndexKeysForRel: @ 01080e84

/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonStore::removeIndexKeysForRel_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  ulong local_350;
  ulong local_348;
  ulong local_300;
  ulong local_2f8;
  undefined *local_290;
  undefined4 local_288;
  undefined4 local_284;
  code *local_280;
  undefined *local_278;
  ulong local_270;
  ulong local_268;
  undefined *local_260;
  ulong local_258;
  undefined *local_250;
  ID local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  undefined8 local_200;
  ulong local_1f8;
  ID local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  ulong local_1a8;
  ID local_1a0;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  ulong local_178;
  ulong local_170;
  undefined *local_168;
  undefined *local_160;
  ID local_158;
  ulong local_150;
  undefined4 local_144;
  ulong local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  uVar7 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
  if (uVar7 == 0) {
    local_144 = 1;
  }
  else {
    uVar7 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_130;
    local_150 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_pinnedMutable_026ae270);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_026ce398;
    local_158 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableIndexSet_026ce398,PTR_s_indexSet_0269fc90);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_140;
    IVar1 = local_158;
    local_198 = PTR___NSConcreteGlobalBlock_02578658;
    local_190 = 0xd0800000;
    local_18c = 0;
    local_188 = FUN_0108177c;
    local_180 = &DAT_02584e50;
    local_160 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar7 = local_150;
    local_178 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_160;
    local_170 = uVar7;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_198);
    puVar2 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_count_0269cfe0);
    if (puVar2 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_removeObjectsAtIndexes__026a2c98,local_160);
    }
    IVar1 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_packOrderMutable_026ae278);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_remarksMutable_026ae280);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_removeObjectForKey__0269d700,local_140);
    _memset(auStack_1e8,0,0x40);
    IVar1 = local_1a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    local_2f8 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2f8 != 0) {
      lVar6 = *local_1d8;
      local_300 = 0;
      do {
        do {
          if (*local_1d8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1d8 - lVar6,IVar1);
          }
          uVar7 = *(ulong *)(local_1e0 + local_300 * 8);
          local_1a8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_hasPrefix__0269d320,local_150);
          if ((uVar7 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a0,PTR_s_removeObjectForKey__0269d700,local_1a8);
          }
          local_300 = local_300 + 1;
        } while (local_300 < local_2f8);
        local_2f8 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_a8,0x10
                  );
        local_300 = 0;
      } while (local_2f8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_itemOrderMutable_026ae258);
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_removeObjectForKey__0269d700,local_140);
    uVar7 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar7);
    _memset(auStack_240,0,0x40);
    IVar1 = local_1f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    local_348 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_348 != 0) {
      lVar6 = *local_230;
      local_350 = 0;
      do {
        do {
          if (*local_230 - lVar6 != 0) {
            _objc_enumerationMutation(*local_230 - lVar6,IVar1);
          }
          local_200 = *(undefined8 *)(local_238 + local_350 * 8);
          IVar5 = local_1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,local_200);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_026ce398;
          local_248 = IVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableIndexSet_026ce398,PTR_s_indexSet_0269fc90);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_140;
          IVar5 = local_248;
          local_290 = PTR___NSConcreteGlobalBlock_02578658;
          local_288 = 0xd0800000;
          local_284 = 0;
          local_280 = FUN_010818a4;
          local_278 = &DAT_02584e70;
          local_250 = puVar2;
          (*(code *)PTR__objc_retain_02578638)();
          uVar7 = local_150;
          local_270 = uVar3;
          (*(code *)PTR__objc_retain_02578638)();
          puVar2 = local_250;
          local_268 = uVar7;
          (*(code *)PTR__objc_retain_02578638)();
          uVar7 = local_1f8;
          local_260 = puVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_258 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar5,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_290);
          puVar2 = local_250;
          (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_count_0269cfe0);
          if (puVar2 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_248,PTR_s_removeObjectsAtIndexes__026a2c98,local_250);
          }
          IVar5 = local_248;
          (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_count_0269cfe0);
          if (IVar5 == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1f0,PTR_s_removeObjectForKey__0269d700,local_200);
          }
          _objc_storeStrong(&local_258);
          _objc_storeStrong(&local_260,0);
          _objc_storeStrong(&local_268,0);
          _objc_storeStrong(&local_270,0);
          _objc_storeStrong(&local_250,0);
          _objc_storeStrong(&local_248,0);
          local_350 = local_350 + 1;
        } while (local_350 < local_348);
        local_348 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128,
                   0x10);
        local_350 = 0;
      } while (local_348 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    uVar7 = local_1f8;
    FUN_0107bd28();
    if ((uVar7 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_removeSendableCacheForMd5__026ae298,local_1f8);
    }
    _objc_storeStrong(&local_1f8);
    _objc_storeStrong(&local_1f0,0);
    _objc_storeStrong(&local_1a0,0);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_150,0);
    local_144 = 0;
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

