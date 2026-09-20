// FUN_00086ba0 @ 00086ba0

void FUN_00086ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  long lVar1;
  long local_50 [3];
  byte local_31;
  long local_30;
  long local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_31 = param_5;
  FUN_00078a1c();
  if ((local_28 != 0) && (local_28 != local_20)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeFromSuperview_026ca800);
  }
  if (local_20 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_removeFromSuperview_026ca800);
  }
  if (((local_31 & 1) != 0) && (local_30 != 0)) {
    lVar1 = local_30;
    FUN_0007b310();
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = lVar1;
    if ((local_20 == 0) || (lVar1 == local_20)) {
      FUN_0007b4e8(0,local_30);
    }
    _objc_storeStrong(local_50,0);
  }
  FUN_0007b57c(local_18);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

