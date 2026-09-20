// FUN_0044e974 @ 0044e974

void FUN_0044e974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong local_220;
  undefined *local_1c0;
  undefined *local_1b8;
  cfstringStruct *local_150;
  ulong local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  undefined *local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined4 local_d8;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
  uVar1 = local_b0;
  FUN_0045fe90();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_relativePathResolvingWrap__026a3d80);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el_Rh_);
    local_d8 = 1;
  }
  else {
    pcVar3 = &cf_WCActionSheet;
    _NSClassFromString();
    pcVar4 = &cf_WCActionSheetItem;
    local_e0 = pcVar3;
    _NSClassFromString();
    local_e8 = pcVar4;
    if ((local_e0 == (cfstringStruct *)0x0) || (pcVar4 == (cfstringStruct *)0x0)) {
      local_d8 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_f0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = puVar5;
      _memset(auStack_140,0,0x40);
      puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_filterChipOptions_026a1030);
      _objc_retainAutoreleasedReturnValue();
      local_1b8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1b8 != (undefined *)0x0) {
        lVar6 = *local_130;
        local_1c0 = (undefined *)0x0;
        do {
          do {
            if (*local_130 - lVar6 != 0) {
              _objc_enumerationMutation(*local_130 - lVar6,puVar2);
            }
            uVar7 = *(ulong *)(local_138 + (long)local_1c0 * 8);
            local_100 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_148 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
            if (((uVar7 & 1) == 0) ||
               (uVar7 = local_148,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_148,PTR_s_isEqualToString__0269ccc8,_WCRLocalEmoticonGroupAllId),
               puVar5 = local_f0, (uVar7 & 1) != 0)) {
              local_d8 = 5;
            }
            else {
              pcVar3 = local_e8;
              _objc_alloc();
              uVar7 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
              _objc_retainAutoreleasedReturnValue();
              local_220 = uVar7;
              if (uVar7 == 0) {
                local_220 = local_148;
              }
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_initWithTitle__0269d2f8,local_220);
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180,pcVar3);
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              (*(code *)PTR__objc_release_02578630)(uVar7);
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addObject__0269d180,local_148);
              local_d8 = 0;
            }
            _objc_storeStrong(&local_148,0);
            local_1c0 = local_1c0 + 1;
          } while (local_1c0 < local_1b8);
          local_1b8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                     0x10);
          local_1c0 = (undefined *)0x0;
        } while (local_1b8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_f0;
      pcVar3 = local_e8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_initWithTitle__0269d2f8,&cf_e_R_);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180,pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      _objc_setAssociatedObject(local_b0,"wcr_le_move_rel",local_c8,3);
      _objc_setAssociatedObject(local_b0,"wcr_le_move_packs",local_f8,1);
      pcVar3 = local_e0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_initWithTitle_delegate_cancelBut_0269d2f0,&cf_yRR_,local_b0,&cf_Sm,0);
      local_150 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_setValue_forKey__0269d300,local_f0,&cf_buttonTitleList);
      pcVar3 = local_150;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x24f761);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setValue_forKey__0269d300,puVar2,&cf_tag);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pcVar3 = local_150;
      uVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showInView__0269d310);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      _objc_storeStrong(&local_150);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_f0,0);
      local_d8 = 0;
    }
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

