// FUN_01be3b70 @ 01be3b70

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_01be3b70(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  _objc_alloc_init();
  puVar1 = DAT_028e45f0;
  DAT_028e45f0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e45f0,PTR_s_setName__0269e0c8,&cf_com_qimiao_wcrefine_moments_thumbnails);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e45f0,PTR_s_setMaxConcurrentOperationCount__026aaf08,2);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e45f0,PTR_s_setQualityOfService__026af3c0,0x11);
  return;
}

