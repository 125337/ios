// sendFileAtPath:toFileHelperWithDisplayName: @ 015aab24

/* Function Stack Size: 0x20 bytes */

bool WCRefineVoicePackSender::sendFileAtPath_toFileHelperWithDisplayName_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_wcr_sendFileAtPathToFileHelper_d_026acf80,local_28,
             local_30);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return (bool)puVar1;
}

