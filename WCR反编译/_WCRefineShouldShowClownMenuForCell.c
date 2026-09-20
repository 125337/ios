// _WCRefineShouldShowClownMenuForCell @ 00f15294

byte _WCRefineShouldShowClownMenuForCell(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  byte local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  byte local_3a;
  byte local_39;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  _WCRefineShouldApplyClown();
  if (((((ulong)puVar1 & 1) == 0) || (local_20 == 0)) ||
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080),
     (uVar2 & 1) == 0)) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewModel_0269d080);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    if ((uVar2 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070),
       (uVar2 & 1) == 0)) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_messageWrap_0269d070);
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar2;
      _WCRefineClownMessageKey();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (uVar3 == 0) {
        local_11 = 0;
      }
      else {
        _WCRefineShouldModifyClownText();
        local_64 = 0;
        if ((uVar3 & 1) != 0) {
          uVar3 = local_38;
          _WCRefineClownMessageCanEditText();
          local_64 = (uint)uVar3;
        }
        local_39 = (byte)local_64 & 1;
        _WCRefineShouldModifyClownImage();
        local_68 = 0;
        if ((uVar3 & 1) != 0) {
          uVar3 = local_38;
          _WCRefineClownMessageCanReplaceImage();
          local_68 = (uint)uVar3;
        }
        local_3a = (byte)local_68 & 1;
        _WCRefineShouldModifyClownMessageTime();
        uVar4 = uVar3;
        _WCRefineShouldSortClownMessages();
        uVar2 = uVar4;
        _WCRefineShouldSwapClownYinYang();
        local_6c = 0;
        if ((uVar2 & 1) != 0) {
          uVar2 = local_38;
          _WCRefineClownMessageCanSwapYinYang();
          local_6c = (uint)uVar2;
        }
        _WCRefineShouldApplyTransferAmountModify();
        local_70 = 0;
        if ((uVar2 & 1) != 0) {
          uVar2 = local_38;
          _WCRefineIsTransferMessageWrap();
          local_70 = (byte)uVar2;
        }
        if (((local_64 & 1) == 0) && (_WCRefineShouldModifyClownText(), (uVar2 & 1) != 0)) {
          pcVar5 = "TextMessageCellView";
          _objc_getClass();
          uVar2 = 0;
          if ((pcVar5 != (char *)0x0) &&
             (uVar2 = local_20,
             (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar5),
             (uVar2 & 1) != 0)) {
            local_39 = 1;
          }
        }
        if (((local_68 & 1) == 0) && (_WCRefineShouldModifyClownImage(), (uVar2 & 1) != 0)) {
          pcVar5 = "ImageMessageCellView";
          _objc_getClass();
          if ((pcVar5 != (char *)0x0) &&
             (uVar2 = local_20,
             (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar5),
             (uVar2 & 1) != 0)) {
            local_3a = 1;
          }
        }
        local_11 = 1;
        if ((((local_39 == 0) && (local_11 = 1, local_3a == 0)) && (local_11 = 1, (uVar3 & 1) == 0))
           && ((local_11 = 1, (uVar4 & 1) == 0 && (local_11 = 1, (local_6c & 1) == 0)))) {
          local_11 = local_70 & 1;
        }
      }
      local_24 = 1;
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

