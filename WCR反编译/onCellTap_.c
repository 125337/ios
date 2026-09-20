// onCellTap: @ 01952830

/* Function Stack Size: 0x18 bytes */

void WCRefineFakeLocationHistoryViewController::onCellTap_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *local_340;
  undefined *local_338;
  cfstringStruct *local_308;
  cfstringStruct *local_278;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  undefined8 local_200;
  undefined *local_1f8;
  char *local_1f0;
  char *local_1e8;
  char *local_1e0;
  undefined *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  code *local_1c8;
  undefined *local_1c0;
  undefined1 auStack_1b8 [8];
  ID local_1b0;
  byte local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  undefined1 auStack_178 [8];
  ID local_170;
  byte local_168;
  undefined *local_160;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  cfstringStruct *local_138;
  undefined1 auStack_130 [8];
  undefined *local_128 [3];
  undefined *local_110;
  undefined1 auStack_108 [15];
  bool local_f9;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  byte local_e1;
  cfstringStruct *local_e0;
  undefined4 local_d4;
  cfstringStruct *local_d0;
  ID local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_indexFromSender__026b9af0,local_c0);
  pcVar3 = (cfstringStruct *)PTR_WCRefineFakeLocationHistoryStore_026cf188;
  local_c8 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFakeLocationHistoryStore_026cf188,PTR_s_allItems_026a2730);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_c8;
  local_d0 = pcVar3;
  if (((long)local_c8 < 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_count_0269cfe0),
     (long)pcVar3 <= (long)IVar2)) {
    local_d4 = 1;
  }
  else {
    pcVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_c8);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_favorite);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_e1 = (byte)pcVar4;
    pcVar3 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_name)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    local_f9 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_278 = &cf_MOn_;
    }
    else {
      local_278 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = local_278;
    }
    local_f9 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = local_278;
    if ((local_f9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    _objc_initWeak(auStack_108,local_b0);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_WCRFakeLocHistSheetAction_026cf190;
    local_110 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFakeLocHistSheetAction_026cf190,PTR_s_new_0269d288)
    ;
    local_128[0] = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setTitle__0269cef0,&cf__Nwp);
    local_158 = PTR___NSConcreteStackBlock_02578660;
    local_150 = 0xc2000000;
    local_14c = 0;
    local_148 = FUN_019533ac;
    local_140 = &DAT_02579c60;
    _objc_copyWeak(auStack_130,auStack_108);
    pcVar3 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_128[0],PTR_s_setBlock__026b4f10,&local_158);
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_addObject__0269d180,local_128[0]);
    puVar5 = PTR_WCRFakeLocHistSheetAction_026cf190;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFakeLocHistSheetAction_026cf190,PTR_s_new_0269d288)
    ;
    pcVar3 = &cf_Sm6e;
    if ((local_e1 & 1) == 0) {
      pcVar3 = &cf_6e;
    }
    local_160 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTitle__0269cef0,pcVar3);
    local_198 = PTR___NSConcreteStackBlock_02578660;
    local_190 = 0xc2000000;
    local_18c = 0;
    local_188 = FUN_01953410;
    local_180 = &DAT_0258a208;
    local_168 = local_e1 & 1;
    local_170 = local_c8;
    _objc_copyWeak(auStack_178,auStack_108);
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setBlock__026b4f10,&local_198);
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_addObject__0269d180,local_160);
    puVar5 = PTR_WCRFakeLocHistSheetAction_026cf190;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFakeLocHistSheetAction_026cf190,PTR_s_new_0269d288)
    ;
    local_1a0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTitle__0269cef0,&cf_Rd);
    local_1d8 = PTR___NSConcreteStackBlock_02578660;
    local_1d0 = 0xc2000000;
    local_1cc = 0;
    local_1c8 = FUN_019534e0;
    local_1c0 = &DAT_0258a208;
    local_1a8 = local_e1 & 1;
    local_1b0 = local_c8;
    _objc_copyWeak(auStack_1b8,auStack_108);
    (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setBlock__026b4f10,&local_1d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_addObject__0269d180,local_1a0);
    pcVar7 = "WCActionSheet";
    _objc_getClass();
    pcVar8 = "WCActionSheetItem";
    local_1e0 = pcVar7;
    _objc_getClass();
    local_1e8 = pcVar8;
    if ((local_1e0 == (char *)0x0) || (pcVar8 == (char *)0x0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_applyItem__026b68e0,local_e0);
      local_d4 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSheetActions__026b4f18,local_110);
      pcVar7 = local_1e0;
      _objc_alloc();
      pcVar3 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_308 = &cf_SS_MO;
      }
      else {
        local_308 = local_f0;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar7,PTR_s_initWithTitle_delegate_cancelBut_0269d2f0,local_308,local_b0,&cf_Sm,0)
      ;
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_1f0 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_1f8 = puVar5;
      _memset(auStack_240,0,0x40);
      puVar5 = local_110;
      (*(code *)PTR__objc_retain_02578638)();
      local_338 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_a8,0x10)
      ;
      if (local_338 != (undefined *)0x0) {
        lVar10 = *local_230;
        local_340 = (undefined *)0x0;
        do {
          do {
            if (*local_230 - lVar10 != 0) {
              _objc_enumerationMutation(*local_230 - lVar10,puVar5);
            }
            puVar6 = local_1f8;
            local_200 = *(undefined8 *)(local_238 + (long)local_340 * 8);
            pcVar7 = local_1e8;
            _objc_alloc();
            uVar9 = local_200;
            (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_title_0269d250);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_initWithTitle__0269d2f8);
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180,pcVar7);
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            (*(code *)PTR__objc_release_02578630)(uVar9);
            local_340 = local_340 + 1;
          } while (local_340 < local_338);
          local_338 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_a8,
                     0x10);
          local_340 = (undefined *)0x0;
        } while (local_338 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1f0,PTR_s_setValue_forKey__0269d300,local_1f8,&cf_buttonTitleList);
      pcVar7 = local_1f0;
      puVar5 = PTR_s_showInView__0269d310;
      IVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar7,puVar5);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      _objc_storeStrong(&local_1f8);
      _objc_storeStrong(&local_1f0,0);
      local_d4 = 0;
    }
    _objc_destroyWeak(auStack_1b8);
    _objc_storeStrong(&local_1a0);
    _objc_destroyWeak(auStack_178);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_138,0);
    _objc_destroyWeak(auStack_130);
    _objc_storeStrong(local_128,0);
    _objc_storeStrong(&local_110,0);
    _objc_destroyWeak(auStack_108);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

