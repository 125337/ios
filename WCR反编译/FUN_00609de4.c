// FUN_00609de4 @ 00609de4

void FUN_00609de4(long param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  long local_30;
  byte local_21;
  undefined8 local_20;
  long local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cb930)(param_1,param_2,param_3 & 1);
  _objc_storeWeak(&DAT_028cb8b8,local_18);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (local_30 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setNeedsLayout_0269deb8);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layoutIfNeeded_026ca790);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

