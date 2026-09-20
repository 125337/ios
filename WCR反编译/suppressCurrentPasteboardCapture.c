// suppressCurrentPasteboardCapture @ 0095dc34

/* Function Stack Size: 0x10 bytes */

void WCRClipboardHistoryStore::suppressCurrentPasteboardCapture(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_00950878();
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if (param_1 != 0) {
    FUN_0095dacc(local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLastCapturedText__026aab98,local_28);
    puVar1 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLastChangeCount__026aab38,puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

