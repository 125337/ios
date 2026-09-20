// FUN_0017dd44 @ 0017dd44

void FUN_0017dd44(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **local_e8;
  undefined **local_d8;
  undefined **local_d0;
  undefined *local_60;
  undefined1 local_51;
  undefined *local_50 [3];
  undefined *local_38;
  ulong local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_0017e524();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_0017e524();
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  uVar3 = local_30;
  FUN_0017ec54();
  local_51 = (undefined1)uVar3;
  if ((uVar3 & 1) == 0) {
    puVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (puVar4 == (undefined *)0x0) {
      local_e8 = local_50;
    }
    else {
      local_e8 = &local_38;
    }
    local_d8 = local_e8;
  }
  else {
    puVar4 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_length_0269cca0);
    if (puVar4 == (undefined *)0x0) {
      local_d0 = &local_38;
    }
    else {
      local_d0 = local_50;
    }
    local_d8 = local_d0;
  }
  puVar4 = *local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
  if (puVar4 == (undefined *)0x0) {
    local_28 = (undefined *)0x0;
  }
  else {
    puVar4 = local_60;
    FUN_0017ee30();
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar4;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

