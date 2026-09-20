// FUN_007981a8 @ 007981a8

void FUN_007981a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double local_40;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028ccb00)(param_1,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_homepageCornerEnabled_0269fc40);
  if ((((ulong)puVar1 & 1) != 0) &&
     (puVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainFrameCornerEnabled_026a1ff0),
     ((ulong)puVar1 & 1) != 0)) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_globalCornerRadius_026a2040);
    local_40 = (double)(long)puVar1;
    if (local_40 <= 0.0) {
      local_40 = 20.0;
    }
    if (40.0 < local_40) {
      local_40 = 40.0;
    }
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    FUN_0079ace8(local_18);
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    FUN_0079ab34(local_40,uVar2,uVar4,1);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

