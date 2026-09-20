// FUN_01ef4aac @ 01ef4aac

void FUN_01ef4aac(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_18;
  local_20 = puVar1;
  FUN_01f06ca8();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_removeObjectForKey__0269d700,&cf_toDoCardWebActiveRepositoryItemId);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_setObject_forKeyedSubscript__0269d248,local_28,
               &cf_toDoCardWebActiveRepositoryItemId);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_20);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

