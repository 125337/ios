// FUN_005d50ac @ 005d50ac

void FUN_005d50ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if (param_4 == 0) {
    FUN_005d3a78(local_18,local_20,local_28,1);
  }
  else if (param_4 == 1) {
    _WCRefineForwardMomentFromCellView(local_20,local_28,0);
  }
  else if (param_4 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_WCRefine_deleteMoment__026a5188,local_28);
  }
  else if (param_4 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_WCRefine_applyFakeEngagement__026a57c8,local_28);
  }
  else if (param_4 != 4) {
    if (param_4 == 5) {
      _WCRefineForwardMomentToChatFromCellView(0,local_20,local_28);
    }
    else if (param_4 == 6) {
      _WCRefineForwardMomentFromCellView(local_20,local_28,1);
    }
    else if ((param_4 == 7) &&
            (uVar1 = local_18,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_18,PTR_s_respondsToSelector__026ca818,
                       PTR_s_onClickLikeBtnOnFloatView_026a5be0), (uVar1 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onClickLikeBtnOnFloatView_026a5be0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

