// FUN_002ae49c @ 002ae49c

bool FUN_002ae49c(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_floatingTabBarExtraButtonEnabled_0269e4c0);
  bVar1 = false;
  if (((ulong)puVar2 & 1) != 0) {
    puVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_floatingTabBarExtraButtonPositio_0269e4c8);
    bVar1 = puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

