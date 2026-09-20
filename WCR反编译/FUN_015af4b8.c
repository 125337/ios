// FUN_015af4b8 @ 015af4b8

void FUN_015af4b8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_wcr_backgroundWorkGeneration_026b0c10);
  if (lVar3 == lVar1) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isUIAccessActive_026b0c08);
    if (((uVar2 & 1) != 0) && ((DAT_028e3b0a & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_wcr_flushDurationCacheNowIfNeede_026b0be0);
    }
  }
  return;
}

