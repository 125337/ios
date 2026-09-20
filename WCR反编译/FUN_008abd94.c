// FUN_008abd94 @ 008abd94

void FUN_008abd94(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  int local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = local_18 == 0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0 || bVar1) {
    local_28 = 1;
  }
  else {
    uVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewModel_0269d080);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar4;
    FUN_008ab75c();
    if ((uVar4 & 1) == 0) {
      local_28 = 1;
    }
    else {
      uVar4 = local_30;
      FUN_008ab668(local_30,PTR_s_messageWrap_0269d070);
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar4;
      FUN_008ac500();
      if (((uVar4 & 1) != 0) &&
         (uVar4 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setMsgPlayed_026a99a8),
         (uVar4 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMsgPlayed_026a99a8);
      }
      uVar4 = local_18;
      FUN_008ac670(local_18,"m_unreadImageView",&cf_m_unreadImageView);
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_setHidden__026ca970,1);
      uVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,
                 PTR_s_setBShowingQuickTranTips__026a99a0);
      if ((uVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setBShowingQuickTranTips__026a99a0,0);
      }
      uVar4 = local_18;
      FUN_008ac670(local_18,"m_quickTransTipButton",&cf_m_quickTransTipButton);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_18;
      local_48 = uVar4;
      FUN_008ac670(local_18,"transTipButtonContainer",&cf_transTipButtonContainer);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setHidden__026ca970,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setHidden__026ca970,1);
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
      _objc_storeStrong(&local_38,0);
      local_28 = 0;
    }
    _objc_storeStrong(&local_30,0);
    if (local_28 == 0) {
      local_28 = 0;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

