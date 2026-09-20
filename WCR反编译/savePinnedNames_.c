// savePinnedNames: @ 01f5ddec

/* Function Stack Size: 0x18 bytes */

void WCRVoiceBackgroundListViewController::savePinnedNames_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long local_40;
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
  if (local_28 == 0) {
    local_40 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_40 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setObject_forKey__026ca9e8,local_40,
             &cf_wcr_voiceCloneBackgroundPinnedNames);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

