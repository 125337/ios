// FUN_008e2c48 @ 008e2c48

void FUN_008e2c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_48;
  long local_40 [3];
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  lVar1 = local_18;
  FUN_008e5898();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = lVar1;
  FUN_008f86d4();
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    FUN_008f906c(0,local_40[0]);
    FUN_008f925c(local_18,local_40[0],10);
  }
  else {
    FUN_008f8dac(local_18,local_40[0],local_48);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

