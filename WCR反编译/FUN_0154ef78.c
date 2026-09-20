// FUN_0154ef78 @ 0154ef78

double FUN_0154ef78(double param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  long local_d8;
  ulong local_a8;
  double local_70;
  byte local_49;
  ulong local_48;
  ulong local_40;
  undefined *local_38;
  undefined4 local_2c;
  double local_28;
  ulong local_20;
  double local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = param_1;
  if ((local_20 == 0) || (param_1 <= 0.0)) {
    local_18 = 0.0;
    local_2c = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_20;
    local_38 = puVar2;
    FUN_01583530();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_primary)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_a8 = uVar4;
    if (uVar4 == 0) {
      local_a8 = *(ulong *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_a8;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_showsMessage);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = uVar3 & 0xffffffff;
    local_49 = (byte)uVar3;
    FUN_01545618();
    bVar1 = uVar4 == 2;
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_chatAvatarProfileCardMessageActi_026b0548);
    if (((ulong)puVar2 & 1) != 0) {
      local_49 = 0;
    }
    FUN_01584398();
    dVar5 = 52.0;
    if ((bVar1 & 1) == 0) {
      dVar5 = 40.0;
    }
    local_70 = 0.0;
    uVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    if (uVar4 != 0) {
      uVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
      uVar4 = (uVar4 + 3) / 4;
      local_d8 = uVar4 - 1;
      if (local_d8 < 0) {
        local_d8 = 0;
      }
      local_70 = (double)local_d8 * 8.0 + dVar5 * (double)uVar4;
    }
    if ((local_49 & 1) != 0) {
      uVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
      if (uVar4 != 0) {
        local_70 = local_70 + 10.0;
      }
      local_70 = local_70 + 46.0;
    }
    local_18 = local_70;
    local_2c = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

