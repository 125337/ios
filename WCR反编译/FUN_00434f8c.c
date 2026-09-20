// FUN_00434f8c @ 00434f8c

undefined4 FUN_00434f8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 local_44;
  
  (*DAT_028ca900)(param_1,param_2);
  local_44 = (undefined4)param_1;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (((ulong)puVar2 & 1) != 0) {
    local_44 = 9999;
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return local_44;
}

