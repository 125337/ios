// FUN_00774098 @ 00774098

void FUN_00774098(void)

{
  char *pcVar1;
  
  pcVar1 = "WCDeviceStepObject";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_m7StepCount_026a7ea0,FUN_00774188,&DAT_028cc970);
  _MSHookMessageEx(pcVar1,PTR_s_hkStepCount_026a7ea8,FUN_007742c8,&DAT_028cc978);
  pcVar1 = "WCDeviceBrandMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_onGotDeviceStepObject__026a7eb0,FUN_00774408,&DAT_028cc980);
  pcVar1 = "UploadDeviceStepReq";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_m7StepCount_026a7ea0,FUN_007744a8,&DAT_028cc988);
  _MSHookMessageEx(pcVar1,PTR_s_hkStepCount_026a7ea8,FUN_007745e8,&DAT_028cc990);
  return;
}

