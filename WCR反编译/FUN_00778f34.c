// FUN_00778f34 @ 00778f34

void FUN_00778f34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  double local_50;
  double local_28;
  undefined *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  FUN_0077906c(local_18);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_mainFrameSwipeMenuCornerRadius_026a7fa0);
  uVar1 = local_18;
  local_28 = (double)(long)puVar2;
  if (local_28 <= 0.0) {
    local_28 = 20.0;
  }
  if (40.0 <= local_28) {
    local_50 = 40.0;
  }
  else {
    local_50 = local_28;
  }
  puVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mainFrameSwipeMenuCornerEnabled_026a7fa8);
  FUN_00779464(local_50,uVar1,puVar2);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

