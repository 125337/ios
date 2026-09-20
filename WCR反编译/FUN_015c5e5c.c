// FUN_015c5e5c @ 015c5e5c

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_015c5e5c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_WCRefineWechatThemeStore_026ce6d0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_new_0269d288);
  puVar2 = DAT_028e3b48;
  DAT_028e3b48 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSCache_026ce1d8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSCache_026ce1d8,PTR_s_new_0269d288);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3b48,PTR_s_setImageCache__026b0df8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSCache_026ce1d8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSCache_026ce1d8,PTR_s_new_0269d288);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3b48,PTR_s_setPreviewCache__026b0e00);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSCache_026ce1d8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSCache_026ce1d8,PTR_s_new_0269d288);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3b48,PTR_s_setBubbleKindCache__026b0e08);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e3b48,PTR_s_setLastBubbleDarkMode__026b0e10,0xffffffffffffffff);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3b48,PTR_s_reloadSelectedTheme_026b0e18);
  return;
}

