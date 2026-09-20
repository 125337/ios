// FUN_01884acc @ 01884acc

byte FUN_01884acc(undefined8 param_1)

{
  ulong uVar1;
  byte local_4c;
  ulong local_48;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatAttachmentIDKey);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_isEqualToString__0269ccc8,_WCRChatAttachmentToolbarManageID);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatAttachmentKindKey);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar1;
    if (uVar1 == 0) {
      local_48 = _WCRChatAttachmentKindNative;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_48;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_isEqualToString__0269ccc8,_WCRChatAttachmentKindCustom);
    local_4c = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_isEqualToString__0269ccc8,_WCRChatAttachmentKindToolbar);
      local_4c = (byte)uVar1;
    }
    local_11 = local_4c & 1;
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_11 = 0;
    local_2c = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

