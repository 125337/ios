// FUN_016aa68c @ 016aa68c

/* WARNING: Removing unreachable block (ram,0x016aa7b8) */

void FUN_016aa68c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28 [3];
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_28[0] = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_prepare_026ca7d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28[0],PTR_s_impactOccurred_026ca6a0);
    _objc_storeStrong(local_28,0);
  }
  return;
}

