// FUN_00077108 @ 00077108

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00077108(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_026ce1d8;
  _objc_alloc_init();
  puVar1 = DAT_028c7d78;
  DAT_028c7d78 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028c7d78,PTR_s_setName__0269e0c8,&cf_com_qimiao_wcrefine_avatarFrame_staticImage);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028c7d78,PTR_s_setCountLimit__0269e0d0,0x20);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028c7d78,PTR_s_setTotalCostLimit__0269e0d8,0x2000000);
  puVar2 = PTR__OBJC_CLASS___NSCache_026ce1d8;
  _objc_alloc_init();
  puVar1 = DAT_028c7d80;
  DAT_028c7d80 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028c7d80,PTR_s_setName__0269e0c8,&cf_com_qimiao_wcrefine_avatarFrame_emoticonData);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028c7d80,PTR_s_setCountLimit__0269e0d0,0x10);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028c7d80,PTR_s_setTotalCostLimit__0269e0d8,0x1000000);
  return;
}

