// FUN_003e0090 @ 003e0090

undefined * FUN_003e0090(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *local_60;
  undefined *local_58;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (DAT_028ca328 == (code *)0x0) {
    local_58 = (undefined *)0x0;
  }
  else {
    local_58 = local_18;
    (*DAT_028ca328)(local_18,param_2);
  }
  if ((long)local_60 < 1) {
    local_60 = local_58;
  }
  _objc_storeStrong(&local_18,0);
  return local_60;
}

