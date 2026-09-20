// FUN_004d7b10 @ 004d7b10

void FUN_004d7b10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  puVar1 = PTR_WCRefineMessageBlockSupport_026ce0f8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageBlockSupport_026ce0f8,
             PTR_s_senderIDForMessageWrap_sessionID_026a41f8,local_18,local_20);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

