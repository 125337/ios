// promptMoveRels: @ 01b6d39c

/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonLibraryViewController::promptMoveRels_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  ulong local_1b8;
  undefined *local_178;
  undefined *local_170;
  cfstringStruct *local_140;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined *local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined4 local_c4;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  lVar6 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  if (lVar6 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbh_);
    local_c4 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setPendingMoveRels__026bfa88,local_c0);
    pcVar1 = &cf_WCActionSheet;
    _NSClassFromString();
    pcVar2 = &cf_WCActionSheetItem;
    local_d0 = pcVar1;
    _NSClassFromString();
    local_d8 = pcVar2;
    if ((local_d0 == (cfstringStruct *)0x0) || (pcVar2 == (cfstringStruct *)0x0)) {
      local_c4 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_e0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar4;
      _memset(auStack_130,0,0x40);
      puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_filterChipOptions_026a1030);
      _objc_retainAutoreleasedReturnValue();
      local_170 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_170 != (undefined *)0x0) {
        lVar6 = *local_120;
        local_178 = (undefined *)0x0;
        do {
          do {
            if (*local_120 - lVar6 != 0) {
              _objc_enumerationMutation(*local_120 - lVar6,puVar3);
            }
            uVar7 = *(ulong *)(local_128 + (long)local_178 * 8);
            local_f0 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_138 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar4);
            if (((uVar7 & 1) == 0) ||
               (uVar7 = local_138,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_138,PTR_s_isEqualToString__0269ccc8,_WCRLocalEmoticonGroupAllId),
               puVar4 = local_e0, (uVar7 & 1) != 0)) {
              local_c4 = 3;
            }
            else {
              pcVar1 = local_d8;
              _objc_alloc();
              uVar7 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
              _objc_retainAutoreleasedReturnValue();
              local_1b8 = uVar7;
              if (uVar7 == 0) {
                local_1b8 = local_138;
              }
              (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,local_1b8);
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(pcVar1);
              (*(code *)PTR__objc_release_02578630)(uVar7);
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_138);
              local_c4 = 0;
            }
            _objc_storeStrong(&local_138,0);
            local_178 = local_178 + 1;
          } while (local_178 < local_170);
          local_170 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_178 = (undefined *)0x0;
        } while (local_170 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_e0;
      pcVar1 = local_d8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_d0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_140 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_setValue_forKey__0269d300,local_e0,&cf_buttonTitleList);
      pcVar1 = local_140;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0x24f761);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_tag);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_setAssociatedObject(local_140,"wcr_le_move_packs",local_e8,1);
      pcVar1 = local_140;
      IVar5 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      _objc_storeStrong(&local_140,0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_e0,0);
      local_c4 = 0;
    }
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

