// FUN_0163a978 @ 0163a978

void FUN_0163a978(ulong param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **local_40;
  undefined **local_38;
  undefined **local_30;
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  FUN_01685794();
  _objc_retainAutoreleasedReturnValue();
  local_18 = param_1;
  if (param_1 == 0) {
    local_1c = 1;
  }
  else {
    FUN_016857a8();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_18;
    pcVar2 = &cf_applySnapshot_;
    local_28 = param_1;
    _NSSelectorFromString(&cf_applySnapshot_);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar2);
    uVar1 = local_18;
    if ((uVar3 & 1) != 0) {
      pcVar2 = &cf_applySnapshot_;
      _NSSelectorFromString(&cf_applySnapshot_);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,pcVar2,local_28);
    }
    uVar3 = local_18;
    pcVar2 = &cf_setOnActionSelected_;
    _NSSelectorFromString(&cf_setOnActionSelected_);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar3 & 1) != 0) {
      ppuVar4 = &PTR___NSConcreteGlobalBlock_02587b60;
      _objc_retainBlock();
      uVar3 = local_18;
      pcVar2 = &cf_setOnActionSelected_;
      local_30 = ppuVar4;
      _NSSelectorFromString();
      ppuVar4 = local_30;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,pcVar2);
      (*(code *)PTR__objc_release_02578630)(ppuVar4);
      _objc_storeStrong(&local_30,0);
    }
    uVar3 = local_18;
    pcVar2 = &cf_setOnGestureActionId_;
    _NSSelectorFromString(&cf_setOnGestureActionId_);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar3 & 1) != 0) {
      ppuVar4 = &PTR___NSConcreteGlobalBlock_02587b80;
      _objc_retainBlock();
      uVar3 = local_18;
      pcVar2 = &cf_setOnGestureActionId_;
      local_38 = ppuVar4;
      _NSSelectorFromString();
      ppuVar4 = local_38;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,pcVar2);
      (*(code *)PTR__objc_release_02578630)(ppuVar4);
      _objc_storeStrong(&local_38,0);
    }
    uVar3 = local_18;
    pcVar2 = &cf_setOnQuickChatOpenUsername_;
    _NSSelectorFromString(&cf_setOnQuickChatOpenUsername_);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar3 & 1) != 0) {
      ppuVar4 = &PTR___NSConcreteGlobalBlock_02587ba0;
      _objc_retainBlock();
      uVar3 = local_18;
      pcVar2 = &cf_setOnQuickChatOpenUsername_;
      local_40 = ppuVar4;
      _NSSelectorFromString();
      ppuVar4 = local_40;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,pcVar2);
      (*(code *)PTR__objc_release_02578630)(ppuVar4);
      _objc_storeStrong(&local_40,0);
    }
    FUN_01638e8c();
    uVar3 = local_18;
    pcVar2 = &cf_applySecureShield_;
    _NSSelectorFromString(&cf_applySecureShield_);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar3 & 1) != 0) {
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      uVar3 = local_18;
      pcVar2 = &cf_applySecureShield_;
      _NSSelectorFromString(&cf_applySecureShield_);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,pcVar2,(uint)puVar6 & 1);
    }
    FUN_01685990();
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

