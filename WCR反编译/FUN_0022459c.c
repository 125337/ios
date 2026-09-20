// FUN_0022459c @ 0022459c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_0022459c(double param_1,undefined8 param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  double dVar4;
  double local_180;
  double local_178;
  double local_118;
  double local_f8;
  ulong local_30;
  double local_28;
  
  puVar2 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar2,param_2);
  uVar1 = (uint)puVar2;
  FUN_001d597c();
  local_28 = param_1;
  if (((((local_30 != 0) &&
        (_CGRectIsNull(_DAT_028c9058,uRam00000000028c9060,_DAT_028c9068,dRam00000000028c9070),
        (uVar1 & 1) == 0)) &&
       (dVar4 = _DAT_028c9068, local_180 = dRam00000000028c9070, _CGRectIsEmpty(), (uVar1 & 1) == 0)
       ) && ((uVar3 = local_30,
             (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548), 1.0 < dVar4 &&
             (1.0 < local_180)))) && ((1.0 < _DAT_028c9068 && (1.0 < dRam00000000028c9070)))) {
    local_178 = local_180 / dRam00000000028c9070;
    if (dVar4 / _DAT_028c9068 < local_178) {
      local_178 = dVar4 / _DAT_028c9068;
    }
    local_f8 = local_178;
    FUN_00224fa4(local_178);
    if (((uVar3 & 1) == 0) || (local_178 < 1.0)) {
      local_f8 = 1.0;
    }
    if (dVar4 < local_180) {
      local_180 = dVar4;
    }
    local_118 = param_1 * local_f8;
    if (local_180 * 0.5 < param_1 * local_f8) {
      local_118 = local_180 * 0.5;
    }
    local_28 = local_118;
  }
  _objc_storeStrong(&local_30,0);
  return local_28;
}

