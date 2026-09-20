// FUN_0043487c @ 0043487c

undefined8 FUN_0043487c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint local_4c;
  undefined8 local_18;
  
  local_18 = param_1;
  (*DAT_028ca8c0)(param_1,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_4c = 0;
  if (((ulong)puVar2 & 1) != 0) {
    FUN_00437a28();
    local_4c = (uint)param_1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_4c & 1) != 0) {
    local_18 = 999;
  }
  return local_18;
}

