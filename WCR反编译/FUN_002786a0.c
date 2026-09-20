// FUN_002786a0 @ 002786a0

void FUN_002786a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *local_330;
  undefined *local_328;
  undefined *local_2f0;
  undefined *local_2e8;
  undefined1 auStack_248 [8];
  long local_240;
  long *local_238;
  undefined8 local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  ulong local_1c0;
  ulong local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined **local_178;
  undefined *local_170 [3];
  undefined *local_158;
  ulong local_150;
  ulong local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  _objc_storeStrong(&local_148,param_1);
  local_150 = 0;
  _objc_storeStrong(&local_150,param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_158 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &local_1a8;
  local_1a8 = PTR___NSConcreteStackBlock_02578660;
  local_1a0 = 0xc2000000;
  local_19c = 0;
  local_198 = FUN_0027af74;
  local_190 = &DAT_0257b298;
  local_170[0] = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = local_158;
  local_188 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_180 = puVar1;
  _objc_retainBlock();
  uVar4 = local_148;
  local_178 = ppuVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_respondsToSelector__026ca818,PTR_s_mediaPath_026a1650);
  ppuVar3 = local_178;
  if ((uVar4 & 1) != 0) {
    uVar4 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_mediaPath_026a1650);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar3[2])();
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_1b0 = puVar1;
  if (local_150 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180,local_150);
  }
  uVar4 = local_148;
  FUN_0027b0fc();
  _objc_retainAutoreleasedReturnValue();
  local_1b8 = uVar4;
  if ((uVar4 != 0) && (uVar4 != local_150)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_addObject__0269d180,uVar4);
  }
  _memset(auStack_200,0,0x40);
  puVar1 = local_1b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_2e8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_a8,0x10);
  if (local_2e8 != (undefined *)0x0) {
    lVar5 = *local_1f0;
    local_2f0 = (undefined *)0x0;
    do {
      do {
        if (*local_1f0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_1f0 - lVar5,puVar1);
        }
        local_1c0 = *(ulong *)(local_1f8 + (long)local_2f0 * 8);
        _memset(auStack_248,0,0x40);
        local_140 = &cf_getFormatVideoPath;
        local_138 = &cf_getTempVideoPath;
        local_130 = &cf_currentVideoPath;
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_140,3);
        _objc_retainAutoreleasedReturnValue();
        local_328 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_328 != (undefined *)0x0) {
          lVar6 = *local_238;
          local_330 = (undefined *)0x0;
          do {
            do {
              if (*local_238 - lVar6 != 0) {
                _objc_enumerationMutation(*local_238 - lVar6,puVar2);
              }
              uVar7 = *(undefined8 *)(local_240 + (long)local_330 * 8);
              local_208 = uVar7;
              _NSSelectorFromString();
              uVar4 = local_1c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c0,PTR_s_respondsToSelector__026ca818,uVar7);
              ppuVar3 = local_178;
              if ((uVar4 & 1) != 0) {
                uVar4 = local_1c0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1c0,uVar7);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)ppuVar3[2])();
                (*(code *)PTR__objc_release_02578630)(uVar4);
              }
              local_330 = local_330 + 1;
            } while (local_330 < local_328);
            local_328 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,
                       auStack_128,0x10);
            local_330 = (undefined *)0x0;
          } while (local_328 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_2f0 = local_2f0 + 1;
      } while (local_2f0 < local_2e8);
      local_2e8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_a8,0x10)
      ;
      local_2f0 = (undefined *)0x0;
    } while (local_2e8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_158;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_1b8);
  _objc_storeStrong(&local_1b0,0);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(&local_180,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(local_170,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

