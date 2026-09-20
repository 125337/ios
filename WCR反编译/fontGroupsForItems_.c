// fontGroupsForItems: @ 019d2368

/* Function Stack Size: 0x18 bytes */

ID WCRefineFontListViewController::fontGroupsForItems_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  ID IVar6;
  long lVar7;
  undefined *local_2a8;
  undefined *local_2a0;
  cfstringStruct *local_270;
  ulong local_248;
  ulong local_240;
  ulong local_228;
  undefined *local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  undefined8 local_1c0;
  undefined *local_1b8;
  undefined4 local_1ac;
  cfstringStruct *local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  cfstringStruct *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_148 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_150 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_158 = puVar1;
  _memset(auStack_1a0,0,0x40);
  if (local_140 == 0) {
    local_228 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_228 = local_140;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_240 = local_228;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_228,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
  if (local_240 != 0) {
    lVar7 = *local_190;
    local_248 = 0;
    do {
      do {
        if (*local_190 - lVar7 != 0) {
          _objc_enumerationMutation(*local_190 - lVar7,local_228);
        }
        local_160 = *(cfstringStruct **)(local_198 + local_248 * 8);
        IVar3 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_item_matchesKeyword__026bae38,local_160,
                   *(undefined8 *)(local_130 + (long)_keyword));
        if ((IVar3 & 1) != 0) {
          pcVar4 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
          _objc_retainAutoreleasedReturnValue();
          local_270 = pcVar4;
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_270 = &::cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_1a8 = local_270;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar4 = local_1a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_length_0269cca0);
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_1ac = 3;
          }
          else {
            puVar1 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_150,PTR_s_objectForKeyedSubscript__0269d098,local_1a8);
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = puVar1;
            if (puVar1 == (undefined *)0x0) {
              puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = local_1b8;
              local_1b8 = puVar2;
              (*(code *)PTR__objc_release_02578630)(puVar1);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,local_1b8,local_1a8);
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_1a8);
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_addObject__0269d180,local_160);
            _objc_storeStrong(&local_1b8,0);
            local_1ac = 0;
          }
          _objc_storeStrong(&local_1a8,0);
        }
        local_248 = local_248 + 1;
      } while (local_248 < local_240);
      local_240 = local_228;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_228,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                 0x10);
      local_248 = 0;
    } while (local_240 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_228);
  _memset(auStack_200,0,0x40);
  puVar1 = local_158;
  (*(code *)PTR__objc_retain_02578638)();
  local_2a0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_128,0x10);
  if (local_2a0 != (undefined *)0x0) {
    lVar7 = *local_1f0;
    local_2a8 = (undefined *)0x0;
    do {
      do {
        if (*local_1f0 - lVar7 != 0) {
          _objc_enumerationMutation(*local_1f0 - lVar7,puVar1);
        }
        local_1c0 = *(undefined8 *)(local_1f8 + (long)local_2a8 * 8);
        puVar5 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_150,PTR_s_objectForKeyedSubscript__0269d098,local_1c0);
        _objc_retainAutoreleasedReturnValue();
        local_208 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_count_0269cfe0);
        puVar2 = local_148;
        if (puVar5 == (undefined *)0x0) {
          local_1ac = 5;
        }
        else {
          IVar3 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_130,PTR_s_groupRowForPath_items__026bae40,local_1c0,local_208);
          _objc_retainAutoreleasedReturnValue();
          IVar6 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(IVar6);
          (*(code *)PTR__objc_release_02578630)(IVar3);
          local_1ac = 0;
        }
        _objc_storeStrong(&local_208,0);
        local_2a8 = local_2a8 + 1;
      } while (local_2a8 < local_2a0);
      local_2a0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_128,0x10
                );
      local_2a8 = (undefined *)0x0;
    } while (local_2a0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_copy_0269d150);
  local_1ac = 1;
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

