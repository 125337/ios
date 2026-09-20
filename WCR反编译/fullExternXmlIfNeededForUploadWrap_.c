// fullExternXmlIfNeededForUploadWrap: @ 00f3a588

/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonToolsHelper::fullExternXmlIfNeededForUploadWrap_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_48;
  ID local_40;
  undefined4 local_34;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_shouldUseFullExternXmlForMessage_026ac178,local_30);
  if ((IVar1 & 1) == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_stringValueFromObject_key__026abfe0,local_30,&cf_m_nsContent);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
    if (IVar1 == 0) {
      local_48 = 0;
    }
    else {
      local_48 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_48;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

