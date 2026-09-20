// _WCRefineResolveWalletBalanceSlotForView @ 00f13b30

ulong _WCRefineResolveWalletBalanceSlotForView(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_48;
  long local_40;
  ulong local_38;
  ulong local_30;
  int local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (uVar1 = local_20, _WCRefineViewIsInWalletAmountContext(), (uVar1 & 1) == 0)) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    _WCRefineViewIsInsideWalletEntryHeader();
    if ((uVar1 & 1) == 0) {
      uVar2 = local_20;
      FUN_00f13d84();
      uVar1 = local_20;
      local_30 = uVar2;
      if (uVar2 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = uVar1;
        for (local_40 = 0; local_40 < 0x18 && local_38 != 0; local_40 = local_40 + 1) {
          uVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_accessibilityLabel_0269e1c8);
          _objc_retainAutoreleasedReturnValue();
          local_48 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
          if (uVar1 == 0) {
LAB_00f13cdc:
            uVar2 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = local_38;
            local_38 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar1);
            local_24 = 0;
          }
          else {
            uVar2 = local_48;
            FUN_00f13de0(uVar1);
            if (uVar2 == 0) {
              uVar1 = local_38;
              _WCRefineViewIsInsideWalletEntryHeader();
              if (((uVar1 & 1) == 0) || (uVar1 = local_48, FUN_00f13f78(), uVar1 == 0))
              goto LAB_00f13cdc;
              local_24 = 1;
              local_18 = uVar1;
            }
            else {
              local_24 = 1;
              local_18 = uVar2;
            }
          }
          _objc_storeStrong(&local_48,0);
          if (local_24 != 0) goto LAB_00f13d58;
        }
        local_18 = 0;
        local_24 = 1;
LAB_00f13d58:
        _objc_storeStrong(&local_38,0);
      }
      else {
        local_24 = 1;
        local_18 = uVar2;
      }
    }
    else {
      local_18 = 1;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

