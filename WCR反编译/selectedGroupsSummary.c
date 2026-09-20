// selectedGroupsSummary @ 01ba6938

/* Function Stack Size: 0x10 bytes */

ID WCRefineMessageBlockSettingsViewController::selectedGroupsSummary(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_messageBlockGroupRuleSelectedIDs_026c02b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_messageBlockGroupRule_026c02a0);
    local_18 = &cf__gb;
    if (puVar1 != (undefined *)0x0) {
      local_18 = &cf__gbhQO__;
    }
    (*(code *)PTR__objc_retain_02578638)();
  }
  else {
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar3;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

