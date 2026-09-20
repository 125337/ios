// FUN_002e2694 @ 002e2694

void FUN_002e2694(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar3;
  long lVar4;
  double local_80;
  long local_40 [3];
  long local_28;
  undefined8 local_20;
  ulong local_18;
  long *plVar2;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  plVar2 = &local_28;
  local_28 = 0;
  local_20 = param_3;
  _objc_storeStrong(plVar2,param_4);
  uVar1 = (uint)plVar2;
  FUN_002e4780();
  if ((((uVar1 & 1) != 0) && (uVar3 = local_18, FUN_002e61ec(), (uVar3 & 1) != 0)) &&
     (local_28 != 0)) {
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pointSize_026a1d68);
    if (param_1 <= 0.0) {
      local_80 = 15.0;
    }
    else {
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pointSize_026a1d68);
      local_80 = param_1;
    }
    FUN_002e4a24(local_80);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = lVar4;
    if (lVar4 != 0) {
      (*DAT_028c9900)(local_18,local_20,lVar4);
      FUN_002e6764(local_18);
    }
    _objc_storeStrong(local_40,0);
    if (lVar4 != 0) goto LAB_002e2860;
  }
  (*DAT_028c9900)(local_18,local_20,local_28);
LAB_002e2860:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

