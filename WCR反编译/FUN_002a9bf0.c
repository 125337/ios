// FUN_002a9bf0 @ 002a9bf0

void FUN_002a9bf0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 local_54;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_54 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_54 = (uint)puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_54 & 1) == 0) {
    (*DAT_028c9768)(param_1,param_2,param_3 & 1);
  }
  else {
    (*DAT_028c9768)(param_1,param_2,0);
  }
  return;
}

