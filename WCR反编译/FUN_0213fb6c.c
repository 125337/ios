// FUN_0213fb6c @ 0213fb6c

double FUN_0213fb6c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  double dVar2;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  long local_70;
  undefined4 local_64;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  double local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKey__0269e048,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  if (lVar1 == 0) {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKey__0269e048,&cf_floatingTabBarExtraButtonIconSizeAdjustment
              );
    _objc_retainAutoreleasedReturnValue();
    local_70 = lVar1;
    if (lVar1 == 0) {
      local_18 = 0.0;
    }
    else {
      local_c8 = -20.0;
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_doubleValue_026ca608);
      if (local_c8 <= -20.0) {
        local_c8 = -20.0;
      }
      if (local_c8 <= 20.0) {
        local_d0 = local_c8;
      }
      else {
        local_d0 = 20.0;
      }
      local_18 = local_d0;
    }
    local_64 = 1;
    _objc_storeStrong(&local_70,0);
  }
  else {
    local_38 = 20.0;
    dVar2 = -20.0;
    local_48 = -20.0;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_doubleValue_026ca608);
    local_b8 = dVar2;
    if (dVar2 <= local_48) {
      local_b8 = local_48;
    }
    local_58 = local_b8;
    local_40 = local_b8;
    if (local_b8 <= local_38) {
      local_c0 = local_b8;
    }
    else {
      local_c0 = local_38;
    }
    local_60 = local_c0;
    local_18 = local_c0;
    local_64 = 1;
    local_50 = dVar2;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

