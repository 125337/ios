// resolvedPreviewForItem: @ 00940e5c

/* Function Stack Size: 0x18 bytes */

ID WCRClipboardCapture::resolvedPreviewForItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_68;
  int local_5c;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_34 = 1;
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemSessionKey);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_009407ac();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_30;
    FUN_0094091c(local_30,_WCRClipboardItemLocalIDKey);
    pcVar3 = local_30;
    local_48 = pcVar2;
    FUN_0094091c(local_30,_WCRClipboardItemSvrIDKey);
    pcVar2 = local_40;
    local_50 = pcVar3;
    FUN_00940a00(local_40,pcVar3,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &::cf___;
      local_34 = 1;
    }
    else {
      FUN_0093e2b0(pcVar2,&cf_m_uiMessageType);
      local_5c = (int)pcVar2;
      if (local_5c == 0) {
        pcVar2 = local_30;
        FUN_0094091c(local_30,_WCRClipboardItemMsgTypeKey);
        local_5c = (int)pcVar2;
      }
      local_68 = (cfstringStruct *)0x0;
      if (local_5c == 1) {
        pcVar3 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_plainTextFromMessageWrap__026a3628,local_58);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_68;
        local_68 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      else if (local_5c == 0x31) {
        pcVar3 = local_58;
        FUN_0093f6e4(0,local_58,&::cf___);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_68;
        local_68 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      pcVar2 = local_58;
      FUN_0093ee60(local_58,local_40,local_5c,local_68);
      _objc_retainAutoreleasedReturnValue();
      local_34 = 1;
      local_18 = pcVar2;
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

