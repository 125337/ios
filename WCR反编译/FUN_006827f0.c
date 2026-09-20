// FUN_006827f0 @ 006827f0

void FUN_006827f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  byte local_1f4;
  undefined *local_178;
  ulong local_160;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 local_a2;
  byte local_a1;
  ulong local_a0;
  byte local_91;
  undefined *local_90;
  undefined4 local_88;
  byte local_81;
  ulong local_80;
  byte local_71;
  ulong local_70;
  ulong local_68;
  ulong local_60 [3];
  ulong local_48;
  ulong local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar9 = local_40;
  FUN_006816d8();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_length_0269cca0);
  if (uVar9 == 0) {
    uVar4 = local_40;
    FUN_0067d82c();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = local_48;
    local_48 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar9);
  }
  uVar9 = local_40;
  FUN_0067d82c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60[0] = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar9);
  local_71 = 0;
  local_81 = 0;
  uVar9 = local_40;
  FUN_0067e48c();
  if (((uVar9 & 1) == 0) ||
     (uVar9 = local_60[0], (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_count_0269cfe0),
     uVar9 != 3)) {
    local_160 = local_48;
    puVar5 = local_38;
    FUN_0067e48c();
    if (((ulong)puVar5 & 1) == 0) {
      local_178 = (undefined *)0x0;
    }
    else {
      local_178 = local_38;
    }
    FUN_00682068(local_160,local_178);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = local_160;
  }
  else {
    local_160 = local_40;
    FUN_0067d82c(0);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = local_160;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_160;
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  uVar9 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if ((uVar9 == 0) || (uVar9 = local_68, FUN_0067e48c(), (uVar9 & 1) == 0)) {
    uVar9 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    pcVar1 = &cf_lTek0R6e>k_S0p0MRS0Sb;
    if (uVar9 != 0) {
      pcVar1 = &cf_6e>keHh_Nzz;
    }
    FUN_00684440(pcVar1);
    local_88 = 1;
  }
  else {
    puVar5 = local_38;
    FUN_006816d8();
    _objc_retainAutoreleasedReturnValue();
    local_90 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
    if (puVar5 == (undefined *)0x0) {
      puVar6 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      FUN_006816d8();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_90;
      local_90 = puVar8;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    puVar5 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    if (puVar5 == (undefined *)0x0) {
      FUN_00684600();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_90;
      local_90 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    puVar5 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    uVar9 = 0;
    local_1f4 = 0;
    if (puVar5 != (undefined *)0x0) {
      uVar9 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_90);
      local_1f4 = (byte)uVar9;
    }
    local_91 = local_1f4 & 1;
    FUN_00684880();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_sid);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    FUN_0067d980();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)();
    local_a1 = uVar10 != 0;
    FUN_006854ec();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar9);
    uVar9 = local_48;
    local_a2 = uVar4 != 0;
    FUN_00685710();
    if ((uVar9 & 1) == 0) {
      FUN_00684440(&cf_6e>kfS_u_Ne0e0peW_0N_4_te);
      local_88 = 1;
    }
    else if ((local_a1 & 1) == 0) {
      if ((local_91 & 1) == 0) {
        FUN_00684440(&cf_lTek0R___gO0p0MRS0Sb);
        local_88 = 0;
      }
      else {
        FUN_00686558(local_28,local_30,local_68);
        local_88 = 1;
      }
    }
    else {
      puVar5 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,
                 &cf_ck_W_v6e>keHh_);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_48;
      local_f0 = PTR___NSConcreteStackBlock_02578660;
      local_e8 = 0xc2000000;
      local_e4 = 0;
      local_e0 = FUN_00686470;
      local_d8 = &DAT_0257e8d8;
      local_b0 = puVar5;
      (*(code *)PTR__objc_retain_02578638)();
      uVar3 = local_28;
      local_d0 = puVar5;
      (*(code *)PTR__objc_retain_02578638)();
      uVar2 = local_30;
      local_c8 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      uVar9 = local_68;
      local_c0 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = uVar9;
      FUN_00685944(uVar4,&local_f0);
      local_88 = 1;
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(&local_b0,0);
    }
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

