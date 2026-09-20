// themeCardQuickDeliveryMenuAvailableForMessageContent:messageType: @ 00fbd4c4

/* Function Stack Size: 0x20 bytes */

bool WCRefineHelper::themeCardQuickDeliveryMenuAvailableForMessageContent_messageType_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_11 = 0;
  }
  else if (param_4 == 1) {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_firstThemeCardDeliveryAccountTok_026acff0,local_30);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = IVar4 != 0;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

