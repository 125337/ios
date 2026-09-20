// presentRenameForItem: @ 01e3cf5c

/* Function Stack Size: 0x18 bytes */

void WCRefineSvgColorSchemeHistoryViewController::presentRenameForItem_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  ID IVar6;
  char *pcVar7;
  cfstringStruct *local_88;
  cfstringStruct *local_68;
  char *local_58;
  bool local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  bool local_31;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_31 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_68 = (cfstringStruct *)0x0;
  }
  else {
    local_68 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_68;
  }
  local_31 = !bVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingRenameItemID__026b7bc0,local_68);
  if ((local_31 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar5 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingRenameItemID_026b7be8);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  if (IVar6 == 0) {
    local_38 = 1;
  }
  else {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_name)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_49 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_88 = &::cf___;
    }
    else {
      local_88 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_88;
    }
    local_49 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_88;
    if ((local_49 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar7 = "WCUIAlertView";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x28);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTextFieldDefaultText__0269fd98,local_40)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_alertCancel_026b2910);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_18,
               PTR_s_confirmRenameHistoryItem__026b7bf0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_58);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

