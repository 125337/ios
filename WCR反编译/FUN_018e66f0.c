// FUN_018e66f0 @ 018e66f0

byte FUN_018e66f0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_98;
  byte local_74;
  bool local_51;
  ulong local_50;
  ulong local_48;
  byte local_39;
  ulong local_38;
  byte local_2d;
  undefined4 local_2c;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemPinnedKey);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_39 = 0;
    local_74 = 0;
    if ((uVar3 & 1) != 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemPinnedKey);
      _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      local_38 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_74 = (byte)uVar3;
    }
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_2d = local_74 & 1;
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemTypeKey);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    local_51 = (uVar3 & 1) == 0;
    if (local_51) {
      local_98 = _WCRClipboardItemTypeText;
    }
    else {
      local_98 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemTypeKey);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_98;
    }
    local_51 = !local_51;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_98;
    if (local_51) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_28 == 1) {
      local_11 = local_2d & 1;
    }
    else if (local_28 == 2) {
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_isEqualToString__0269ccc8,_WCRClipboardItemTypeText);
      local_11 = (byte)uVar2 & 1;
    }
    else if (local_28 == 3) {
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_isEqualToString__0269ccc8,_WCRClipboardItemTypeImage);
      local_11 = (byte)uVar2 & 1;
    }
    else if (local_28 == 4) {
      puVar1 = PTR_WCRClipboardHistoryStore_026ce680;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_isWeChatMediaItem__026b8320,local_20);
      local_11 = (byte)puVar1 & 1;
    }
    else {
      local_11 = 1;
    }
    local_2c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

