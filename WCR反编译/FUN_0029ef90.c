// FUN_0029ef90 @ 0029ef90

double FUN_0029ef90(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,byte param_6,double *param_7)

{
  undefined *puVar1;
  undefined1 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double local_6f8;
  double local_698;
  double local_690;
  ulong local_680;
  ulong local_670;
  double local_660;
  double local_648;
  double local_638;
  double local_630;
  undefined1 *local_620;
  undefined1 *local_618;
  double local_608;
  double local_5f8;
  double local_5f0;
  double local_5e8;
  double local_5d8;
  double local_5d0;
  double local_5a0;
  double local_588;
  double local_578;
  double local_570;
  double local_550;
  double local_548;
  double local_530;
  double local_518;
  double local_420;
  double local_418;
  double local_318;
  double local_288;
  double local_280;
  double local_188;
  undefined1 *local_60;
  double *local_58;
  byte local_49;
  ulong local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_58 = param_7;
  local_49 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
  _CGRectGetWidth();
  local_548 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
  _CGRectGetHeight(local_548,param_2,param_3,param_4);
  dVar8 = local_548;
  FUN_002ad620();
  dVar5 = dVar8;
  FUN_002ad720();
  dVar4 = dVar5;
  FUN_002ad828();
  dVar3 = dVar4;
  FUN_002ad928();
  dVar7 = param_2;
  FUN_002adaa4();
  puVar2 = local_60;
  local_518 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_floatingTabBarCustomLayoutEnable_026a19f0);
  if (((ulong)puVar2 & 1) == 0) {
    local_518 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_floatingTabBarHorizontalInset_026a19f8);
  }
  puVar2 = local_60;
  local_530 = local_518;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_floatingTabBarCustomLayoutEnable_026a19f0);
  if (((ulong)puVar2 & 1) == 0) {
    local_530 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_floatingTabBarBottomOffset_026a1a00);
  }
  dVar6 = local_530;
  FUN_002adc48();
  dVar4 = dVar6 + dVar8 + dVar4;
  local_548 = local_548 - 6.0;
  if (local_548 <= 34.0) {
    local_548 = 34.0;
  }
  if (local_548 <= 86.0) {
    local_550 = local_548;
  }
  else {
    local_550 = 86.0;
  }
  FUN_002adba4(dVar4,0x4041000000000000,local_550);
  dVar8 = dVar4;
  FUN_002adc54();
  local_530 = 6.0 - local_530;
  if ((local_49 & 1) == 0) {
    local_578 = param_1;
    FUN_002adcfc();
    local_570 = dVar5;
    if (0.0 < dVar5) {
      local_570 = 0.0;
    }
    local_578 = local_578 + local_570;
    if (local_578 <= 96.0) {
      local_578 = 96.0;
    }
    local_188 = dVar8 + local_518;
    local_588 = param_1 - local_578;
    if (local_588 <= 0.0) {
      local_588 = 0.0;
    }
    FUN_002adba4(local_188,0,local_588);
    dVar5 = (param_1 - dVar8 * 2.0) + dVar5;
    FUN_002adba4(dVar5,local_578,param_1 - local_188);
    puVar1 = PTR__CGRectZero_025782f0;
    if (param_1 - 4.0 < local_188 + dVar5) {
      local_5a0 = (param_1 - 4.0) - dVar5;
      if (local_5a0 <= 4.0) {
        local_5a0 = 4.0;
      }
      local_188 = local_5a0;
    }
    if (local_58 != (double *)0x0) {
      dVar8 = *(double *)PTR__CGRectZero_025782f0;
      local_58[1] = *(double *)(PTR__CGRectZero_025782f0 + 8);
      *local_58 = dVar8;
      dVar8 = *(double *)(puVar1 + 0x10);
      local_58[3] = *(double *)(puVar1 + 0x18);
      local_58[2] = dVar8;
    }
    FUN_002adf88();
    local_40 = local_188;
    local_38 = local_530;
    local_30 = dVar5;
    local_28 = dVar4;
  }
  else {
    dVar6 = dVar4 + dVar7;
    FUN_002adba4(dVar6,0x4041000000000000,0x4053800000000000);
    local_5d0 = dVar6;
    if (dVar6 < param_1 - 8.0) {
      local_5d0 = param_1 - 8.0;
    }
    local_5d8 = (local_5d0 - 8.0) - dVar6;
    if (local_5d8 <= 128.0) {
      local_5d8 = 128.0;
    }
    local_5f0 = param_1;
    FUN_002adcfc();
    local_5e8 = dVar5;
    if (0.0 < dVar5) {
      local_5e8 = 0.0;
    }
    local_5f0 = local_5f0 + local_5e8;
    if (local_5f0 <= 96.0) {
      local_5f0 = 96.0;
    }
    if (local_5d8 <= local_5f0) {
      local_5f8 = local_5d8;
    }
    else {
      local_5f8 = local_5f0;
    }
    local_280 = (((param_1 - dVar8 * 2.0) - 8.0) - dVar6) + dVar5;
    FUN_002adba4(local_280,local_5f8,local_5d8);
    local_288 = local_280 + 8.0 + dVar6;
    if (local_5d0 < local_288) {
      local_608 = (local_5d0 - 8.0) - dVar6;
      if (local_608 <= 128.0) {
        local_608 = 128.0;
      }
      local_280 = local_608;
      local_288 = local_608 + 8.0 + dVar6;
    }
    local_618 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_floatingTabBarExtraButtonPositio_0269e4c8);
    if ((long)local_618 < 1) {
      local_618 = (undefined1 *)0x0;
    }
    if ((long)local_618 < 3) {
      local_620 = local_618;
    }
    else {
      local_620 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
    }
    if (local_620 + -1 == (undefined1 *)0x0) {
      local_638 = param_1;
      FUN_002adcfc();
      local_630 = dVar5;
      if (0.0 < dVar5) {
        local_630 = 0.0;
      }
      local_638 = local_638 + local_630;
      if (local_638 <= 96.0) {
        local_638 = 96.0;
      }
      local_318 = dVar8 + local_518;
      local_648 = param_1 - local_638;
      if (local_648 <= 0.0) {
        local_648 = 0.0;
      }
      FUN_002adba4(local_318,0,local_648);
      dVar5 = (param_1 - dVar8 * 2.0) + dVar5;
      FUN_002adba4(dVar5,local_638,param_1 - local_318);
      if (param_1 - 4.0 < local_318 + dVar5) {
        local_660 = (param_1 - 4.0) - dVar5;
        if (local_660 <= 4.0) {
          local_660 = 4.0;
        }
        local_318 = local_660;
      }
      local_670 = local_48;
      FUN_002adfd4();
      if (local_670 < 2) {
        local_670 = 1;
      }
      local_680 = local_48;
      FUN_002ae0dc();
      if (local_670 - 1 < local_680) {
        local_680 = local_670 - 1;
      }
      dVar8 = (double)NEON_ucvtf(local_670);
      dVar8 = dVar5 / dVar8;
      dVar7 = dVar4 + dVar7;
      local_690 = dVar8;
      if (dVar8 < dVar4 + 24.0) {
        local_690 = dVar4 + 24.0;
      }
      if (local_690 <= 86.0) {
        local_698 = local_690;
      }
      else {
        local_698 = 86.0;
      }
      FUN_002adba4(dVar7,0x403e000000000000,local_698);
      dVar6 = (double)NEON_ucvtf(local_680);
      dVar6 = local_318 + dVar6 * dVar8 + (dVar8 - dVar7) / 2.0;
      dVar9 = local_530 + (dVar4 - dVar7) / 2.0;
      dVar8 = dVar7;
      FUN_002adf88();
      if (local_58 != (double *)0x0) {
        local_58[1] = dVar9 - param_2;
        *local_58 = dVar6 + dVar3;
        local_58[3] = dVar8;
        local_58[2] = dVar7;
      }
      FUN_002adf88();
      local_40 = local_318;
      local_38 = local_530;
      local_30 = dVar5;
      local_28 = dVar4;
    }
    else {
      local_518 = (param_1 - local_288) / 2.0 + local_518;
      local_6f8 = (param_1 - 4.0) - local_288;
      if (local_6f8 <= 4.0) {
        local_6f8 = 4.0;
      }
      FUN_002adba4(local_620 + -1,local_518,0x4010000000000000,local_6f8);
      dVar8 = local_518;
      dVar5 = local_530;
      dVar7 = local_280;
      dVar9 = dVar4;
      FUN_002adf88();
      _CGRectGetMaxX(dVar8,dVar5,dVar7,dVar9);
      local_420 = dVar8 + 8.0;
      local_418 = local_518;
      if (local_620 == (undefined1 *)0x0) {
        local_418 = local_518 + dVar6 + 8.0;
        local_420 = local_518;
      }
      dVar5 = local_530 + (dVar4 - dVar6) / 2.0;
      dVar8 = dVar6;
      FUN_002adf88();
      if (local_58 != (double *)0x0) {
        local_58[1] = dVar5 - param_2;
        *local_58 = local_420 + dVar3;
        local_58[3] = dVar8;
        local_58[2] = dVar6;
      }
      FUN_002adf88();
      local_40 = local_418;
      local_38 = local_530;
      local_30 = local_280;
      local_28 = dVar4;
    }
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_48,0);
  return local_40;
}

