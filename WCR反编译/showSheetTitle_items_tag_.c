// showSheetTitle:items:tag: @ 01c3fa08

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x28 bytes */

void WCRefineNameplateLibraryViewController::showSheetTitle_items_tag_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  ulong local_178;
  ulong local_170;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined *local_f8;
  cfstringStruct *local_f0;
  undefined4 local_e4;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  long_long local_d0;
  ulong local_c8 [2];
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8[1] = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(local_c8 + 1,param_3);
  local_c8[0] = 0;
  _objc_storeStrong(local_c8,param_4);
  pcVar2 = &cf_WCActionSheet;
  local_d0 = param_5;
  _NSClassFromString();
  pcVar3 = &cf_WCActionSheetItem;
  local_d8 = pcVar2;
  _NSClassFromString();
  local_e0 = pcVar3;
  if ((local_d8 == (cfstringStruct *)0x0) || (pcVar3 == (cfstringStruct *)0x0)) {
    local_e4 = 1;
  }
  else {
    pcVar2 = local_d8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_f0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar4;
    _memset(auStack_140,0,0x40);
    uVar1 = local_c8[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
    if (local_170 != 0) {
      lVar6 = *local_130;
      local_178 = 0;
      do {
        do {
          if (*local_130 - lVar6 != 0) {
            _objc_enumerationMutation(*local_130 - lVar6,uVar1);
          }
          puVar4 = local_f8;
          local_100 = *(undefined8 *)(local_138 + local_178 * 8);
          pcVar2 = local_e0;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0,PTR_s_setValue_forKey__0269d300,local_f8,&cf_buttonTitleList);
    pcVar2 = local_f0;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setValue_forKey__0269d300,puVar4,&cf_tag);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar3 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
    pcVar2 = local_f0;
    puVar4 = PTR_s_showInView__0269d310;
    if (((ulong)pcVar3 & 1) != 0) {
      IVar5 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_performSelector_withObject__026ca7c0,puVar4);
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_f0,0);
    local_e4 = 0;
  }
  _objc_storeStrong(local_c8);
  _objc_storeStrong(local_c8 + 1,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

