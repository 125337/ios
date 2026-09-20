// FUN_008a3b18 @ 008a3b18

byte FUN_008a3b18(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  byte local_54;
  undefined *local_38;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_0088fb40();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  bVar1 = puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
  local_54 = 0;
  if (bVar1) {
    local_38 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_54 = (byte)puVar2;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  return local_54 & 1;
}

