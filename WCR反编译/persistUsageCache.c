// persistUsageCache @ 00eb0ed0

/* Function Stack Size: 0x10 bytes */

void WCRefineAutoDownloadQuotaHelper::persistUsageCache(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_00ead8c0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_trimUsageCacheIfNeeded__026ab1c8,local_28);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setObject_forKey__026ca9e8,IVar2,&cf_WCRAutoDownloadUsageByKey);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_28,0);
  return;
}

