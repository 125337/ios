// FUN_010ed0f4 @ 010ed0f4

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_010ed0f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_026ce1d8;
  _objc_alloc_init();
  puVar1 = DAT_028e3430;
  DAT_028e3430 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e3430,PTR_s_setName__0269e0c8,&cf_com_qimiao_wcrefine_nameplate_emoticonData);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3430,PTR_s_setCountLimit__0269e0d0,0x18);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3430,PTR_s_setTotalCostLimit__0269e0d8,0x1800000);
  return;
}

