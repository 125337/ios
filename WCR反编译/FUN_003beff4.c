// FUN_003beff4 @ 003beff4

void FUN_003beff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_29 = param_4;
  FUN_003bf498(local_18);
  local_38 = 0;
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_m_workerThread_026a2f40);
  if ((uVar1 & 1) != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_m_workerThread_026a2f40);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_38 == 0) {
    _NSLog(&cf__wcr__grouping_skipBSTimelineexposereport_m_workerThreadstillnilexpose__d);
  }
  else if (DAT_028ca150 != (code *)0x0) {
    (*DAT_028ca150)(local_18,local_20,local_28,local_29 & 1);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

