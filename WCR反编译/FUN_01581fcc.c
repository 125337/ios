// FUN_01581fcc @ 01581fcc

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_01581fcc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_026ce1d8;
  _objc_alloc_init();
  puVar1 = DAT_028e3a78;
  DAT_028e3a78 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3a78,PTR_s_setCountLimit__0269e0d0,4);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3a78,PTR_s_setTotalCostLimit__0269e0d8,0x1800000);
  return;
}

