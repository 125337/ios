// FUN_01af51ac @ 01af51ac

double FUN_01af51ac(double param_1,undefined8 param_2)

{
  long lVar1;
  double dVar2;
  ulong uVar3;
  ulong uVar4;
  double local_100;
  double local_f0;
  double local_d8;
  double local_a8;
  ulong local_70;
  long local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_homeAvatarStripNormalizedRowConf_026be298);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar3;
  FUN_01b01d6c(local_28);
  local_38 = param_1;
  FUN_01b01eac(local_28);
  local_40 = param_1;
  FUN_01b01fb4(local_28);
  local_100 = 0.0;
  local_50 = 0.0;
  local_58 = 0.0;
  local_60 = 0.0;
  local_68 = 0;
  local_48 = param_1;
  while( true ) {
    lVar1 = local_68;
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    dVar2 = local_60;
    if ((long)uVar3 <= lVar1) break;
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_topSpacing);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if ((uVar4 & 1) == 0) {
      local_d8 = 0.0;
      local_a8 = local_d8;
    }
    else {
      uVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_topSpacing);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      local_a8 = local_100;
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_70;
    local_f0 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_bottomSpacing);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if ((uVar4 & 1) == 0) {
      local_f0 = 0.0;
    }
    else {
      uVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_bottomSpacing);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_68 != 0) {
      local_a8 = (local_50 + local_58 + local_a8) - local_40;
    }
    local_50 = local_a8 + local_48;
    local_100 = local_a8 + local_38 + local_f0;
    if (local_100 <= local_60) {
      local_100 = local_60;
    }
    local_60 = local_100;
    local_58 = local_f0;
    _objc_storeStrong(&local_70,0);
    local_68 = local_68 + 1;
  }
  _objc_storeStrong(lVar1 - uVar3,&local_30);
  _objc_storeStrong(&local_28,0);
  return dVar2;
}

