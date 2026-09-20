// homeAvatarStripUsernames @ 02156f5c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::homeAvatarStripUsernames(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *local_2c0;
  ulong local_280;
  ulong local_278;
  ulong local_238;
  ulong local_230;
  bool local_201;
  undefined *local_200;
  undefined *local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  ulong local_1b0;
  undefined4 local_1a4;
  ulong local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  undefined *local_150;
  ID local_148;
  SEL local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = param_2;
  local_138 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_homeAvatarStripNormalizedRowConf_026be298);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_148 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar2;
  _memset(auStack_198,0,0x40);
  IVar1 = local_148;
  (*(code *)PTR__objc_retain_02578638)();
  local_230 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
  if (local_230 != 0) {
    lVar4 = *local_188;
    local_238 = 0;
    do {
      do {
        if (*local_188 - lVar4 != 0) {
          _objc_enumerationMutation(*local_188 - lVar4,IVar1);
        }
        uVar7 = *(ulong *)(local_190 + local_238 * 8);
        local_158 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_usernames);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_1a0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar7 & 1) == 0) {
          local_1a4 = 3;
        }
        else {
          _memset(auStack_1f0,0,0x40);
          uVar7 = local_1a0;
          (*(code *)PTR__objc_retain_02578638)();
          local_278 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,
                     0x10);
          if (local_278 != 0) {
            lVar5 = *local_1e0;
            local_280 = 0;
            do {
              do {
                if (*local_1e0 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_1e0 - lVar5,uVar7);
                }
                uVar6 = *(ulong *)(local_1e8 + local_280 * 8);
                puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_1b0 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
                if (((uVar6 & 1) != 0) &&
                   (uVar6 = local_1b0,
                   (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_length_0269cca0),
                   uVar6 != 0)) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_150,PTR_s_addObject__0269d180,local_1b0);
                }
                local_280 = local_280 + 1;
              } while (local_280 < local_278);
              local_278 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,
                         auStack_128,0x10);
              local_280 = 0;
            } while (local_278 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar7);
          local_1a4 = 0;
        }
        _objc_storeStrong(&local_1a0,0);
        local_238 = local_238 + 1;
      } while (local_238 < local_230);
      local_230 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
      local_238 = 0;
    } while (local_230 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_1f8;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_201 = ((ulong)puVar2 & 1) == 0;
    if (local_201) {
      local_2c0 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_2c0 = local_1f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_copy_0269d150);
      local_200 = local_2c0;
    }
    local_201 = !local_201;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_2c0;
    if (local_201) {
      (*(code *)PTR__objc_release_02578630)(local_200);
    }
    local_1a4 = 1;
    _objc_storeStrong(&local_1f8,0);
  }
  else {
    puVar2 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_copy_0269d150);
    local_1a4 = 1;
    local_130 = puVar2;
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_130;
}

