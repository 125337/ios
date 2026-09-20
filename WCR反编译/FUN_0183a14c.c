// FUN_0183a14c @ 0183a14c

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0183a14c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_026ce1d8;
  _objc_alloc_init();
  puVar1 = DAT_028e4288;
  DAT_028e4288 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e4288,PTR_s_setName__0269e0c8,
             &cf_com_qimiao_wcrefine_avatarFrameLibrary_staticImage);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e4288,PTR_s_setCountLimit__0269e0d0,0x50);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e4288,PTR_s_setTotalCostLimit__0269e0d8,0x3000000);
  return;
}

