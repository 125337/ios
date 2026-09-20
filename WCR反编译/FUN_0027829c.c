// FUN_0027829c @ 0027829c

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0027829c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_028c9588 == (undefined *)0x0) {
    puVar2 = PTR_WCRefineProgressToast_026ce468;
    _objc_alloc_init();
    puVar1 = DAT_028c9588;
    DAT_028c9588 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c9588,PTR_s_showWithTotalCount__026a1630,1);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),DAT_028c9588,PTR_s_updateProgress__026a1638);
  return;
}

