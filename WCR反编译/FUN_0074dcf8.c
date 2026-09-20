// FUN_0074dcf8 @ 0074dcf8

undefined1 * FUN_0074dcf8(void)

{
  undefined *puVar1;
  undefined1 *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)();
  if (local_18 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    FUN_0074998c();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_sync();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_18 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  return local_18;
}

