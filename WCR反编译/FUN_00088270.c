// FUN_00088270 @ 00088270

void FUN_00088270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,undefined8 param_6,uint param_7)

{
  long lVar1;
  long local_40;
  int local_34;
  undefined8 local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_40 = 0;
  local_34 = param_5;
  _objc_storeStrong(&local_40,param_6);
  if (((local_18 != 0) && (local_20 != 0)) && (local_28 != 0)) {
    if (local_20 == local_28) {
      if (local_34 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_18);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_insertSubview_belowSubview__0269e078,local_18,local_30);
      }
      FUN_0007b57c(local_28);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addSubview__026ca4c0,local_18);
      if (local_34 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bringSubviewToFront__026ca550,local_18)
        ;
      }
      else {
        lVar1 = local_20;
        FUN_0008dde8(local_20,local_28);
        if (-1 < lVar1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_insertSubview_belowSubview__0269e078,local_18,local_28);
        }
      }
      FUN_0008df7c(local_28,local_18);
      if ((param_7 & 1) != 0) {
        FUN_0008e020(local_20,local_18);
      }
      if ((local_40 != 0) && (local_40 != local_18)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeFromSuperview_026ca800);
      }
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

