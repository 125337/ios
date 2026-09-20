// FUN_00eb0aac @ 00eb0aac

void FUN_00eb0aac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  DAT_028e2998 = 1;
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  DAT_028e29a0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,param_1)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setObject_forKey__026ca9e8,puVar2,&cf_WCRAutoDownloadUsedBytesTotal);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

