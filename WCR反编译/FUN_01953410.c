// FUN_01953410 @ 01953410

void FUN_01953410(long param_1)

{
  cfstringStruct *pcVar1;
  long lVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFakeLocationHistoryStore_026cf188,PTR_s_setFavorite_atIndex__026b9af8,
             (*(byte *)(param_1 + 0x30) ^ 1) & 1,*(undefined8 *)(param_1 + 0x28));
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  pcVar1 = &cf__Sm6e;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    pcVar1 = &cf__6e;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  return;
}

