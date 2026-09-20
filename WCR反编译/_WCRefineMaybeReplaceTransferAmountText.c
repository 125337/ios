// _WCRefineMaybeReplaceTransferAmountText @ 00f1c004

void _WCRefineMaybeReplaceTransferAmountText(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_90;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (((DAT_028e2bb2 & 1) == 0) ||
     (uVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    uVar1 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_2c = 1;
  }
  else {
    uVar2 = local_28;
    _WCRefineTextLooksLikeWalletBalanceAmount();
    uVar1 = local_28;
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_2c = 1;
    }
    else {
      _WCRefineShouldApplyTransferAmountModify();
      uVar1 = local_28;
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
        local_2c = 1;
      }
      else {
        uVar1 = local_20;
        _WCRefineViewIsInsideTransferMessageCell();
        local_18 = local_28;
        if ((uVar1 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_2c = 1;
        }
        else {
          uVar2 = local_20;
          _WCRefineMessageWrapForView();
          _objc_retainAutoreleasedReturnValue();
          local_38 = uVar2;
          _WCRefineIsTransferMessageWrap();
          uVar1 = local_28;
          if ((uVar2 & 1) == 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = uVar1;
            local_2c = 1;
          }
          else {
            uVar2 = local_38;
            _WCRefineTransferAmountOverrideForMessage();
            _objc_retainAutoreleasedReturnValue();
            local_40 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
            uVar1 = local_28;
            if (uVar2 == 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = uVar1;
              local_2c = 1;
            }
            else {
              _WCRefineApplyWalletBalanceReplacementToText(local_28,local_40);
              _objc_retainAutoreleasedReturnValue();
              local_48 = uVar1;
              if (uVar1 != 0) {
                _WCRefineNoteActiveTransferDisplayAmount(local_40);
              }
              if (local_48 == 0) {
                local_90 = local_28;
              }
              else {
                local_90 = local_48;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = local_90;
              local_2c = 1;
              _objc_storeStrong(&local_48,0);
            }
            _objc_storeStrong(&local_40,0);
          }
          _objc_storeStrong(&local_38,0);
        }
      }
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

