// FUN_0163a4b0 @ 0163a4b0

void FUN_0163a4b0(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  uint local_80;
  undefined *local_68;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  byte local_31;
  ulong local_30;
  ulong local_28;
  
  local_51 = 0;
  local_30 = param_1;
  local_28 = param_1;
  FUN_0163a868();
  puVar2 = (undefined *)0x0;
  local_80 = 0;
  if ((param_1 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_80 = (uint)puVar2;
  }
  if ((local_51 & 1) != 0) {
    puVar2 = local_50;
    (*(code *)PTR__objc_release_02578630)();
  }
  local_31 = (byte)local_80 & 1;
  if ((local_80 & 1) != 0) {
    if ((DAT_028e3cc0 & 1) == 0) {
      return;
    }
    FUN_0163a884();
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar2;
    if (puVar2 != (undefined *)0x0) {
      FUN_0163a978();
      puVar2 = local_68;
      pcVar3 = &cf_showBall;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_respondsToSelector__026ca818,pcVar3);
      puVar1 = local_68;
      if (((ulong)puVar2 & 1) != 0) {
        pcVar3 = &cf_showBall;
        _NSSelectorFromString();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,pcVar3);
      }
    }
    _objc_storeStrong(&local_68,0);
    return;
  }
  FUN_01639cc4();
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar2;
  if (puVar2 != (undefined *)0x0) {
    pcVar3 = &cf_destroyBall;
    _NSSelectorFromString();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_respondsToSelector__026ca818,pcVar3);
    puVar1 = local_60;
    if (((ulong)puVar2 & 1) != 0) {
      pcVar3 = &cf_destroyBall;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,pcVar3);
      goto LAB_0163a710;
    }
  }
  puVar2 = local_60;
  if (local_60 != (undefined *)0x0) {
    pcVar3 = &cf_hideBall;
    _NSSelectorFromString();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_respondsToSelector__026ca818,pcVar3);
    puVar1 = local_60;
    if (((ulong)puVar2 & 1) != 0) {
      pcVar3 = &cf_hideBall;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,pcVar3);
    }
  }
LAB_0163a710:
  _objc_storeStrong(&local_60,0);
  return;
}

