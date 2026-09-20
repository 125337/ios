// sendItem:toUserName: @ 0093fdc8

/* Function Stack Size: 0x20 bytes */

bool WCRClipboardCapture::sendItem_toUserName_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_e8;
  cfstringStruct *local_d0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  byte local_82;
  bool local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined4 local_4c;
  long local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  pcVar3 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)pcVar3 & 1) == 0) ||
     (lVar4 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     lVar4 == 0)) {
    local_21 = 0;
    local_4c = 1;
  }
  else {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemTypeKey);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_61 = false;
    bVar1 = ((ulong)pcVar5 & 1) == 0;
    if (bVar1) {
      local_d0 = &::cf___;
    }
    else {
      local_d0 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemTypeKey);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_d0;
    }
    local_61 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_d0;
    if ((local_61 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_isEqualToString__0269ccc8,_WCRClipboardItemTypeFile);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_isEqualToString__0269ccc8,_WCRClipboardItemTypeMessage);
      if (((ulong)pcVar3 & 1) == 0) {
        local_21 = 0;
        local_4c = 1;
      }
      else {
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemSessionKey);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar3;
        FUN_009407ac();
        _objc_retainAutoreleasedReturnValue();
        local_90 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_40;
        FUN_0094091c(local_40,_WCRClipboardItemLocalIDKey);
        pcVar5 = local_40;
        local_98 = pcVar3;
        FUN_0094091c(local_40,_WCRClipboardItemSvrIDKey);
        pcVar3 = local_90;
        local_a0 = pcVar5;
        FUN_00940a00(local_90,pcVar5,local_98);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Smo__RdellS);
          local_21 = 0;
        }
        else {
          FUN_00940cd0(pcVar3,local_48);
          if (((ulong)pcVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elS_g_RS_MRO)
            ;
          }
          local_21 = (byte)pcVar3 & 1;
        }
        local_4c = 1;
        _objc_storeStrong(&local_a8);
        _objc_storeStrong(&local_90,0);
      }
    }
    else {
      puVar2 = PTR_WCRClipboardHistoryStore_026ce680;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_absoluteFilePathForItem__026aa7c8,
                 local_40);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_40;
      local_70 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemFileNameKey);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar5 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_81 = false;
      bVar1 = ((ulong)pcVar5 & 1) == 0;
      if (bVar1) {
        local_e8 = &::cf___;
      }
      else {
        local_e8 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemFileNameKey);
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_e8;
      }
      local_81 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_e8;
      if ((local_81 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      if (puVar2 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eN_NX__WelS);
        local_21 = 0;
      }
      else {
        puVar2 = local_70;
        FUN_00940410(local_70,local_78,local_48);
        local_82 = (byte)puVar2;
        if (((ulong)puVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eNS1Y_);
        }
        local_21 = local_82 & 1;
      }
      local_4c = 1;
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

