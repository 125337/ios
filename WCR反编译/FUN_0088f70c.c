// FUN_0088f70c @ 0088f70c

void FUN_0088f70c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort local_2e;
  undefined8 local_18;
  
  FUN_0089bc98();
  _objc_retainAutoreleasedReturnValue();
  local_18 = param_1;
  FUN_0089bd38(param_1);
  if ((DAT_028cdd20 & 1) == 0) {
    uVar1 = local_18;
    FUN_0089beac(local_18,0x1ed);
    DAT_026f48f0 = (ushort)uVar1;
    DAT_028cdd20 = 1;
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_2e = DAT_026f48f0;
    if ((DAT_026f48f0 >> 7 & 1) == 0) {
      local_2e = 0x1ed;
    }
    FUN_0089c2e4(local_18,local_2e);
  }
  else {
    FUN_0089bfb0(local_18);
    FUN_0089c2e4(local_18,0x16d);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

