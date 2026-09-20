// FUN_020c0ad8 @ 020c0ad8

void FUN_020c0ad8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  cfstringStruct *local_40;
  undefined *local_28;
  cfstringStruct *local_20;
  undefined8 local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  if (local_20 == (cfstringStruct *)0x0) {
    local_40 = &cf___;
  }
  else {
    local_40 = local_20;
  }
  uVar2 = local_18;
  local_28 = puVar1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setObject_forKey__026ca9e8,local_40);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_28);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

