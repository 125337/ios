// isVersionSupported @ 01f54844

/* Function Stack Size: 0x10 bytes */

bool WCRefineVoiceAutoSpeed::isVersionSupported(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_026ce418;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_objectForInfoDictionaryKey__026a95f8,&cf_CFBundleShortVersionString);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if ((puVar1 == (undefined *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0),
     puVar1 == (undefined *)0x0)) {
    local_11 = 0;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_compareVersion_lessThanOrEqualTo_026c9400,local_38,&cf_8_0_54);
    local_11 = ((byte)IVar2 ^ 1) & 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

