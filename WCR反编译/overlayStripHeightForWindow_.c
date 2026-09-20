// overlayStripHeightForWindow: @ 00ff50e8

/* Function Stack Size: 0x18 bytes */

double WCRefineKeywordAlertDanmakuPresenter::overlayStripHeightForWindow_
                 (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double local_a0;
  undefined *local_58;
  double local_50;
  double local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  dVar3 = 0.0;
  local_30 = 0.0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_safeAreaInsets_026ca828);
  local_30 = dVar3;
  if (dVar3 <= 0.0) {
    local_30 = 20.0;
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_50 = dVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_keywordAlertDanmakuMaxRows_026ad6d8);
  local_a0 = (double)(long)puVar1 * 44.0 + 6.0;
  puVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageDanmakuVerticalOffset_026ad738);
  puVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageDanmakuMaxRows_026ad6d0);
  dVar3 = (double)(long)puVar1 + (double)(long)puVar2 * 44.0;
  if (local_a0 < dVar3) {
    local_a0 = dVar3;
  }
  local_a0 = local_30 + local_a0;
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_28,0);
  return local_a0;
}

