// FUN_00780b20 @ 00780b20

void FUN_00780b20(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte local_58;
  undefined8 local_30;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  FUN_00788984();
  _objc_retainAutoreleasedReturnValue();
  local_58 = 0;
  local_30 = param_1;
  if ((local_21 & 1) != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = (byte)puVar2 ^ 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  FUN_0078a9a0(local_30,local_58 & 1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcrefine_feedbackTriggered__026a7ff0,0);
  _objc_storeStrong(&local_30,0);
  return;
}

