// FUN_001d4b20 @ 001d4b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001d4b20(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  double local_40;
  double dStack_38;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  if (local_28 != 0) {
    lVar2 = local_28;
    FUN_001d3b88();
    uVar1 = (uint)lVar2;
    dVar3 = param_3;
    dVar4 = param_4;
    _CGRectIsNull();
    if (((uVar1 & 1) != 0) ||
       (dVar3 = param_3, dVar4 = param_4, _CGRectIsEmpty(), local_50 = param_1, uStack_48 = param_2,
       local_40 = param_3, dStack_38 = param_4, (uVar1 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      if ((dVar3 <= 1.0) || (dVar4 <= 1.0)) goto LAB_001d4cf4;
      uStack_48 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
      local_50 = *(undefined8 *)PTR__CGPointZero_025782e0;
      local_40 = dVar3;
      dStack_38 = dVar4;
    }
    uRam00000000028c9060 = uStack_48;
    _DAT_028c9058 = local_50;
    dRam00000000028c9070 = dStack_38;
    _DAT_028c9068 = local_40;
  }
LAB_001d4cf4:
  _objc_storeStrong(&local_28,0);
  return;
}

