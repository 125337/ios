// createGroupNamed: @ 00f2ba5c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonGroupStore::createGroupNamed_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_340;
  undefined *local_300;
  undefined *local_2f8;
  undefined *local_2a8;
  undefined *local_2a0;
  uint local_26c;
  undefined *local_258;
  undefined *local_250;
  undefined *local_248;
  long local_240;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  long local_1f8;
  long local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  ulong local_1a8;
  undefined *local_1a0;
  byte local_191;
  undefined *local_190;
  int local_184;
  ulong local_180;
  ulong local_178;
  SEL local_170;
  undefined *local_168;
  undefined *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  undefined *local_140;
  ulong local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_178 = 0;
  local_170 = param_2;
  local_168 = (undefined *)param_1;
  _objc_storeStrong(&local_178,param_3);
  uVar1 = local_178;
  FUN_00f29cf4();
  _objc_retainAutoreleasedReturnValue();
  local_180 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_160 = (undefined *)0x0;
    local_184 = 1;
  }
  else {
    uVar2 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_isEqualToString__0269ccc8,&cf_hQ);
    uVar1 = local_180;
    local_191 = 0;
    local_26c = 1;
    if ((uVar2 & 1) == 0) {
      puVar3 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_ungroupedDisplayName_026a1040);
      _objc_retainAutoreleasedReturnValue();
      local_191 = 1;
      local_190 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8);
      local_26c = (uint)uVar1;
    }
    if ((local_191 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_190);
    }
    if ((local_26c & 1) == 0) {
      puVar3 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_groups_026a1048);
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = puVar3;
      _memset(auStack_1e8,0,0x40);
      puVar3 = local_1a0;
      (*(code *)PTR__objc_retain_02578638)();
      local_2a0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_a8,0x10)
      ;
      if (local_2a0 != (undefined *)0x0) {
        lVar7 = *local_1d8;
        local_2a8 = (undefined *)0x0;
        do {
          do {
            if (*local_1d8 - lVar7 != 0) {
              _objc_enumerationMutation(*local_1d8 - lVar7,puVar3);
            }
            uVar9 = *(ulong *)(local_1e0 + (long)local_2a8 * 8);
            local_1a8 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = uVar9;
            FUN_00f29cf4();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar1);
            (*(code *)PTR__objc_release_02578630)(uVar9);
            if ((uVar2 & 1) != 0) {
              local_160 = (undefined *)0x0;
              local_184 = 1;
              goto LAB_00f2bdf0;
            }
            local_2a8 = local_2a8 + 1;
          } while (local_2a8 < local_2a0);
          local_2a0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_a8,
                     0x10);
          local_2a8 = (undefined *)0x0;
        } while (local_2a0 != (undefined *)0x0);
      }
      local_184 = 0;
LAB_00f2bdf0:
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (local_184 == 0) {
        local_1f0 = -1;
        _memset(auStack_238,0,0x40);
        puVar3 = local_1a0;
        (*(code *)PTR__objc_retain_02578638)();
        local_2f8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_128,
                   0x10);
        if (local_2f8 != (undefined *)0x0) {
          lVar7 = *local_228;
          local_300 = (undefined *)0x0;
          do {
            do {
              if (*local_228 - lVar7 != 0) {
                _objc_enumerationMutation(*local_228 - lVar7,puVar3);
              }
              lVar8 = *(long *)(local_230 + (long)local_300 * 8);
              local_1f8 = lVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (lVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_order);
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar8;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(lVar8);
              if (local_1f0 < lVar4) {
                local_1f0 = lVar4;
              }
              local_300 = local_300 + 1;
              local_240 = lVar4;
            } while (local_300 < local_2f8);
            local_2f8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,
                       auStack_128,0x10);
            local_300 = (undefined *)0x0;
          } while (local_2f8 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_248 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_mutableCopy_0269d8a0);
        local_340 = puVar3;
        if (puVar3 == (undefined *)0x0) {
          local_258 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_340 = local_258;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_250 = local_340;
        if (puVar3 == (undefined *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_258);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_250;
        local_158 = &cf_id;
        local_140 = local_248;
        local_150 = &cf_name;
        local_138 = local_180;
        local_148 = &cf_order;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                   local_1f0 + 1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_130 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_140,&local_158,3);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setGroups__026abf30,local_250);
        FUN_00f2c2e0();
        puVar3 = local_248;
        (*(code *)PTR__objc_retain_02578638)();
        local_160 = puVar3;
        local_184 = 1;
        _objc_storeStrong(&local_250);
        _objc_storeStrong(&local_248,0);
      }
      _objc_storeStrong(&local_1a0,0);
    }
    else {
      local_160 = (undefined *)0x0;
      local_184 = 1;
    }
  }
  _objc_storeStrong(&local_180);
  _objc_storeStrong(&local_178,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_160;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

