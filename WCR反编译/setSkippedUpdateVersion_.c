// setSkippedUpdateVersion: @ 01d2be58

/* Function Stack Size: 0x18 bytes */

void WCRefineRootViewController::setSkippedUpdateVersion_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_removeObjectForKey__0269d700,&cf_WCRefineSkippedUpdateVersion);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_forKey__026ca9e8,local_28,&cf_WCRefineSkippedUpdateVersion);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_synchronize_026a0798);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

