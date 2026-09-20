// FUN_00722790 @ 00722790

byte FUN_00722790(double param_1,double param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  long local_28;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  if (lVar2 == 0) {
    local_11 = false;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_translationInView__026cabb0,lVar2);
    dVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_velocityInView__026cabd0,local_28);
    if (ABS(param_1) <= ABS(param_2)) {
      bVar1 = true;
      if ((-0.5 <= param_2) && (bVar1 = false, ABS(param_2) < 1.0)) {
        bVar1 = dVar3 < 0.0;
      }
      if (bVar1) {
        local_11 = true;
        if (ABS(param_2) < 30.0) {
          local_11 = 250.0 <= ABS(dVar3);
        }
      }
      else {
        local_11 = false;
      }
    }
    else {
      local_11 = false;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

