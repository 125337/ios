// keywordAlertDeduplicationRuleChanged: @ 01b3fb0c

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertViewController::keywordAlertDeduplicationRuleChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  if ((lVar1 < 0) || (2 < lVar1)) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelectedSegmentIndex__0269e9e0,puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_applyKeywordAlertDeduplicationRu_026bf1a0,lVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

