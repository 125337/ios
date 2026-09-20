// wcr_updateProgress:currentMS:totalMS: @ 015c1254

/* Function Stack Size: 0x20 bytes */

void WCRVoiceSeekOverlay::wcr_updateProgress_currentMS_totalMS_
               (ID param_1,SEL param_2,double param_3,unsigned_int param_4,unsigned_int param_5)

{
  ulong uVar1;
  ID IVar2;
  undefined8 in_d2;
  undefined8 in_d3;
  double local_90;
  double local_88;
  
  local_88 = param_3;
  if (1.0 < param_3) {
    local_88 = 1.0;
  }
  if (local_88 <= 0.0) {
    local_90 = 0.0;
  }
  else {
    local_90 = local_88;
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setLastProgress__026b0d98);
  uVar1 = (ulong)param_4;
  FUN_015c1474(uVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_timeLabel_026aa818);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_trackView_026b0d70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetWidth(local_90,local_88,in_d2,in_d3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (0.5 < local_90) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_applyFillUsingLastProgress_026b0d90);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setNeedsLayout_0269deb8);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_layoutIfNeeded_026ca790);
  }
  return;
}

