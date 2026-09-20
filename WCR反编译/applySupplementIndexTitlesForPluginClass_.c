// applySupplementIndexTitlesForPluginClass: @ 014c99f0

/* Function Stack Size: 0x18 bytes */

void WCRefineSearchManager::applySupplementIndexTitlesForPluginClass_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcRefineSearchSupplementKeywords_026af678,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_count_0269cfe0);
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_mergeExtractedPluginTitles_forPl_026af628,local_30,local_28);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

