// FUN_004e2550 @ 004e2550

undefined * FUN_004e2550(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *local_58;
  undefined *local_38 [3];
  byte local_19;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_004e2694();
  local_19 = (byte)uVar1;
  local_58 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = local_58;
  if ((local_19 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageDoubleTapOtherAction_026a4338);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageDoubleTapMyAction_026a4330);
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_18,0);
  return local_58;
}

