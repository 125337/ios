// FUN_00089090 @ 00089090

void FUN_00089090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,undefined8 param_6,uint param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_50;
  int local_44;
  undefined8 local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_50 = 0;
  local_44 = param_5;
  _objc_storeStrong(&local_50,param_6);
  if (((local_28 != 0) && (local_30 != 0)) && (local_38 != 0)) {
    if (local_30 == local_38) {
      if (local_44 == 0) {
        lVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = local_28;
        (*(code *)PTR__objc_release_02578630)();
        (*(code *)PTR__objc_release_02578630)(lVar3);
        if (lVar1 != lVar2) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_bringSubviewToFront__026ca550,local_28);
        }
      }
      else {
        lVar2 = local_38;
        FUN_0008dde8(local_38,local_40);
        lVar3 = local_38;
        FUN_0008dde8(local_38,local_28);
        if ((lVar2 <= lVar3) && (-1 < lVar2)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_insertSubview_belowSubview__0269e078,local_28,local_40);
        }
      }
      FUN_0007b57c(local_38);
    }
    else {
      if (local_44 == 0) {
        lVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = local_28;
        (*(code *)PTR__objc_release_02578630)();
        (*(code *)PTR__objc_release_02578630)(lVar3);
        if (lVar1 != lVar2) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_bringSubviewToFront__026ca550,local_28);
        }
      }
      else {
        lVar2 = local_30;
        FUN_0008dde8(local_30,local_38);
        lVar3 = local_30;
        FUN_0008dde8(local_30,local_28);
        if ((-1 < lVar2) && (lVar2 <= lVar3)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_insertSubview_belowSubview__0269e078,local_28,local_38);
        }
      }
      FUN_0008df7c(local_38,local_28);
      if ((param_7 & 1) != 0) {
        FUN_0008e020(local_30,local_28);
      }
      if ((local_50 != 0) && (local_50 != local_28)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeFromSuperview_026ca800);
      }
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

