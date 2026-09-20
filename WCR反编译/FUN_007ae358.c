// FUN_007ae358 @ 007ae358

undefined8 FUN_007ae358(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar1 = 2;
  if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    uVar1 = 1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return uVar1;
}

