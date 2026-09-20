// FUN_00151f80 @ 00151f80

void FUN_00151f80(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long local_30;
  undefined4 local_28;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 == 0) {
    local_28 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      local_28 = 1;
    }
    else {
      lVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      FUN_00148b88();
      _objc_retainAutoreleasedReturnValue();
      local_30 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      if (local_30 != 0) {
        FUN_00148f28(local_30);
      }
      _objc_storeStrong(&local_30,0);
      local_28 = 0;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

