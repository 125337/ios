// FUN_008a0554 @ 008a0554

void FUN_008a0554(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_removeObjectForKey__0269d700,&cf_wcr_hotUpdateColdLoadDefer_pending);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_removeObjectForKey__0269d700,&cf_wcr_hotUpdateColdLoadDefer_crashCount);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_synchronize_026a0798);
  _objc_storeStrong(&local_28,0);
  return;
}

