// FUN_00f7154c @ 00f7154c

void FUN_00f7154c(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineForwardToGroupHelper_026ce518,
             PTR_s_forwardMessageWraps_toUsernames__026ac9e0,*(undefined8 *)(param_1 + 0x20),
             local_20,param_3 & 1,*(undefined8 *)(param_1 + 0x28));
  _objc_storeStrong(&local_20,0);
  return;
}

