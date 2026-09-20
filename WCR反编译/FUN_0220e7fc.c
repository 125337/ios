// FUN_0220e7fc @ 0220e7fc

double FUN_0220e7fc(double param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  double dVar4;
  undefined1 auStack_a0 [8];
  double local_98;
  long local_90;
  double local_88;
  ulong local_80;
  long local_78;
  ulong local_70;
  double local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined1 *local_48;
  int *local_40;
  int local_34;
  double local_30;
  double local_28;
  
  local_28 = 0.0;
  lVar2 = 0;
  local_88 = param_1;
  __ss25FloatingPointRoundingRuleOMa();
  local_58 = *(long *)(lVar2 + -8);
  local_78 = *(long *)(local_58 + 0x40);
  local_80 = local_78 + 0xfU & 0xfffffffffffffff0;
  dVar4 = local_88;
  local_50 = lVar2;
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar2 = -local_80;
  local_70 = local_78 + 0xfU & 0xfffffffffffffff0;
  local_48 = auStack_a0 + lVar2;
  (*(code *)PTR____chkstk_darwin_02578668)();
  local_60 = (long)(auStack_a0 + lVar2) - local_70;
  local_68 = dVar4 * 1000.0;
  local_40 = (int *)PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_02578aa0;
  local_28 = dVar4;
  (**(code **)(extraout_x8 + 0x68))
            (local_60,*(undefined4 *)
                       PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_02578aa0
            );
  local_30 = local_68;
  (**(code **)(local_58 + 0x10))(local_48,local_60,local_50);
  puVar3 = local_48;
  (**(code **)(local_58 + 0x58))(local_48,local_50);
  local_34 = (int)puVar3;
  if (local_34 == *local_40) {
    local_30 = (double)(long)local_68;
  }
  else if (local_34 ==
           *(int *)PTR___ss25FloatingPointRoundingRuleO15toNearestOrEvenyA2BmFWC_02578a98) {
    local_30 = (double)(long)local_68;
  }
  else if (local_34 == *(int *)PTR___ss25FloatingPointRoundingRuleO2upyA2BmFWC_02578aa8) {
    local_30 = (double)(long)local_68;
  }
  else if (local_34 == *(int *)PTR___ss25FloatingPointRoundingRuleO4downyA2BmFWC_02578ab0) {
    local_30 = (double)(long)local_68;
  }
  else if (local_34 == *(int *)PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_02578a88) {
    local_30 = (double)(long)local_68;
  }
  else if (local_34 - *(int *)PTR___ss25FloatingPointRoundingRuleO12awayFromZeroyA2BmFWC_02578a90 ==
           0) {
    local_90 = -((long)local_68 >> 0x3f);
    if (local_90 == 0) {
      local_30 = (double)(long)local_68;
    }
    else {
      if (local_90 != 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x220eaa4);
        (*pcVar1)();
      }
      local_30 = (double)(long)local_68;
    }
  }
  else {
    __sSd14_roundSlowPathyys25FloatingPointRoundingRuleOF
              (local_34 -
               *(int *)PTR___ss25FloatingPointRoundingRuleO12awayFromZeroyA2BmFWC_02578a90,local_60)
    ;
    (**(code **)(local_58 + 8))(local_48,local_50);
  }
  local_98 = local_30;
  (**(code **)(local_58 + 8))(local_60,local_50);
  return local_98 / 1000.0;
}

