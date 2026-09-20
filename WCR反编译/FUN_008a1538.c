// FUN_008a1538 @ 008a1538

undefined1 * FUN_008a1538(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_0088fb40();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_18 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    puVar2 = local_18;
    FUN_008a12fc(0);
    if (((ulong)puVar2 & 1) == 0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      FUN_008a164c();
      if (((ulong)puVar2 & 1) == 0) {
        local_18 = (undefined1 *)0x0;
      }
    }
  }
  return local_18;
}

