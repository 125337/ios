// editableTextForContact: @ 0112c300

/* Function Stack Size: 0x18 bytes */

ID WCRefineQuickRemarkEditor::editableTextForContact_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_68;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  FUN_0112bf98(local_30,&cf_m_nsRemark);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  pcVar2 = local_38;
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar1 = local_30;
    FUN_0112c4ec(local_30,PTR_s_getContactDisplayName_0269d160);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar1;
    FUN_0112c624();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_38;
    local_38 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    pcVar2 = local_38;
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar2 = local_30;
      FUN_0112bf98(0,local_30,&cf_m_nsNickName);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_68 = &::cf___;
      }
      else {
        local_68 = local_50;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_68;
      local_3c = 1;
      _objc_storeStrong(&local_50,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      local_3c = 1;
    }
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

