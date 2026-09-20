// FUN_009475f4 @ 009475f4

void FUN_009475f4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_28;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (undefined *)0x0;
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar4 = PTR_WCRClipboardHistoryStore_026ce680;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_imageForItem__026aa848,local_20);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_28;
    local_28 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    if (local_28 == (undefined *)0x0) {
      puVar4 = PTR_WCRClipboardHistoryStore_026ce680;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_thumbForItem__026aaab0,local_20);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_28;
      local_28 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    FUN_009473cc();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_28;
    local_28 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  if (local_28 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
  }
  else {
    puVar5 = local_28;
    FUN_009525ec(0x407e000000000000);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar5;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

