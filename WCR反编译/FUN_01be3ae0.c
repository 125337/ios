// FUN_01be3ae0 @ 01be3ae0

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_01be3ae0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_026ce1d8;
  _objc_alloc_init();
  puVar1 = DAT_028e45e0;
  DAT_028e45e0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e45e0,PTR_s_setTotalCostLimit__0269e0d8,0x2000000);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e45e0,PTR_s_setCountLimit__0269e0d0,0x50);
  return;
}

