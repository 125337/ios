// FUN_021cfc34 @ 021cfc34

double FUN_021cfc34(double param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  double dVar5;
  undefined1 auStack_f0 [8];
  double local_e8;
  long local_e0;
  ulong local_d8;
  ulong local_d0;
  undefined *local_c0;
  double local_b8;
  undefined8 *local_b0;
  double *local_a8;
  double local_a0;
  double local_98;
  double local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined1 *local_70;
  int *local_68;
  int local_5c;
  double local_58;
  double local_50;
  undefined8 local_48;
  double local_40;
  double local_38;
  
  local_50 = 0.0;
  lVar2 = 0;
  local_a0 = param_1;
  __ss25FloatingPointRoundingRuleOMa();
  local_80 = *(long *)(lVar2 + -8);
  local_d8 = *(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0;
  dVar5 = local_a0;
  local_78 = lVar2;
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar2 = -local_d8;
  local_d0 = extraout_x8 + 0xfU & 0xfffffffffffffff0;
  local_70 = auStack_f0 + lVar2;
  (*(code *)PTR____chkstk_darwin_02578668)();
  local_88 = (long)(auStack_f0 + lVar2) - local_d0;
  puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  _objc_opt_self();
  FUN_02222a00();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar3;
  FUN_02222c00();
  puVar3 = local_c0;
  local_b8 = dVar5;
  (*(code *)PTR__objc_release_02578630)(local_c0);
  local_a8 = &local_40;
  local_40 = local_b8;
  local_b0 = &local_48;
  local_48 = 0x3ff0000000000000;
  FUN_021c8058();
  __ss3maxyxx_xtSLRzlF(&local_38,local_a8,local_b0,PTR___s12CoreGraphics7CGFloatVN_02578ba0,puVar3);
  local_98 = local_38;
  local_50 = local_38;
  local_90 = local_a0 * local_38;
  local_68 = (int *)PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_02578aa0;
  (**(code **)(local_80 + 0x68))
            (local_88,*(undefined4 *)
                       PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_02578aa0
             ,local_78);
  local_58 = local_90;
  (**(code **)(local_80 + 0x10))(local_70,local_88,local_78);
  puVar4 = local_70;
  (**(code **)(local_80 + 0x58))(local_70,local_78);
  local_5c = (int)puVar4;
  if (local_5c == *local_68) {
    local_58 = (double)(long)local_90;
  }
  else if (local_5c ==
           *(int *)PTR___ss25FloatingPointRoundingRuleO15toNearestOrEvenyA2BmFWC_02578a98) {
    local_58 = (double)(long)local_90;
  }
  else if (local_5c == *(int *)PTR___ss25FloatingPointRoundingRuleO2upyA2BmFWC_02578aa8) {
    local_58 = (double)(long)local_90;
  }
  else if (local_5c == *(int *)PTR___ss25FloatingPointRoundingRuleO4downyA2BmFWC_02578ab0) {
    local_58 = (double)(long)local_90;
  }
  else if (local_5c == *(int *)PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_02578a88) {
    local_58 = (double)(long)local_90;
  }
  else if (local_5c - *(int *)PTR___ss25FloatingPointRoundingRuleO12awayFromZeroyA2BmFWC_02578a90 ==
           0) {
    local_e0 = -((long)local_90 >> 0x3f);
    if (local_e0 == 0) {
      local_58 = (double)(long)local_90;
    }
    else {
      if (local_e0 != 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x21cff60);
        (*pcVar1)();
      }
      local_58 = (double)(long)local_90;
    }
  }
  else {
    __sSd14_roundSlowPathyys25FloatingPointRoundingRuleOF
              (local_5c -
               *(int *)PTR___ss25FloatingPointRoundingRuleO12awayFromZeroyA2BmFWC_02578a90,local_88)
    ;
    (**(code **)(local_80 + 8))(local_70,local_78);
  }
  local_e8 = local_58;
  (**(code **)(local_80 + 8))(local_88,local_78);
  return local_e8 / local_98;
}

