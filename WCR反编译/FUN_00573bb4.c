// FUN_00573bb4 @ 00573bb4

bool FUN_00573bb4(ulong param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  
  FUN_0057348c();
  bVar1 = false;
  if ((param_1 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return bVar1;
}

