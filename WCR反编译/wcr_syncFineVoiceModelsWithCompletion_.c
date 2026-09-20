// wcr_syncFineVoiceModelsWithCompletion: @ 015a7ba4

/* Function Stack Size: 0x18 bytes */

void WCRefineVoiceCloneHelper::wcr_syncFineVoiceModelsWithCompletion_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_syncCatalogContentType_completio_026b0b88,&cf_all,local_28);
  _objc_storeStrong(&local_28,0);
  return;
}

