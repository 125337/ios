// FUN_0025e6b4 @ 0025e6b4

double FUN_0025e6b4(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_28;
  
  (*DAT_028c9418)(param_2,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_28 = param_1;
  if (((ulong)puVar2 & 1) != 0) {
    local_28 = param_1 + 68.0;
  }
  return local_28;
}

