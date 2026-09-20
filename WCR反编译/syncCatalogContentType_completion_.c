// syncCatalogContentType:completion: @ 015964c8

/* Function Stack Size: 0x20 bytes */

void WCRefineVoiceCloneHelper::syncCatalogContentType_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcr_syncCatalogContentType_catal_026b0a98,local_28,&::cf___,&cf_cloud,
             local_30);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

