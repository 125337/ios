// FUN_002a4688 @ 002a4688

void FUN_002a4688(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    (*DAT_028c9650)(param_1,param_2,param_3 & 1);
  }
  else {
    FUN_002b5ec8(&cf_viewWillDisappear_beforeOrig);
    (*DAT_028c9650)(param_1,param_2,param_3 & 1);
  }
  return;
}

