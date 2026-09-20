// FUN_003d4cf0 @ 003d4cf0

undefined8 FUN_003d4cf0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_70;
  undefined *local_60;
  bool local_41;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_24;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_30;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_41 = ((ulong)puVar2 & 1) == 0;
    if (local_41) {
      local_60 = (undefined *)0x0;
    }
    else {
      local_60 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_60;
    }
    local_41 = !local_41;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_60;
    if (local_41) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    if (((ulong)puVar2 & 1) == 0) {
      local_70 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608);
      local_70 = param_1;
    }
    local_18 = local_70;
    local_24 = 1;
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

