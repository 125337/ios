// FUN_000c6aa4 @ 000c6aa4

void FUN_000c6aa4(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_48;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_3;
  local_18 = param_2;
  (*DAT_028c8240)(param_2,param_3);
  uVar3 = local_18;
  FUN_000cdecc();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar3;
  FUN_000cd8c4(uVar3);
  bVar2 = false;
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = true;
  if (((ulong)puVar5 & 1) == 0) {
    local_48 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    puVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = true;
    if (((ulong)puVar5 & 1) == 0) {
      bVar1 = 0.0 < param_1;
    }
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (bVar1) {
    FUN_000d288c(local_18);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

