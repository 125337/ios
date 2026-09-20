// deleteMediaFileNames:error: @ 015dbb3c

/* Function Stack Size: 0x20 bytes */

bool WCRGlobalPageBackgroundStore::deleteMediaFileNames_error_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  long lVar7;
  undefined *local_2c0;
  undefined *local_2b8;
  ulong local_280;
  ulong local_278;
  undefined *local_250;
  undefined4 local_248;
  undefined4 local_244;
  code *local_240;
  undefined *local_238;
  undefined *local_230;
  undefined8 local_228;
  long local_220;
  ID local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  undefined8 local_1d0;
  undefined *local_1c8;
  ID local_1c0;
  undefined *local_1b8;
  undefined4 local_1ac;
  long local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  long local_160;
  undefined *local_158;
  ID *local_150;
  ulong local_148;
  SEL local_140;
  ID local_138;
  byte local_129;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_150 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_158 = puVar2;
  _memset(auStack_1a0,0,0x40);
  uVar1 = local_148;
  (*(code *)PTR__objc_retain_02578638)();
  local_278 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
  if (local_278 != 0) {
    lVar6 = *local_190;
    local_280 = 0;
    do {
      do {
        if (*local_190 - lVar6 != 0) {
          _objc_enumerationMutation(*local_190 - lVar6,uVar1);
        }
        lVar7 = *(long *)(local_198 + local_280 * 8);
        local_160 = lVar7;
        FUN_015d5afc();
        _objc_retainAutoreleasedReturnValue();
        local_1a8 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
        if (lVar7 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_1a8);
        }
        _objc_storeStrong(&local_1a8,0);
        local_280 = local_280 + 1;
      } while (local_280 < local_278);
      local_278 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
      local_280 = 0;
    } while (local_278 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    local_129 = 0;
    local_1ac = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = 0;
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_1b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = puVar3;
    _memset(auStack_210,0,0x40);
    puVar2 = local_158;
    (*(code *)PTR__objc_retain_02578638)();
    local_2b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_128,0x10);
    if (local_2b8 != (undefined *)0x0) {
      lVar6 = *local_200;
      local_2c0 = (undefined *)0x0;
      do {
        do {
          if (*local_200 - lVar6 != 0) {
            _objc_enumerationMutation(*local_200 - lVar6,puVar2);
          }
          local_1d0 = *(undefined8 *)(local_208 + (long)local_2c0 * 8);
          IVar4 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_repositoryPath_026aeb48);
          _objc_retainAutoreleasedReturnValue();
          IVar5 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_218 = IVar5;
          (*(code *)PTR__objc_release_02578630)(IVar4);
          puVar3 = local_1c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c8,PTR_s_fileExistsAtPath__026ca630,local_218);
          if (((ulong)puVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_addObject__0269d180,local_1d0);
            local_1ac = 5;
          }
          else {
            local_220 = 0;
            local_228 = 0;
            puVar3 = local_1c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c8,PTR_s_removeItemAtPath_error__0269f910,local_218,&local_228);
            _objc_storeStrong(&local_220,local_228);
            if (((ulong)puVar3 & 1) == 0) {
              if (local_1c0 == 0) {
                _objc_storeStrong(&local_1c0,local_220);
              }
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_addObject__0269d180,local_1d0);
            }
            _objc_storeStrong(&local_220,0);
            local_1ac = 0;
          }
          _objc_storeStrong(&local_218,0);
          local_2c0 = local_2c0 + 1;
        } while (local_2c0 < local_2b8);
        local_2b8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_128,
                   0x10);
        local_2c0 = (undefined *)0x0;
      } while (local_2b8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_count_0269cfe0);
    IVar4 = local_138;
    puVar2 = local_1b8;
    if (puVar3 != (undefined *)0x0) {
      local_250 = PTR___NSConcreteStackBlock_02578660;
      local_248 = 0xc2000000;
      local_244 = 0;
      local_240 = FUN_015dc25c;
      local_238 = &DAT_02587458;
      (*(code *)PTR__objc_retain_02578638)();
      local_230 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_updateConfiguration__026b0fd8,&local_250);
      _objc_storeStrong(&local_230,0);
    }
    IVar4 = local_1c0;
    if ((local_150 != (ID *)0x0) && (local_1c0 != 0)) {
      _objc_retainAutorelease();
      *local_150 = IVar4;
    }
    puVar2 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_count_0269cfe0);
    puVar3 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0);
    local_129 = puVar2 == puVar3;
    local_1ac = 1;
    _objc_storeStrong(&local_1c8);
    _objc_storeStrong(&local_1c0,0);
    _objc_storeStrong(&local_1b8,0);
  }
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_129 & 1;
}

