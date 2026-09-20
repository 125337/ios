// loadCandidatesFromTagName:tagMgr: @ 01860a28

/* Function Stack Size: 0x20 bytes */

void WCRefineBatchRemarkViewController::loadCandidatesFromTagName_tagMgr_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct **ppcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  ID IVar7;
  long lVar8;
  undefined *local_368;
  undefined *local_360;
  cfstringStruct *local_318;
  cfstringStruct *local_310;
  cfstringStruct *local_2e8;
  cfstringStruct **local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  undefined8 local_218;
  undefined *local_210;
  cfstringStruct *local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  undefined8 local_1c0;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  undefined *local_188 [4];
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  undefined4 local_154;
  cfstringStruct **local_150;
  cfstringStruct *local_148;
  undefined8 local_140;
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
  ppcVar1 = &local_148;
  local_148 = (cfstringStruct *)0x0;
  _objc_storeStrong(ppcVar1,param_4);
  FUN_0185efc4();
  _objc_retainAutoreleasedReturnValue();
  local_150 = ppcVar1;
  if ((ppcVar1 == (cfstringStruct **)0x0) || (local_148 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSh__T_N);
    local_154 = 1;
  }
  else {
    local_160 = (cfstringStruct *)0x0;
    pcVar2 = &cf_getContactsForTagName_;
    _NSSelectorFromString();
    pcVar3 = local_148;
    local_168 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_respondsToSelector__026ca818,pcVar2);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,local_168,local_140);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_160;
      local_160 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_160;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_188[0] = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
    if ((((ulong)pcVar2 & 1) == 0) ||
       (pcVar2 = local_160, (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_count_0269cfe0),
       pcVar2 == (cfstringStruct *)0x0)) {
      pcVar2 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_respondsToSelector__026ca818,
                 PTR_s_getDicWithUserNameForAllTag_026a5b10);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar3 = local_148;
        FUN_018606cc(local_148,PTR_s_getDicWithUserNameForAllTag_026a5b10);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_190 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        pcVar2 = local_190;
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_198 = pcVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_1a0 = &::cf___;
          pcVar2 = &cf_LabelNameToId_;
          _NSSelectorFromString();
          pcVar3 = local_148;
          local_1a8 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_respondsToSelector__026ca818,pcVar2)
          ;
          if (((ulong)pcVar3 & 1) != 0) {
            pcVar2 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)(local_148,local_1a8,local_140);
            _objc_retainAutoreleasedReturnValue();
            local_1b0 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_description_026ca5f8);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
            _objc_retainAutoreleasedReturnValue();
            local_2e8 = pcVar3;
            if (pcVar3 == (cfstringStruct *)0x0) {
              local_2e8 = &::cf___;
            }
            _objc_storeStrong(&local_1a0,local_2e8);
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            _objc_storeStrong(&local_1b0,0);
          }
          _memset(auStack_200,0,0x40);
          pcVar2 = local_198;
          (*(code *)PTR__objc_retain_02578638)();
          local_310 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_a8,
                     0x10);
          if (local_310 != (cfstringStruct *)0x0) {
            lVar8 = *local_1f0;
            local_318 = (cfstringStruct *)0x0;
            do {
              do {
                if (*local_1f0 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_1f0 - lVar8,pcVar2);
                }
                local_1c0 = *(undefined8 *)(local_1f8 + (long)local_318 * 8);
                pcVar3 = local_198;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_198,PTR_s_objectForKeyedSubscript__0269d098,local_1c0);
                _objc_retainAutoreleasedReturnValue();
                local_208 = pcVar3;
                FUN_01861ab8(pcVar3,local_140,0);
                if ((((ulong)pcVar3 & 1) != 0) ||
                   ((pcVar3 = local_1a0,
                    (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_length_0269cca0),
                    pcVar3 != (cfstringStruct *)0x0 &&
                    (pcVar6 = local_208, FUN_01861ab8(pcVar3,local_208,local_1a0,0),
                    ((ulong)pcVar6 & 1) != 0)))) {
                  FUN_018614d4(local_1c0,local_188[0],0);
                }
                _objc_storeStrong(&local_208,0);
                local_318 = (cfstringStruct *)((long)&local_318->field0_0x0 + 1);
              } while (local_318 < local_310);
              local_310 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,
                         auStack_a8,0x10);
              local_318 = (cfstringStruct *)0x0;
            } while (local_310 != (cfstringStruct *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          _objc_storeStrong(&local_1a0);
          _objc_storeStrong(&local_198,0);
        }
        _objc_storeStrong(&local_190,0);
      }
    }
    else {
      FUN_018614d4(pcVar2,local_160,local_188[0],0);
    }
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_210 = puVar4;
    _memset(auStack_258,0,0x40);
    puVar4 = local_188[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_188[0],PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_360 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_360 != (undefined *)0x0) {
      lVar8 = *local_248;
      local_368 = (undefined *)0x0;
      do {
        do {
          if (*local_248 - lVar8 != 0) {
            _objc_enumerationMutation(*local_248 - lVar8,puVar4);
          }
          local_218 = *(undefined8 *)(local_250 + (long)local_368 * 8);
          ppcVar1 = local_150;
          FUN_0185efe4(local_150,local_218);
          _objc_retainAutoreleasedReturnValue();
          local_260 = ppcVar1;
          if (ppcVar1 != (cfstringStruct **)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_addObject__0269d180,ppcVar1);
          }
          _objc_storeStrong(&local_260,0);
          local_368 = local_368 + 1;
        } while (local_368 < local_360);
        local_360 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_128,
                   0x10);
        local_368 = (undefined *)0x0;
      } while (local_360 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_210;
    FUN_0185f8c8(local_210,local_150);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setSelectedCandidates__026b6930);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_h___);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setSourceTitle__026b6938);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_reloadTableData_0269dca8);
    puVar5 = PTR_WCRefineHelper_026ce000;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    IVar7 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_selectedCandidates_026b6960);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(IVar7);
    _objc_storeStrong(&local_210);
    _objc_storeStrong(local_188,0);
    _objc_storeStrong(&local_160,0);
    local_154 = 0;
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

