// FUN_0054433c @ 0054433c

uint FUN_0054433c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint local_44;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_44 = 1;
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = local_18;
    FUN_0054255c();
    local_44 = 1;
    if ((uVar3 & 1) == 0) {
      local_44 = 1;
      FUN_0054447c();
    }
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_18,0);
  return local_44 & 1;
}

