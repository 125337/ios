// FUN_00f95fec @ 00f95fec

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00f95fec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_WCRefineHelper_026ce000;
  _objc_alloc_init();
  puVar1 = DAT_028e2ef8;
  DAT_028e2ef8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2ef8,PTR_s_setCheckFriendsEnd__026acd18,1);
  return;
}

