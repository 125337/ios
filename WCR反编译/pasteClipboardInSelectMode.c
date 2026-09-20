// pasteClipboardInSelectMode @ 019a7e2c

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::pasteClipboardInSelectMode(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_WCRFileManagerState_026cf1c8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar3 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__4_g_NzzHQY6RbyR);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_exitSelectMode_026ba650);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pasteClipboardIntoCurrentDirecto_026ba6c8);
  }
  return;
}

