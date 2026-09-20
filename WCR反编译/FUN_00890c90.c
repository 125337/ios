// FUN_00890c90 @ 00890c90

void FUN_00890c90(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
  if (puVar2 != (undefined *)0x0) {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_isEqualToString__0269ccc8,&cf_wxid_919w3ffmhln712);
    uVar1 = (uint)puVar2;
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      FUN_008904f8();
    }
    else {
      FUN_0089045c();
      if ((uVar1 & 1) == 0) {
        FUN_00890894();
      }
      else {
        FUN_008904f8();
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

