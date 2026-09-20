// FUN_008a25a8 @ 008a25a8

bool FUN_008a25a8(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_0088fb40();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
}

