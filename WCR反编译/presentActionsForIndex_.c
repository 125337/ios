// presentActionsForIndex: @ 01b36ec0

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertKeywordsViewController::presentActionsForIndex_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *local_300;
  undefined *local_2f8;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  undefined8 local_1d8;
  undefined *local_1d0;
  char *local_1c8;
  undefined4 local_1bc;
  char *local_1b8;
  char *local_1b0;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  ID local_188;
  undefined1 auStack_180 [8];
  unsigned_long_long local_178;
  undefined *local_170;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  ID local_148;
  undefined1 auStack_140 [8];
  byte local_138;
  undefined *local_130;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  undefined1 auStack_108 [8];
  unsigned_long_long local_100;
  undefined *local_f8 [3];
  undefined *local_e0;
  undefined1 auStack_d8 [15];
  byte local_c9;
  ID local_c8;
  unsigned_long_long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_keywords_026bef60);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (param_3 < IVar2) {
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_keywords_026bef60);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isKeywordDisabled__026bef88,local_c8);
    local_c9 = (byte)IVar2;
    _objc_initWeak(auStack_d8,local_b0);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_WCRKeywordManageSheetAction_026cf390;
    local_e0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRKeywordManageSheetAction_026cf390,PTR_s_new_0269d288);
    local_f8[0] = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTitle__0269cef0,&cf__TT);
    local_128 = PTR___NSConcreteStackBlock_02578660;
    local_120 = 0xc2000000;
    local_11c = 0;
    local_118 = FUN_01b37870;
    local_110 = &DAT_025799c0;
    _objc_copyWeak(auStack_108,auStack_d8);
    local_100 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8[0],PTR_s_setBlock__026b4f10,&local_128);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_f8[0]);
    puVar4 = PTR_WCRKeywordManageSheetAction_026cf390;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRKeywordManageSheetAction_026cf390,PTR_s_new_0269d288);
    pcVar1 = &cf__T_u;
    if ((local_c9 & 1) == 0) {
      pcVar1 = &cf__P_u;
    }
    local_130 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTitle__0269cef0,pcVar1);
    local_168 = PTR___NSConcreteStackBlock_02578660;
    local_160 = 0xc2000000;
    local_15c = 0;
    local_158 = FUN_01b378d4;
    local_150 = &DAT_02589d08;
    _objc_copyWeak(auStack_140,auStack_d8);
    IVar2 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_148 = IVar2;
    local_138 = local_c9 & 1;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setBlock__026b4f10,&local_168);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_130);
    puVar4 = PTR_WCRKeywordManageSheetAction_026cf390;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRKeywordManageSheetAction_026cf390,PTR_s_new_0269d288);
    local_170 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTitle__0269cef0,&cf_Rd);
    local_1a8 = PTR___NSConcreteStackBlock_02578660;
    local_1a0 = 0xc2000000;
    local_19c = 0;
    local_198 = FUN_01b37a1c;
    local_190 = &DAT_0257c708;
    _objc_copyWeak(auStack_180,auStack_d8);
    IVar2 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = IVar2;
    local_178 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setBlock__026b4f10,&local_1a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_170);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setPendingSheetActions__026befb0,local_e0);
    pcVar6 = "WCActionSheet";
    _objc_getClass();
    pcVar7 = "WCActionSheetItem";
    local_1b0 = pcVar6;
    _objc_getClass();
    local_1b8 = pcVar7;
    if ((local_1b0 == (char *)0x0) || (pcVar7 == (char *)0x0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_renameKeywordAtIndex__026befa0,local_c0);
      local_1bc = 1;
    }
    else {
      pcVar6 = local_1b0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar6,PTR_s_initWithTitle_delegate_cancelBut_0269d2f0,local_c8,local_b0,&cf_Sm,0);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_1c8 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_1d0 = puVar4;
      _memset(auStack_218,0,0x40);
      puVar4 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_2f8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,0x10)
      ;
      if (local_2f8 != (undefined *)0x0) {
        lVar9 = *local_208;
        local_300 = (undefined *)0x0;
        do {
          do {
            if (*local_208 - lVar9 != 0) {
              _objc_enumerationMutation(*local_208 - lVar9,puVar4);
            }
            puVar5 = local_1d0;
            local_1d8 = *(undefined8 *)(local_210 + (long)local_300 * 8);
            pcVar6 = local_1b8;
            _objc_alloc();
            uVar8 = local_1d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_title_0269d250);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_initWithTitle__0269d2f8);
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180,pcVar6);
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            (*(code *)PTR__objc_release_02578630)(uVar8);
            local_300 = local_300 + 1;
          } while (local_300 < local_2f8);
          local_2f8 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,
                     0x10);
          local_300 = (undefined *)0x0;
        } while (local_2f8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c8,PTR_s_setValue_forKey__0269d300,local_1d0,&cf_buttonTitleList);
      pcVar6 = local_1c8;
      puVar4 = PTR_s_showInView__0269d310;
      IVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,puVar4);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      _objc_storeStrong(&local_1d0);
      _objc_storeStrong(&local_1c8,0);
      local_1bc = 0;
    }
    _objc_storeStrong(&local_188);
    _objc_destroyWeak(auStack_180);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_148,0);
    _objc_destroyWeak(auStack_140);
    _objc_storeStrong(&local_130,0);
    _objc_destroyWeak(auStack_108);
    _objc_storeStrong(local_f8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_destroyWeak(auStack_d8);
    _objc_storeStrong(&local_c8,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

