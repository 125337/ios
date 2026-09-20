// handleDanmakuBubbleTapped: @ 00ff9ba4

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertDanmakuPresenter::handleDanmakuBubbleTapped_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_58;
  ulong local_48;
  uint local_40;
  bool local_39;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRKeywordAlertDanmakuBubbleView_026cec60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRKeywordAlertDanmakuBubbleView_026cec60,PTR_s_class_0269cd60);
  uVar4 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_39 = false;
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    local_58 = 0;
  }
  else {
    local_58 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_58;
  }
  local_39 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_58;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((local_30 == 0) ||
     (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_dismissing_026ad680),
     (uVar2 & 1) != 0)) {
    local_40 = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_record_026ad878);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    bVar1 = local_48 != 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_openHistoryRecordFromDanmaku__026ad880,local_48);
    }
    local_40 = (uint)!bVar1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

