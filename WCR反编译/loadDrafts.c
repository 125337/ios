// loadDrafts @ 010b410c

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsDraftManager::loadDrafts(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_50 [3];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_objectForKey__0269e048,&cf_com_wcrefine_moments_drafts);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDrafts__026ae620);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748,PTR_s_unarchiveObjectWithData__026a4f98,
               puVar1);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_sortedArrayUsingComparator__0269fae8,
               &PTR___NSConcreteGlobalBlock_025851a8);
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_mutableCopy_0269d8a0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDrafts__026ae620,puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cleanUpOrphanedVideos_026ae628);
    _objc_storeStrong(local_50);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

