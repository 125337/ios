// suppressPasteboardRecaptureForFingerprint: @ 0095d95c

/* Function Stack Size: 0x18 bytes */

void WCRClipboardHistoryStore::suppressPasteboardRecaptureForFingerprint_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_2c = 1;
  }
  else {
    FUN_00950878();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if ((uVar1 == 0) ||
       (uVar1 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_28),
       (uVar1 & 1) == 0)) {
      local_2c = 1;
    }
    else {
      FUN_0095dacc(local_28);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLastCapturedText__026aab98,local_28);
      puVar2 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLastChangeCount__026aab38,puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_2c = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

