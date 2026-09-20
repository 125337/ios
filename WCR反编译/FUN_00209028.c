// FUN_00209028 @ 00209028

double FUN_00209028(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                   undefined8 param_5,uint param_6)

{
  uint uVar1;
  ulong uVar2;
  double dVar3;
  double local_148;
  double local_140;
  ulong local_118;
  ulong local_88;
  ulong local_68;
  double local_60;
  undefined8 uStack_58;
  double local_50;
  undefined8 uStack_48;
  double local_40;
  undefined8 uStack_38;
  double local_30;
  undefined8 uStack_28;
  
  local_68 = 0;
  local_60 = param_1;
  uStack_58 = param_2;
  local_50 = param_3;
  uStack_48 = param_4;
  _objc_storeStrong(&local_68,param_5);
  if (local_68 != 0) {
    uVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_msgBannerBeautifyEnabled_026a06b8);
    uVar1 = (uint)uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_001d6008();
      local_118 = local_68;
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_msgBannerExtraMarginLight_026a06c8);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_msgBannerExtraMarginDark_026a06c0);
      }
      local_88 = local_118;
      if ((long)local_118 < 1) {
        uStack_38 = uStack_58;
        local_40 = local_60;
        uStack_28 = uStack_48;
        local_30 = local_50;
      }
      else {
        if (200 < (long)local_118) {
          local_88 = 200;
        }
        if ((((param_6 & 1) == 0) ||
            ((*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_msgBannerWidth_026a0698),
            param_1 <= 0.0)) ||
           ((*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_msgBannerHeight_026a06a0),
           param_1 <= 0.0)) {
          dVar3 = local_60;
          _CGRectGetWidth(local_60,uStack_58,local_50,uStack_48);
          if (0.0 < dVar3) {
            local_140 = (dVar3 - 80.0) * 0.5;
            if (local_140 <= 0.0) {
              local_140 = 0.0;
            }
            local_148 = (double)(long)local_140;
            if ((double)(long)local_88 < local_148) {
              local_148 = (double)(long)local_88;
            }
            if (0.0 < local_148) {
              local_40 = (double)(long)(local_60 + local_148);
              local_30 = (double)(long)(local_50 - local_148 * 2.0);
              uStack_38 = uStack_58;
              uStack_28 = uStack_48;
            }
            else {
              uStack_38 = uStack_58;
              local_40 = local_60;
              uStack_28 = uStack_48;
              local_30 = local_50;
            }
          }
          else {
            uStack_38 = uStack_58;
            local_40 = local_60;
            uStack_28 = uStack_48;
            local_30 = local_50;
          }
        }
        else {
          uStack_38 = uStack_58;
          local_40 = local_60;
          uStack_28 = uStack_48;
          local_30 = local_50;
        }
      }
      goto LAB_002093c4;
    }
  }
  uStack_38 = uStack_58;
  local_40 = local_60;
  uStack_28 = uStack_48;
  local_30 = local_50;
LAB_002093c4:
  local_60 = local_40;
  uStack_58 = uStack_38;
  local_50 = local_30;
  uStack_48 = uStack_28;
  _objc_storeStrong(&local_68,0);
  return local_40;
}

