// FUN_001db430 @ 001db430

ulong FUN_001db430(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double local_2b8;
  double local_2b0;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_250;
  double local_248;
  double local_238;
  double local_230;
  double local_220;
  double local_218;
  double local_208;
  double local_200;
  ulong local_1c0;
  ulong local_1b8;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined4 local_104;
  double local_100;
  undefined4 local_f4;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined4 local_d4;
  double local_d0;
  undefined4 local_c4;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined4 local_a4;
  double local_a0;
  undefined4 local_94;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_74;
  double local_70;
  undefined4 local_68;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_28 = 0;
  }
  else {
    local_40 = 0.0;
    local_48 = 0.0;
    local_50 = 0.0;
    local_58 = 0.0;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_getRed_green_blue_alpha__026ca660,&local_40,&local_48,&local_50,
               &local_58);
    if ((uVar1 & 1) == 0) {
      local_128 = 0.0;
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_getWhite_alpha__026ca668,&local_128,&local_58);
      uVar1 = local_30;
      if ((uVar2 & 1) == 0) {
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_CGColor_026ca470);
        uVar2 = uVar1;
        _CGColorGetNumberOfComponents();
        _CGColorGetComponents();
        local_1b8 = uVar2;
        for (local_1c0 = 0; uVar1 != 0 && local_1c0 < uVar2; local_1c0 = local_1c0 + 1) {
          local_2b0 = *(double *)(uVar1 + local_1c0 * 8);
          if (1.0 < local_2b0) {
            local_2b0 = 1.0;
          }
          if (local_2b0 <= 0.0) {
            local_2b8 = 0.0;
          }
          else {
            local_2b8 = local_2b0;
          }
          local_1b8 = local_1b8 * 0x1f + (long)(double)(long)(local_2b8 * 255.0);
        }
        local_28 = local_1b8;
      }
      else {
        if (local_128 <= 1.0) {
          local_260 = local_128;
        }
        else {
          local_260 = 1.0;
        }
        if (local_260 <= 0.0) {
          local_268 = 0.0;
        }
        else {
          local_268 = local_260;
        }
        lVar3 = (long)(double)(long)(local_268 * 255.0);
        if (local_58 <= 1.0) {
          local_270 = local_58;
        }
        else {
          local_270 = 1.0;
        }
        if (local_270 <= 0.0) {
          local_278 = 0.0;
        }
        else {
          local_278 = local_270;
        }
        local_28 = lVar3 << 0x10 ^ lVar3 << 0x18 ^ lVar3 << 8 ^
                   (long)(double)(long)(local_278 * 255.0);
      }
    }
    else {
      local_68 = 0;
      local_74 = 0x3f800000;
      local_80 = local_40;
      if (local_40 <= 1.0) {
        local_200 = local_40;
      }
      else {
        local_200 = 1.0;
      }
      local_88 = local_200;
      local_70 = local_200;
      if (local_200 <= 0.0) {
        local_208 = 0.0;
      }
      else {
        local_208 = local_200;
      }
      local_90 = local_208;
      local_94 = 0;
      local_a4 = 0x3f800000;
      local_b0 = local_48;
      if (local_48 <= 1.0) {
        local_218 = local_48;
      }
      else {
        local_218 = 1.0;
      }
      local_b8 = local_218;
      local_a0 = local_218;
      if (local_218 <= 0.0) {
        local_220 = 0.0;
      }
      else {
        local_220 = local_218;
      }
      local_c0 = local_220;
      local_c4 = 0;
      local_d4 = 0x3f800000;
      local_e0 = local_50;
      if (local_50 <= 1.0) {
        local_230 = local_50;
      }
      else {
        local_230 = 1.0;
      }
      local_e8 = local_230;
      local_d0 = local_230;
      if (local_230 <= 0.0) {
        local_238 = 0.0;
      }
      else {
        local_238 = local_230;
      }
      local_f0 = local_238;
      local_f4 = 0;
      local_104 = 0x3f800000;
      local_110 = local_58;
      if (local_58 <= 1.0) {
        local_248 = local_58;
      }
      else {
        local_248 = 1.0;
      }
      local_118 = local_248;
      local_100 = local_248;
      if (local_248 <= 0.0) {
        local_250 = 0.0;
      }
      else {
        local_250 = local_248;
      }
      local_120 = local_250;
      local_28 = (long)(double)(long)(local_220 * 255.0) << 0x10 ^
                 (long)(double)(long)(local_208 * 255.0) << 0x18 ^
                 (long)(double)(long)(local_238 * 255.0) << 8 ^
                 (long)(double)(long)(local_250 * 255.0);
    }
  }
  local_34 = 1;
  _objc_storeStrong(&local_30,0);
  return local_28;
}

