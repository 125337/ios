// hangupIncomingCallFromHintView:username: @ 00f26084

/* Function Stack Size: 0x20 bytes */

void WCRefineDoNotDisturbSupport::hangupIncomingCallFromHintView_username_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if (local_28 != 0) {
    _objc_storeWeak(&DAT_028e2c80,local_28);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_hangupIncomingCallAndReplyIfNeed_026a0cf8,local_30);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

