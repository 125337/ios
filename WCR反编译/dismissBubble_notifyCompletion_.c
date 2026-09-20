// dismissBubble:notifyCompletion: @ 00ff3298

/* Function Stack Size: 0x1c bytes */

void WCRefineKeywordAlertDanmakuPresenter::dismissBubble_notifyCompletion_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  ulong local_58;
  byte local_49;
  ID local_48;
  byte local_39;
  ID local_38;
  undefined4 local_30;
  byte local_29;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  if ((local_28 == 0) ||
     (uVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissing_026ad680),
     (uVar2 & 1) != 0)) {
    local_30 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDismissing__026ad688,1);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stopCarousel_026ad648);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeFromSuperview_026ca800);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_activeBubbles_026ad690);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_activeBubbles_026ad690);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_39 = 0;
    local_49 = 0;
    bVar1 = false;
    if (IVar4 == 0) {
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingRecords_026ad698);
      _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      local_38 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = false;
      if (IVar4 == 0) {
        IVar4 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_overlayWindow_026ad6a0);
        _objc_retainAutoreleasedReturnValue();
        local_49 = 1;
        bVar1 = IVar4 != 0;
        local_48 = IVar4;
      }
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (bVar1) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_overlayWindow_026ad6a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_overlayWindow_026ad6a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    if ((local_29 & 1) != 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_completionHandler_026ad6a8);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar2;
      if (uVar2 != 0) {
        uVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_trackIndex_026ad6b0);
        (**(code **)(uVar2 + 0x10))(uVar2,uVar5);
      }
      _objc_storeStrong(&local_58,0);
    }
    local_30 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

