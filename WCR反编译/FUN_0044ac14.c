// FUN_0044ac14 @ 0044ac14

void FUN_0044ac14(ulong param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_260;
  undefined *local_200;
  undefined *local_1f8;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  undefined *local_100;
  undefined *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  ulong local_d8;
  undefined4 local_d0;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  FUN_0045839c();
  if ((param_1 & 1) == 0) goto LAB_0044b6c0;
  FUN_0043c204();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar6;
  (*(code *)PTR__objc_release_02578630)(param_1);
  uVar6 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  if (uVar6 == 0) {
    local_d0 = 1;
  }
  else if (DAT_028ca9b8 == 1) {
    FUN_00459810(0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_setHeader__026a3e10,local_b0);
    pcVar1 = &cf_WCUIAlertView;
    _NSClassFromString();
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_nx_Rd_Nv);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle_message__0269d260,&cf_nxRd);
    local_e0 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Rd,local_d8,
               PTR_s_WCRLE_handlePanelDelete_026a3e28);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_show_0269d280);
    local_d0 = 1;
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  else {
    if (DAT_028ca9b8 == 2) {
      pcVar1 = &cf_WCActionSheet;
      _NSClassFromString(0);
      pcVar2 = &cf_WCActionSheetItem;
      local_e8 = pcVar1;
      _NSClassFromString();
      local_f0 = pcVar2;
      if ((local_e8 == (cfstringStruct *)0x0) || (pcVar2 == (cfstringStruct *)0x0)) {
        local_d0 = 1;
        goto LAB_0044b6b4;
      }
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_f8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_100 = puVar4;
      _memset(auStack_148,0,0x40);
      puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_filterChipOptions_026a1030);
      _objc_retainAutoreleasedReturnValue();
      local_1f8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1f8 != (undefined *)0x0) {
        lVar5 = *local_138;
        local_200 = (undefined *)0x0;
        do {
          do {
            if (*local_138 - lVar5 != 0) {
              _objc_enumerationMutation(*local_138 - lVar5,puVar3);
            }
            uVar6 = *(ulong *)(local_140 + (long)local_200 * 8);
            local_108 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_150 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
            if (((uVar6 & 1) == 0) ||
               (uVar6 = local_150,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_150,PTR_s_isEqualToString__0269ccc8,_WCRLocalEmoticonGroupAllId),
               puVar4 = local_f8, (uVar6 & 1) != 0)) {
              local_d0 = 3;
            }
            else {
              pcVar1 = local_f0;
              _objc_alloc();
              uVar6 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_108,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
              _objc_retainAutoreleasedReturnValue();
              local_260 = uVar6;
              if (uVar6 == 0) {
                local_260 = local_150;
              }
              (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,local_260);
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180,pcVar1);
              (*(code *)PTR__objc_release_02578630)(pcVar1);
              (*(code *)PTR__objc_release_02578630)(uVar6);
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addObject__0269d180,local_150);
              local_d0 = 0;
            }
            _objc_storeStrong(&local_150,0);
            local_200 = local_200 + 1;
          } while (local_200 < local_1f8);
          local_1f8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_200 = (undefined *)0x0;
        } while (local_1f8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_f8;
      pcVar1 = local_f0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,&cf_e_R_);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180,pcVar1);
      (*(code *)PTR__objc_release_02578630)();
      FUN_00459810();
      _objc_retainAutoreleasedReturnValue();
      local_158 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setHeader__026a3e10,local_b0);
      pcVar1 = local_e8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_initWithTitle_delegate_cancelBut_0269d2f0,&cf_yRR_,local_158,&cf_Sm,0)
      ;
      local_160 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_setValue_forKey__0269d300,local_f8,&cf_buttonTitleList);
      pcVar1 = local_160;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0x24f761);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_tag);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_setAssociatedObject(local_160,"wcr_le_move_packs",local_100,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_showInView__0269d310,local_b0);
      _objc_storeStrong(&local_160);
      _objc_storeStrong(&local_158,0);
      _objc_storeStrong(&local_100,0);
      _objc_storeStrong(&local_f8,0);
    }
    local_d0 = 0;
  }
LAB_0044b6b4:
  _objc_storeStrong(&local_c0,0);
LAB_0044b6c0:
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

