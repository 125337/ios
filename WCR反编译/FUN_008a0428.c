// FUN_008a0428 @ 008a0428

void FUN_008a0428(void)

{
  undefined *puVar1;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setBool_forKey__026a9618,1,&cf_wcr_hotUpdateColdLoadDefer_pending);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_synchronize_026a0798);
  _objc_storeStrong(&local_18,0);
  return;
}

