// FUN_0162f56c @ 0162f56c

byte FUN_0162f56c(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
  }
  else {
    puVar2 = PTR_WCRefinePluginHubManager_026ce800;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginHubManager_026ce800,PTR_s_toggleSwitchForKey_storage__026b1ab0,
               local_20,local_28);
    if (param_3 != (byte *)0x0) {
      *param_3 = (byte)puVar2 & 1;
    }
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_11 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

