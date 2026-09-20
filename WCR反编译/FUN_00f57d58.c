// FUN_00f57d58 @ 00f57d58

byte FUN_00f57d58(undefined8 param_1)

{
  ulong uVar1;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_18 = &DAT_028e2de0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02583248);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  uVar1 = DAT_028e2dd8;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2dd8,PTR_s_containsObject__0269cbb8,local_30);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_motivat);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_reward),
       (uVar1 & 1) == 0)) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_containsString__0269d0b0,&cf_splash_ad_allow);
      if ((uVar1 & 1) == 0) {
        local_21 = 0;
      }
      else {
        local_21 = 1;
      }
    }
    else {
      local_21 = 1;
    }
  }
  else {
    local_21 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

