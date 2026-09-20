// presentActionForHistoryItem: @ 0184ff14

/* Function Stack Size: 0x18 bytes */

void WCRefineBatchDeleteFriendHistoryViewController::presentActionForHistoryItem_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  char *pcVar6;
  ID IVar7;
  cfstringStruct *local_e0;
  cfstringStruct *local_c0;
  cfstringStruct *local_b0;
  cfstringStruct *local_98;
  char *local_88;
  undefined4 local_7c;
  char *local_78;
  cfstringStruct *local_70;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  bool local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingHistoryItem__026b68f0,local_38);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_displayName);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_49 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_98 = &::cf___;
  }
  else {
    local_98 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_displayName);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_98;
  }
  local_49 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_98;
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_userName);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_61 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_b0 = &::cf___;
  }
  else {
    local_b0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_userName);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_b0;
  }
  local_61 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_b0;
  if ((local_61 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_c0 = local_58;
  }
  else {
    local_c0 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_c0;
  pcVar5 = "WCUIActionSheet";
  _objc_getClass();
  local_78 = pcVar5;
  if (pcVar5 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_openProfileForHistoryItem_trigge_026b68f8,local_38,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingHistoryItem__026b68f0,0);
    local_7c = 1;
  }
  else {
    _objc_alloc();
    pcVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_e0 = &cf__Rd_YS;
    }
    else {
      local_e0 = local_70;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_initWithTitle__0269d2f8,local_e0);
    local_88 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_addBtnTitle_target_sel__0269d278);
    if (((ulong)pcVar5 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_addBtnTitle_target_sel__0269d278,&cf_gwDe,local_28,
                 PTR_s_handleOpenProfileAction_026b6900);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_addBtnTitle_target_sel__0269d278,&cf_gwDev__RV,local_28,
                 PTR_s_handleOpenProfileAndAddFriendAct_026b6908);
    }
    pcVar5 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_respondsToSelector__026ca818,
               PTR_s_addCancelBtnTitle_target_sel__0269d268);
    if (((ulong)pcVar5 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28,
                 PTR_s_cancelHistoryAction_026b6910);
    }
    pcVar6 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
    pcVar5 = local_88;
    puVar3 = PTR_s_showInView__0269d310;
    if (((ulong)pcVar6 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_openProfileForHistoryItem_trigge_026b68f8,local_38,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingHistoryItem__026b68f0,0);
    }
    else {
      IVar7 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,puVar3);
      (*(code *)PTR__objc_release_02578630)(IVar7);
    }
    _objc_storeStrong(&local_88,0);
    local_7c = 0;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

