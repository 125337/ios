// videoDurationSeconds @ 009bafe4

/* Function Stack Size: 0x10 bytes */

long_long WCRefineAIStore::videoDurationSeconds(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_objectForKey__0269e048,&cf_WCRAIVideoDurationSecondsV1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (puVar1 == (undefined *)0x0) {
    local_18 = 5;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_integerForKey__026a9600,&cf_WCRAIVideoDurationSecondsV1);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_clampedVideoDurationSeconds__026aad70,puVar1);
    local_18 = IVar2;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

