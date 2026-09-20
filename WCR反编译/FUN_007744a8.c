// FUN_007744a8 @ 007744a8

undefined4 FUN_007744a8(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 local_4c;
  undefined4 local_14;
  
  (*DAT_028cc988)(param_1,param_2);
  local_14 = (undefined4)param_1;
  if ((DAT_028cc998 & 1) == 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar1 = (uint)puVar3;
    local_4c = 1;
    if (((ulong)puVar3 & 1) != 0) {
      FUN_00774728();
      local_4c = uVar1 ^ 1;
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((local_4c & 1) == 0) {
      FUN_0077474c(param_1 & 0xffffffff,0);
    }
  }
  return local_14;
}

