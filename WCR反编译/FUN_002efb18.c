// FUN_002efb18 @ 002efb18

void FUN_002efb18(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *local_30;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c99f0)(param_1,param_2,param_3 & 1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_gestureScreenshotEnabled_026a1ed8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_gestureScreenshotTripleTapEnable_026a1f48);
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrefine_setupTripleTapGesture_026a1e98);
    }
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_gestureScreenshotTwoFingerDouble_026a1f50);
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcrefine_setupTwoFingerLongPress_026a1ea8);
    }
  }
  _objc_storeStrong(&local_30,0);
  return;
}

