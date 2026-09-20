// presentRemarkEditorForItem: @ 018e8a28

/* Function Stack Size: 0x18 bytes */

void WCRefineClipboardHistoryListViewController::presentRemarkEditorForItem_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  cfstringStruct *local_90;
  cfstringStruct *local_70;
  char *local_58;
  char *local_50;
  bool local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_2c = 1;
  }
  else {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemIdKey);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_41 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_70 = &::cf___;
    }
    else {
      local_70 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemIdKey);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_70;
    }
    local_41 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_70;
    if ((local_41 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_2c = 1;
    }
    else {
      pcVar5 = "WCUIAlertView";
      _objc_getClass();
      local_50 = pcVar5;
      if (pcVar5 == (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Ylb_gNS_u);
        local_2c = 1;
      }
      else {
        _objc_setAssociatedObject(local_18,PTR_s_presentRemarkEditorForItem__026aaa88,local_38,3);
        pcVar5 = local_50;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_58 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_18,
                   PTR_s_handleRemarkInput__026aaa90);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x28)
        ;
        pcVar5 = local_58;
        pcVar3 = (cfstringStruct *)PTR_WCRClipboardHistoryStore_026ce680;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_noteForItem__026b8290,local_28);
        _objc_retainAutoreleasedReturnValue();
        local_90 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_90 = &::cf___;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_setTextFieldDefaultText__0269fd98,local_90);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
        _objc_storeStrong(&local_58,0);
        local_2c = 0;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

