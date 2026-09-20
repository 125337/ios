// FUN_003ada84 @ 003ada84

void FUN_003ada84(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  if (((*(byte *)(param_1 + 0x20) & 1) != 0) && ((*(byte *)(param_1 + 0x21) & 1) == 0)) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = &DAT_028ca0d0;
  _objc_loadWeakRetained();
  local_28 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    FUN_00373608(puVar1);
    puVar2 = local_28;
    FUN_003adbe4();
    puVar1 = PTR_s_wcrGrouping_scheduleRefreshForTr_026a28a0;
    if (((ulong)puVar2 & 1) == 0) {
      FUN_0037395c(local_28,&cf_gateChanged);
    }
    else {
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,
                 PTR_s_wcrGrouping_scheduleRefreshForTr_026a28a0);
      if (((ulong)puVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1,&cf_gateChanged);
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

