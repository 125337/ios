// FUN_002a40e4 @ 002a40e4

void FUN_002a40e4(undefined8 param_1,undefined8 param_2)

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
    (*DAT_028c9628)(param_1,param_2);
  }
  else {
    FUN_002b5ec8(&cf_MiniTask_setupFakeSnapshot_beforeOrig);
    (*DAT_028c9628)(param_1,param_2);
    FUN_002b5ec8(&cf_MiniTask_setupFakeSnapshot_afterOrig);
  }
  return;
}

