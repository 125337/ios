// _WCRefineProfileBgWarehouseTabFromConfig @ 01cf4f9c

long _WCRefineProfileBgWarehouseTabFromConfig(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_profileBgSourceMode_026a8d78);
  if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    local_18 = 2;
  }
  else {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_profileBgSourceMode_026a8d78);
    if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      local_18 = 3;
    }
    else {
      puVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_profileBgRegularMediaKind_026a8e10);
      local_18 = (long)(int)(uint)(puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1));
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

