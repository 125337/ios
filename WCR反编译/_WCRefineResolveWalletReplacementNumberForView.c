// _WCRefineResolveWalletReplacementNumberForView @ 00f130d4

byte _WCRefineResolveWalletReplacementNumberForView
               (undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 local_60;
  byte local_51;
  long local_50;
  ulong local_48;
  ulong local_40;
  byte local_35;
  undefined4 local_34;
  byte *local_30;
  undefined8 *local_28;
  ulong local_20;
  byte local_11;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (byte *)0x0) {
    *param_3 = 0;
  }
  local_30 = param_3;
  local_28 = param_2;
  if ((((local_20 == 0) || ((DAT_028e2b9f & 1) == 0)) ||
      (((DAT_028e2bb0 & 1) == 0 && ((DAT_028e2bb1 & 1) == 0)))) ||
     (_WCRefineCustomAmountFeatureAllowed(), ((ulong)puVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    _WCRefineViewIsInsideWalletEntryHeader();
    local_35 = (byte)uVar2;
    local_40 = 0;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      FUN_00f12d58(local_20,&local_40);
      if ((uVar2 & 1) == 0) {
        local_11 = 0;
        goto LAB_00f133fc;
      }
    }
    else {
      local_40 = 1;
    }
    uVar2 = local_20;
    if (local_40 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = uVar2;
      for (local_50 = 0; local_50 < 0x18 && local_48 != 0; local_50 = local_50 + 1) {
        uVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_accessibilityLabel_0269e1c8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        FUN_00f13de0();
        local_40 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (local_40 != 0) break;
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_48;
        local_48 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      _objc_storeStrong(&local_48,0);
    }
    local_51 = 0;
    local_60 = 0;
    if (local_40 == 1) {
      local_51 = DAT_028e2bb0 & 1;
      local_60 = DAT_028e2ba0;
    }
    else if (local_40 == 2) {
      local_51 = DAT_028e2bb1 & 1;
      local_60 = DAT_028e2ba8;
    }
    if (local_51 == 0) {
      local_11 = 0;
    }
    else {
      if (local_28 != (undefined8 *)0x0) {
        *local_28 = local_60;
      }
      if (local_30 != (byte *)0x0) {
        *local_30 = local_35 & 1;
      }
      local_11 = 1;
    }
  }
LAB_00f133fc:
  local_34 = 1;
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

