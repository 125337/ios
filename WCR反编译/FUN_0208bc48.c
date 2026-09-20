// FUN_0208bc48 @ 0208bc48

byte FUN_0208bc48(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_38;
  undefined *local_30;
  byte local_21;
  undefined8 local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_21 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  local_30 = puVar1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_11 = local_21;
  if (local_38 != (undefined *)0x0) {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_boolValue_026ca540);
    local_11 = (byte)puVar1;
  }
  local_11 = local_11 & 1;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

