// FUN_02184318 @ 02184318

byte FUN_02184318(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  undefined *local_38;
  undefined *local_30;
  byte local_21;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_21 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_objectForKey__0269e048,local_20);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  local_11 = local_21;
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_boolValue_026ca540);
    local_11 = (byte)puVar1;
  }
  local_11 = local_11 & 1;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

