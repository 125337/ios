// FUN_004194e4 @ 004194e4

void FUN_004194e4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,byte param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  dispatch_time_t dVar8;
  long local_180;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  byte local_b8;
  undefined **local_b0;
  undefined4 local_a8;
  bool local_a1;
  long local_a0;
  long local_98;
  long local_90;
  long local_88 [3];
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  double local_58;
  long local_50;
  byte local_41;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_50 = 0;
  local_41 = param_6;
  local_40 = param_5;
  _objc_storeStrong(&local_50,param_7);
  local_60 = 0;
  local_58 = param_1;
  _objc_storeStrong(&local_60,param_8);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_9);
  lVar4 = local_50;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = local_28;
  local_70 = lVar4;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = local_30;
  local_88[0] = lVar5;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_a1 = false;
  bVar3 = local_40 != 1;
  local_90 = lVar4;
  if (bVar3) {
    local_180 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_180 = local_38;
    FUN_00418e40(0);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = local_180;
  }
  local_a1 = !bVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = local_180;
  if ((local_a1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  lVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  if ((lVar4 == 0) ||
     (puVar6 = PTR_WCRefineHelper_026ce000,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,local_70
               ), ((ulong)puVar6 & 1) != 0)) {
    local_a8 = 1;
  }
  else {
    if (local_40 == 1) {
      lVar4 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_count_0269cfe0);
      if (lVar4 == 0) {
        local_a8 = 1;
        goto LAB_00419aa8;
      }
    }
    else {
      lVar4 = local_88[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_length_0269cca0);
      if ((lVar4 == 0) &&
         (lVar4 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0),
         lVar4 == 0)) {
        local_a8 = 1;
        goto LAB_00419aa8;
      }
    }
    lVar4 = local_98;
    ppuVar7 = &local_110;
    local_110 = PTR___NSConcreteStackBlock_02578660;
    local_108 = 0xc2000000;
    local_104 = 0;
    local_100 = FUN_00419c8c;
    local_f8 = &DAT_0257d298;
    local_c0 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    lVar5 = local_70;
    local_f0 = lVar4;
    local_b8 = local_41 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_68;
    local_e8 = lVar5;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_60;
    local_e0 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    lVar5 = local_88[0];
    local_d8 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    lVar4 = local_90;
    local_d0 = lVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = lVar4;
    _objc_retainBlock();
    local_b0 = ppuVar7;
    if (0.0 < local_58) {
      dVar8 = _dispatch_time(0,(long)(local_58 * 1000000000.0));
      puVar6 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar8,puVar6,local_b0);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    else {
      (*(code *)ppuVar7[2])();
    }
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_f0,0);
    local_a8 = 0;
  }
LAB_00419aa8:
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(local_88,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

