// FUN_01e8f6d0 @ 01e8f6d0

void FUN_01e8f6d0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double local_88;
  long local_38;
  long local_30;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_2;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_4);
  lVar1 = param_2 + 0x20;
  local_30 = param_2;
  _objc_loadWeakRetained();
  local_38 = lVar1;
  if ((lVar1 != 0) && (local_28 == 0)) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    if ((uVar2 & 1) == 0) {
      local_88 = 0.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_doubleValue_026ca608);
      local_88 = param_1;
    }
    if (0.0 <= local_88) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,local_38,PTR_s_applyMeasuredWebContentHeight__026c7330);
      uVar5 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
      uVar4 = *(undefined8 *)PTR__CGPointZero_025782e0;
      lVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_webView_026a12c0);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988
                 ,local_38,PTR_s_measureWebAutoHeightIfNeeded_026c7328);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323c90,local_38,PTR_s_performSelector_withObject_after_026a4990,
                 PTR_s_measureWebAutoHeightIfNeeded_026c7328,0);
    }
  }
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

