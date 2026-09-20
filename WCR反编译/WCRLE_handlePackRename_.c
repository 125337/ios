// WCRLE_handlePackRename: @ 0043c4e0

/* Function Stack Size: 0x18 bytes */

void WCRLEPanelSheetProxy::WCRLE_handlePackRename_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ID IVar5;
  ulong local_78;
  ID local_58;
  byte local_49;
  ulong local_48;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_49 = 0;
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  if ((uVar3 & 1) == 0) {
    local_78 = 0;
  }
  else {
    local_78 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = local_78;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_78;
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  uVar3 = local_30;
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_30;
  local_30 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar5 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingPackRel_026a3a88);
  _objc_retainAutoreleasedReturnValue();
  local_58 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingPackRel__026a3a90,0);
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((uVar3 != 0) &&
     (IVar5 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
     IVar5 != 0)) {
    puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,
               PTR_s_renameRelativePath_toName_error__026a3a98,local_58,local_30,0);
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_header_026a3a80);
    _objc_retainAutoreleasedReturnValue();
    FUN_0043c2a4();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    pcVar1 = &cf___TT;
    if (((ulong)puVar4 & 1) == 0) {
      pcVar1 = &cf__TT1Y_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

