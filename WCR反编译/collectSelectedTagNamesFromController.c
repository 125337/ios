// collectSelectedTagNamesFromController @ 01bfd5f8

/* Function Stack Size: 0x10 bytes */

ID WCRefineMomentsForwardOfficialTagSheetDelegate::collectSelectedTagNamesFromController
             (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  ID IVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong local_2e8;
  ulong local_2e0;
  undefined *local_290;
  undefined *local_288;
  byte local_264;
  ID local_258;
  int local_24c;
  ID local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  ulong local_200;
  ID local_1f8 [4];
  ID local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  undefined *local_188;
  undefined *local_180;
  byte local_171;
  ID local_170;
  undefined4 local_164;
  ID local_160;
  SEL local_158;
  ID local_150;
  undefined *local_148;
  undefined1 auStack_140 [128];
  undefined1 auStack_c0 [128];
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_158 = param_2;
  local_150 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tagController_026c0c20);
  _objc_retainAutoreleasedReturnValue();
  local_160 = param_1;
  if (param_1 == 0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_164 = 1;
    local_148 = puVar1;
  }
  else {
    FUN_01bfdd7c();
    _objc_retainAutoreleasedReturnValue();
    local_264 = 0;
    local_170 = param_1;
    if (param_1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_IdToLabelName__026c0c28);
      local_264 = (byte)param_1;
    }
    local_171 = local_264 & 1;
    puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
    _objc_retainAutoreleasedReturnValue();
    local_40 = &cf_allTagTableView;
    local_38 = &cf_recentlyUsedTagTableView;
    local_30 = &cf_searchTagTableView;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_180 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_188 = puVar2;
    _memset(auStack_1d0,0,0x40);
    puVar1 = local_188;
    (*(code *)PTR__objc_retain_02578638)();
    local_288 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_c0,0x10);
    if (local_288 != (undefined *)0x0) {
      lVar7 = *local_1c0;
      local_290 = (undefined *)0x0;
      do {
        do {
          if (*local_1c0 - lVar7 != 0) {
            _objc_enumerationMutation(*local_1c0 - lVar7,puVar1);
          }
          local_190 = *(undefined8 *)(local_1c8 + (long)local_290 * 8);
          local_1d8 = 0;
          IVar3 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_valueForKey__0269d128,local_190);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = local_1d8;
          local_1d8 = IVar3;
          (*(code *)PTR__objc_release_02578630)(IVar4);
          if ((local_1d8 == 0) ||
             (IVar4 = local_1d8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_1d8,PTR_s_respondsToSelector__026ca818,
                        PTR_s_getArrSelectedTagId_026c0c30), (IVar4 & 1) == 0)) {
            local_164 = 3;
          }
          else {
            IVar4 = local_1d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_getArrSelectedTagId_026c0c30);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            local_1f8[0] = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((IVar4 & 1) == 0) {
              local_164 = 3;
            }
            else {
              _memset(auStack_240,0,0x40);
              IVar4 = local_1f8[0];
              (*(code *)PTR__objc_retain_02578638)();
              local_2e0 = IVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,
                         auStack_140,0x10);
              if (local_2e0 != 0) {
                lVar8 = *local_230;
                local_2e8 = 0;
                do {
                  do {
                    if (*local_230 - lVar8 != 0) {
                      _objc_enumerationMutation(*local_230 - lVar8,IVar4);
                    }
                    uVar9 = *(ulong *)(local_238 + local_2e8 * 8);
                    local_248 = 0;
                    local_200 = uVar9;
                    if ((local_171 & 1) != 0) {
                      local_24c = 0;
                      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar9,PTR_s_isKindOfClass__0269cd68,puVar2);
                      if ((uVar9 & 1) == 0) {
                        uVar9 = local_200;
                        FUN_01bfdeac();
                        _objc_retainAutoreleasedReturnValue();
                        uVar5 = uVar9;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        local_24c = (int)uVar5;
                        (*(code *)PTR__objc_release_02578630)(uVar9);
                      }
                      else {
                        uVar9 = local_200;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_200,PTR_s_unsignedIntValue_0269db10);
                        local_24c = (int)uVar9;
                      }
                      if (local_24c != 0) {
                        IVar6 = local_170;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_170,PTR_s_IdToLabelName__026c0c28,local_24c);
                        _objc_retainAutoreleasedReturnValue();
                        local_258 = IVar6;
                        FUN_01bfdeac();
                        _objc_retainAutoreleasedReturnValue();
                        IVar3 = local_248;
                        local_248 = IVar6;
                        (*(code *)PTR__objc_release_02578630)(IVar3);
                        _objc_storeStrong(&local_258,0);
                      }
                    }
                    IVar3 = local_248;
                    (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_length_0269cca0);
                    if (IVar3 != 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_180,PTR_s_addObject__0269d180,local_248);
                    }
                    _objc_storeStrong(&local_248,0);
                    local_2e8 = local_2e8 + 1;
                  } while (local_2e8 < local_2e0);
                  local_2e0 = IVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,
                             auStack_140,0x10);
                  local_2e8 = 0;
                } while (local_2e0 != 0);
              }
              (*(code *)PTR__objc_release_02578630)(IVar4);
              local_164 = 0;
            }
            _objc_storeStrong(local_1f8,0);
          }
          _objc_storeStrong(&local_1d8,0);
          local_290 = local_290 + 1;
        } while (local_290 < local_288);
        local_288 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_c0,
                   0x10);
        local_290 = (undefined *)0x0;
      } while (local_288 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_164 = 1;
    local_148 = puVar1;
    _objc_storeStrong(&local_188);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_170,0);
  }
  _objc_storeStrong(&local_160,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_148;
}

