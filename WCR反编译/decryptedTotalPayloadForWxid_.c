// decryptedTotalPayloadForWxid: @ 01512214

/* Function Stack Size: 0x18 bytes */

ID WCRefineSponsorSecureStore::decryptedTotalPayloadForWxid_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_98;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  ID local_48;
  undefined *local_40;
  undefined4 local_34;
  ID local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_resolvedWxid__026a7de8,local_30);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_30;
  local_30 = IVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    local_18 = (undefined *)0x0;
    local_34 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_30;
    local_40 = puVar3;
    FUN_01512568();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_40;
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKey__0269e048,IVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (puVar4 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
       puVar3 = local_50, puVar4 == (undefined *)0x0)) {
      local_18 = (undefined *)0x0;
      local_34 = 1;
    }
    else {
      IVar2 = local_30;
      FUN_01510c28(local_30,&cf_WCRefineUserTotalEnc2026);
      _objc_retainAutoreleasedReturnValue();
      FUN_01510e2c();
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      if (puVar4 == (undefined *)0x0) {
        local_18 = (undefined *)0x0;
        local_34 = 1;
      }
      else {
        puVar4 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_dataUsingEncoding__026a12e8,4);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_JSONObjectWithData_options_error_026ca480,puVar4,0,0);
        _objc_retainAutoreleasedReturnValue();
        local_60 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar3 = local_60;
        puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        if (((ulong)puVar3 & 1) == 0) {
          local_98 = (undefined *)0x0;
        }
        else {
          local_98 = local_60;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_98;
        local_34 = 1;
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

