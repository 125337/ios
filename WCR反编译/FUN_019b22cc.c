// FUN_019b22cc @ 019b22cc

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_019b22cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  _objc_alloc_init();
  puVar1 = DAT_028e43d0;
  DAT_028e43d0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e43d0,PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_ddHH_mm);
  return;
}

