// FUN_014b2ae4 @ 014b2ae4

void FUN_014b2ae4(void)

{
  undefined *puVar1;
  cfstringStruct *local_20;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = &cf_com_flex_FLEXNetworkObserver_enableOnLaunch;
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_boolForKey__0269f3d8,&cf_com_flex_FLEXNetworkObserver_enableOnLaunch);
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBool_forKey__026a9618,0,local_20);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

