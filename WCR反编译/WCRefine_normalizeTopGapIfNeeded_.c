// WCRefine_normalizeTopGapIfNeeded: @ 004cb514

/* Function Stack Size: 0x18 bytes */

void WCRefineMainFrameSearchButton::WCRefine_normalizeTopGapIfNeeded_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  double in_d0;
  double in_d1;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (((local_28 != 0) &&
      (uVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDragging_0269ddf8),
      (uVar1 & 1) == 0)) &&
     (uVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDecelerating_0269e888), (uVar1 & 1) == 0
     )) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_adjustedContentInset_0269dcd0);
    in_d0 = -in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentOffset_0269dd18);
    uVar1 = local_28;
    if (in_d1 < in_d0 - 0.5) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentOffset_0269dd18);
      FUN_004cb68c();
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d1,in_d0,uVar1,PTR_s_setContentOffset_animated__0269ddd8,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

