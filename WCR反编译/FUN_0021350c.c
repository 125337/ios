// FUN_0021350c @ 0021350c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_0021350c(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined *puVar3;
  double dVar4;
  long lVar5;
  long lVar6;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_248;
  double local_240;
  double local_238;
  double local_158;
  double local_80;
  double local_68;
  double local_60;
  double local_58;
  ulong local_48;
  double local_40;
  double local_38;
  long local_30;
  long lStack_28;
  
  local_48 = 0;
  local_40 = param_1;
  local_38 = param_2;
  _objc_storeStrong(&local_48,param_5);
  local_60 = local_38;
  local_58 = local_40;
  if ((local_40 < 1.0) || (local_38 < 1.0)) {
    local_30 = *(long *)PTR__CGSizeZero_025782f8;
    lStack_28 = *(long *)(PTR__CGSizeZero_025782f8 + 8);
  }
  else {
    dVar4 = local_38;
    FUN_002093f8(local_48);
    local_80 = dVar4;
    FUN_0020984c(local_48);
    uVar2 = local_48;
    FUN_0020870c();
    local_68 = dVar4;
    if (dVar4 < 80.0) {
      puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_238 = param_3;
      local_248 = param_4;
      if (param_3 < param_4) {
        local_238 = param_4;
        local_248 = param_3;
      }
      local_240 = local_248;
      if ((uVar2 & 1) != 0) {
        local_240 = local_238;
      }
      local_68 = local_240;
      param_4 = dVar4;
      if (local_80 < 1.0) {
        if ((uVar2 & 1) == 0) {
          local_248 = local_238;
        }
        local_80 = local_248;
      }
    }
    FUN_00209c98((byte)uVar2 & 1);
    local_290 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    if (param_4 <= 1.0) {
      local_290 = 56.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    }
    local_298 = local_290 * DAT_02323e50;
    if (180.0 < local_298) {
      local_298 = 180.0;
    }
    if (local_298 <= 56.0) {
      local_2a0 = 56.0;
    }
    else {
      local_2a0 = local_298;
    }
    local_158 = local_2a0;
    if (1.0 < local_80) {
      local_2a8 = local_80 * 0.5;
      if (local_2a8 <= 56.0) {
        local_2a8 = 56.0;
      }
      if (local_2a8 <= local_2a0) {
        local_2b0 = local_2a8;
      }
      else {
        local_2b0 = local_2a0;
      }
      local_158 = local_2b0;
    }
    if ((local_68 < local_58) || (local_158 < local_60)) {
      local_2b8 = local_158 / local_60;
      if (local_68 / local_58 < local_2b8) {
        local_2b8 = local_68 / local_58;
      }
      local_58 = local_58 * local_2b8;
      local_60 = local_60 * local_2b8;
    }
    if ((local_58 < 80.0) || (local_60 < 20.0)) {
      local_30 = *(long *)PTR__CGSizeZero_025782f8;
      lStack_28 = *(long *)(PTR__CGSizeZero_025782f8 + 8);
    }
    else {
      lVar5 = (long)local_58;
      lVar6 = (long)local_60;
      FUN_001ebe58();
      local_30 = lVar5;
      lStack_28 = lVar6;
    }
  }
  _objc_storeStrong(&local_48,0);
  auVar1._8_8_ = lStack_28;
  auVar1._0_8_ = local_30;
  return auVar1;
}

