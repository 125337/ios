// FUN_00796f10 @ 00796f10

void FUN_00796f10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028ccad8)(param_1,param_2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_homepageCornerEnabled_0269fc40);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainFrameCornerEnabled_026a1ff0);
    uVar1 = local_18;
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      FUN_007993a0(uVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

