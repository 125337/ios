// FUN_01fcb740 @ 01fcb740

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_01fcb740(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  _objc_alloc_init();
  puVar1 = DAT_028e4930;
  DAT_028e4930 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e4930,PTR_s_setPluginVer__026ca2b0,&cf_2_1_6);
  return;
}

