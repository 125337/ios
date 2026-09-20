// FUN_0013ecc4 @ 0013ecc4

void FUN_0013ecc4(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  (*DAT_028c86d0)(param_1,param_2,param_3 & 1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    FUN_0014d3b0(param_1);
  }
  return;
}

