// saveDrafts @ 010b44d8

/* Function Stack Size: 0x10 bytes */

bool WCRefineMomentsDraftManager::saveDrafts(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_48 [3];
  undefined *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_026ce750;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_drafts_026ae608);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_archivedDataWithRootObject__026a4fa0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setObject_forKey__026ca9e8,local_30,&cf_com_wcrefine_moments_drafts);
  (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_synchronize_026a0798);
  local_11 = 1;
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

