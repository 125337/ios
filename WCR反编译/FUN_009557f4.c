// FUN_009557f4 @ 009557f4

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_009557f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_WCRClipboardHistoryStore_026ce680;
  _objc_alloc_init();
  puVar2 = DAT_028e2798;
  DAT_028e2798 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2798,PTR_s_setLastChangeCount__026aab38,puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

