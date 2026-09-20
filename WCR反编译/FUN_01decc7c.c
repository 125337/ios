// FUN_01decc7c @ 01decc7c

void FUN_01decc7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  FUN_01de6a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_30 = puVar1;
  _WCRefineSpecialTextStyle();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar4 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar4 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addEntriesFromDictionary__026a2e30,local_20);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,local_38,local_18);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,local_30,
             &cf_WCRefineSpecialTextStyles);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_28);
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterPostNotification();
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

