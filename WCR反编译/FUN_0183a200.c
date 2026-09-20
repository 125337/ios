// FUN_0183a200 @ 0183a200

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0183a200(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_026ce1d8;
  _objc_alloc_init();
  puVar1 = DAT_028e4298;
  DAT_028e4298 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e4298,PTR_s_setName__0269e0c8,
             &cf_com_qimiao_wcrefine_avatarFrameLibrary_emoticonData);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e4298,PTR_s_setCountLimit__0269e0d0,0x20);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e4298,PTR_s_setTotalCostLimit__0269e0d8,0x2000000);
  return;
}

