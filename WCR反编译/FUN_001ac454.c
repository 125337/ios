// FUN_001ac454 @ 001ac454

void FUN_001ac454(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_4);
  if (((local_18 != 0) &&
      (uVar1 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isDragging_0269ddf8),
      (uVar1 & 1) == 0)) &&
     (uVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isDecelerating_0269e888), (uVar1 & 1) == 0
     )) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_adjustedContentInset_0269dcd0);
    param_1 = -param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contentOffset_0269dd18);
    uVar1 = local_18;
    if (param_3 < param_1 - 0.5) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contentOffset_0269dd18);
      FUN_001ac874();
      (*(code *)PTR__objc_msgSend_02578628)
                (param_3,param_1,uVar1,PTR_s_setContentOffset_animated__0269ddd8,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

