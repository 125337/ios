// FUN_0110f04c @ 0110f04c

byte FUN_0110f04c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  byte local_11;
  
  _WCRSideloadShareFixIsNotificationServiceProcess();
  if ((param_1 & 1) == 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_20 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_20;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_11 = (byte)puVar1 & 1;
    _objc_storeStrong(&local_20,0);
  }
  else {
    local_11 = 0;
  }
  return local_11 & 1;
}

