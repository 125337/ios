// saveCardField @ 018101c8

/* Function Stack Size: 0x10 bytes */

void WCRefineAutoParseLinkSettingsViewController::saveCardField(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ID IVar5;
  cfstringStruct *local_58;
  undefined *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cardFieldAlert_026b5ef8);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_58 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_58 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_58;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar1 = local_28;
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_28;
  local_28 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_18;
  local_30 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cardFieldEditing_026b5f10);
  if (IVar5 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setAutoParseLinkCardTitle__026b5f18,local_28);
  }
  else {
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cardFieldEditing_026b5f10);
    if (IVar5 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_setAutoParseLinkCardDesc__026b5f20,local_28);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_setAutoParseLinkCardCoverURL__026b5f28,local_28);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCardFieldAlert__026b5ef0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

