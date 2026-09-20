// FUN_000b27e0 @ 000b27e0

bool FUN_000b27e0(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  bool local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    local_11 = param_1 == 1;
  }
  else if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    local_11 = param_1 == 2;
  }
  else if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
    local_11 = param_1 == 1 || param_1 == 2;
  }
  else {
    local_11 = false;
  }
  return local_11;
}

