// FUN_0208bd94 @ 0208bd94

void FUN_0208bd94(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_28;
  byte local_19;
  undefined8 local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_19 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_19 & 1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_18;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setObject_forKey__026ca9e8,puVar2);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_28);
  FUN_02085900();
  _objc_storeStrong(&local_28,0);
  return;
}

