// FUN_021ee33c @ 021ee33c

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_021ee33c(double param_1,double param_2,undefined8 param_3,double param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined8 local_110;
  long local_108;
  long local_100;
  long local_f8;
  double local_f0;
  long local_e8;
  double local_e0;
  int local_d4;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  ulong local_a8;
  long local_a0;
  ulong local_98;
  long local_90;
  double local_88;
  double local_80;
  long local_78 [3];
  long local_60;
  double local_58;
  double local_50;
  double local_48;
  undefined8 local_40;
  undefined8 local_38;
  double local_30;
  double local_28;
  
  local_28 = 0.0;
  local_30 = 0.0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0.0;
  local_50 = 0.0;
  local_60 = 0;
  lVar2 = 0;
  local_d0 = param_4;
  local_c8 = param_1;
  local_c0 = param_3;
  local_88 = param_2;
  __ss25FloatingPointRoundingRuleOMa();
  local_b0 = *(long *)(lVar2 + -8);
  local_a8 = *(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  dVar3 = local_c8;
  uVar4 = local_c0;
  dVar5 = local_88;
  dVar6 = local_d0;
  local_b8 = lVar2;
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar2 = (long)&local_110 - local_a8;
  local_98 = extraout_x8 + 0xfU & 0xfffffffffffffff0;
  local_a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_02578668)();
  local_90 = lVar2 - local_98;
  local_48 = dVar6;
  local_40 = uVar4;
  local_38 = param_5;
  local_30 = dVar5;
  local_28 = dVar3;
  FUN_021ee084();
  local_80 = local_88 + dVar3;
  if (local_80 <= DAT_02323d38) {
    local_110 = 1;
  }
  else {
    local_e0 = (local_d0 * local_c8) / local_80;
    local_50 = local_80;
    (**(code **)(local_b0 + 0x68))
              (local_90,*(undefined4 *)PTR___ss25FloatingPointRoundingRuleO4downyA2BmFWC_02578ab0,
               local_b8);
    local_58 = local_e0;
    (**(code **)(local_b0 + 0x10))(local_a0,local_90,local_b8);
    lVar2 = local_a0;
    (**(code **)(local_b0 + 0x58))(local_a0,local_b8);
    local_d4 = (int)lVar2;
    if (local_d4 ==
        *(int *)PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_02578aa0) {
      local_58 = (double)(long)local_e0;
    }
    else if (local_d4 ==
             *(int *)PTR___ss25FloatingPointRoundingRuleO15toNearestOrEvenyA2BmFWC_02578a98) {
      local_58 = (double)(long)local_e0;
    }
    else if (local_d4 == *(int *)PTR___ss25FloatingPointRoundingRuleO2upyA2BmFWC_02578aa8) {
      local_58 = (double)(long)local_e0;
    }
    else if (local_d4 == *(int *)PTR___ss25FloatingPointRoundingRuleO4downyA2BmFWC_02578ab0) {
      local_58 = (double)(long)local_e0;
    }
    else if (local_d4 == *(int *)PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_02578a88)
    {
      local_58 = (double)(long)local_e0;
    }
    else if (local_d4 - *(int *)PTR___ss25FloatingPointRoundingRuleO12awayFromZeroyA2BmFWC_02578a90
             == 0) {
      local_e8 = -((long)local_e0 >> 0x3f);
      if (local_e8 == 0) {
        local_58 = (double)(long)local_e0;
      }
      else {
        if (local_e8 != 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x21ee73c);
          (*pcVar1)();
        }
        local_58 = (double)(long)local_e0;
      }
    }
    else {
      __sSd14_roundSlowPathyys25FloatingPointRoundingRuleOF
                (local_d4 -
                 *(int *)PTR___ss25FloatingPointRoundingRuleO12awayFromZeroyA2BmFWC_02578a90,
                 local_90);
      (**(code **)(local_b0 + 8))(local_a0,local_b8);
    }
    local_f0 = local_58;
    (**(code **)(local_b0 + 8))(local_90,local_b8);
    if (0x7fe < ((ulong)local_f0 >> 0x34 & 0x7ff)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21ee72c);
      (*pcVar1)();
    }
    if (local_f0 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21ee730);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= local_f0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21ee734);
      (*pcVar1)();
    }
    local_f8 = (long)local_f0;
    local_78[1] = 0;
    local_108 = local_f8;
    local_60 = local_f8;
    if ((2 < local_f8) && (local_100 = local_f8 + -1, local_108 = local_100, SBORROW8(local_f8,1)))
    {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21ee738);
      (*pcVar1)();
    }
    local_78[0] = local_108;
    __ss3maxyxx_xtSLRzlF
              (local_78 + 2,local_78 + 1,local_78,PTR___sSiN_025789d8,PTR___sSiSLsWP_025789e8);
    local_110 = local_78[2];
  }
  return local_110;
}

