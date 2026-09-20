// FUN_0083b948 @ 0083b948

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0083b948(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_026ce1d8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSCache_026ce1d8,PTR_s_new_0269d288);
  puVar1 = DAT_028cd248;
  DAT_028cd248 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028cd248,PTR_s_setCountLimit__0269e0d0,0x200);
  return;
}

