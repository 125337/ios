// FUN_003ce8dc @ 003ce8dc

/* WARNING: Type propagation algorithm not settling */

void FUN_003ce8dc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_110;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  long local_e8;
  ulong local_e0;
  undefined1 auStack_d8 [24];
  ulong local_c0;
  long local_b8;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88 [4];
  undefined4 local_64;
  double local_60;
  ulong local_58;
  double local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_40 = 0;
  local_38 = param_4;
  local_30 = param_3;
  _objc_storeStrong(&local_40,param_5);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_6);
  _CACurrentMediaTime();
  uVar2 = local_28;
  local_50 = param_1;
  FUN_003cee1c();
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar2;
  _CACurrentMediaTime();
  local_60 = (param_1 - local_50) * 1000.0;
  uVar2 = local_58;
  FUN_003cf114();
  if ((uVar2 & 1) == 0) {
    FUN_003cf240(local_28,local_30,local_38,local_40,local_48);
    local_64 = 1;
  }
  else {
    local_88[3] = 0;
    local_88[2] = 0;
    local_88[1] = 0;
    local_88[0] = 0;
    local_90 = 0;
    local_98 = 0;
    local_a0 = 0;
    local_a8 = 0;
    uVar2 = local_28;
    FUN_003cf374(local_28,&local_90,&local_98,&local_a0,&local_a8);
    _objc_storeStrong(local_88 + 3,local_90);
    _objc_storeStrong(local_88 + 2,local_98);
    _objc_storeStrong(local_88 + 1,local_a0);
    _objc_storeStrong(local_88,local_a8);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_28;
      FUN_003cffec(local_28,local_38,local_40,local_48);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_28;
        FUN_003d0598(local_28,0,0,0);
        _objc_retainAutoreleasedReturnValue();
        local_110 = uVar2;
        FUN_003cf240(local_28,local_30,local_38,local_40,local_48);
        uVar2 = local_58;
        FUN_003cf8bc();
        if ((uVar2 & 1) == 0) {
          uVar2 = local_110;
          FUN_003adbe4();
          if ((uVar2 & 1) != 0) {
            FUN_00368c14(local_110,&cf_swipePassthrough);
          }
          local_64 = 0;
        }
        else {
          local_64 = 1;
        }
        _objc_storeStrong(&local_110,0);
      }
      else {
        local_64 = 1;
      }
    }
    else {
      uVar2 = local_88[3];
      FUN_003cf8bc();
      if (((uVar2 & 1) == 0) ||
         ((uVar2 = local_28, FUN_003cf928(), (uVar2 & 1) == 0 &&
          (uVar2 = local_88[3], FUN_003cf9fc(), (uVar2 & 1) == 0)))) {
        if (local_88[2] != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88[2],PTR_s_wcrGrouping_closeSwipeStateRemov_026a2778,0);
        }
        if (local_88[0] != 0) {
          _objc_initWeak(auStack_b0,local_88[2]);
          lVar1 = local_88[0];
          (*(code *)PTR__objc_retain_02578638)();
          local_b8 = lVar1;
          uVar2 = local_88[3];
          (*(code *)PTR__objc_msgSend_02578628)(local_88[3],PTR_s_copy_0269d150);
          puVar3 = PTR___dispatch_main_q_02578680;
          local_c0 = uVar2;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          local_108 = PTR___NSConcreteStackBlock_02578660;
          local_100 = 0xc2000000;
          local_fc = 0;
          local_f8 = FUN_003cfafc;
          local_f0 = &DAT_0257c978;
          _objc_copyWeak();
          lVar1 = local_b8;
          (*(code *)PTR__objc_retain_02578638)();
          uVar2 = local_c0;
          local_e8 = lVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_e0 = uVar2;
          _dispatch_async(puVar3,&local_108);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_e0);
          _objc_storeStrong(&local_e8,0);
          _objc_destroyWeak(auStack_d8);
          _objc_storeStrong(&local_c0,0);
          _objc_storeStrong(&local_b8,0);
          _objc_destroyWeak(auStack_b0);
        }
        local_64 = 1;
      }
      else {
        FUN_003cf240(local_28,local_30,local_38,local_40,local_48);
        local_64 = 1;
      }
    }
    _objc_storeStrong(local_88);
    _objc_storeStrong(local_88 + 1,0);
    _objc_storeStrong(local_88 + 2,0);
    _objc_storeStrong(local_88 + 3,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

