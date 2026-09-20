// FUN_0023e4d0 @ 0023e4d0

void FUN_0023e4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*DAT_028c92e0)(local_18,local_20,local_28,local_30);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineDoNotDisturbSupport_026ce118,
             PTR_s_handleIncomingMessageWrap_sessio_026a0cd0,local_30,local_28);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

