// _WCRefineApplyClownOverridesToMessage @ 00f1aafc

void _WCRefineApplyClownOverridesToMessage(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct **ppcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  int local_bc;
  long local_b0;
  cfstringStruct *local_98;
  cfstringStruct *local_78;
  bool local_69;
  long local_68;
  long local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  byte local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined4 local_1c;
  cfstringStruct *local_18;
  
  ppcVar2 = &local_18;
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(ppcVar2,param_1);
  if ((local_18 == (cfstringStruct *)0x0) ||
     (_WCRefineShouldApplyClown(), ((ulong)ppcVar2 & 1) == 0)) {
    local_1c = 1;
  }
  else {
    pcVar3 = local_18;
    _WCRefineClownTextOverrideForMessage();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_18;
    local_28 = pcVar3;
    _WCRefineClownQuotedTextOverrideForMessage();
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar4;
    if ((((DAT_028e2b99 & 1) != 0) &&
        (pcVar3 = local_18, _WCRefineClownMessageCanEditText(), ((ulong)pcVar3 & 1) != 0)) &&
       ((pcVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
        pcVar3 != (cfstringStruct *)0x0 ||
        (pcVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
        pcVar3 != (cfstringStruct *)0x0)))) {
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      local_41 = 0;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_78 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_plainTextFromMessageWrap__026a3628,local_18);
        _objc_retainAutoreleasedReturnValue();
        local_40 = local_78;
      }
      else {
        local_78 = local_28;
      }
      local_41 = pcVar3 == (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = local_78;
      if ((local_41 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
      if (local_38 == (cfstringStruct *)0x0) {
        local_98 = &cf___;
      }
      else {
        local_98 = local_38;
      }
      FUN_00f19188(local_18,local_98);
      _objc_storeStrong(&local_38,0);
    }
    pcVar3 = local_18;
    _WCRefineClownTimeOverrideForMessage();
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar3;
    if ((((DAT_028e2b9b & 1) != 0) || ((DAT_028e2b9c & 1) != 0)) &&
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_unsignedIntValue_0269db10),
       pcVar4 = local_18, puVar1 = PTR_s_setM_uiCreateTime__0269d428, (int)pcVar3 != 0)) {
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_unsignedIntValue_0269db10);
      FUN_00f19e90(pcVar4,puVar1,pcVar3);
    }
    if (((DAT_028e2b9e & 1) != 0) &&
       (pcVar3 = local_18, _WCRefineClownYinYangOverrideForMessage(), ((ulong)pcVar3 & 1) != 0)) {
      pcVar3 = local_18;
      _WCRefineClownMessageKey();
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_b0 = 0;
      }
      else {
        local_b0 = DAT_028e2b90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028e2b90,PTR_s_objectForKeyedSubscript__0269d098,local_58);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_b0;
      }
      local_69 = pcVar3 != (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_b0;
      if (local_69) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      if (local_60 == 0) {
        pcVar3 = local_18;
        FUN_00f1a400();
        local_bc = (int)pcVar3;
      }
      else {
        lVar5 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_boolValue_026ca540);
        local_bc = (int)lVar5;
      }
      FUN_00f1a5c4(local_18,local_bc != 0);
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

