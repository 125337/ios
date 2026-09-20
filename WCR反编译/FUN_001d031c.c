// FUN_001d031c @ 001d031c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001d031c(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong local_40;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  bVar2 = false;
  bVar1 = true;
  if (local_28 != 0) {
    local_40 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    bVar1 = true;
    if (local_40 != 0) {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isHidden_026ca768);
      bVar1 = true;
      if ((uVar4 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_alpha_026ca4d8);
        bVar1 = param_1 <= DAT_02323cd0;
        param_2 = DAT_02323cd0;
      }
    }
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (!bVar1) {
    uVar4 = local_28;
    FUN_001d3b88();
    uVar3 = (uint)uVar4;
    _CGRectIsNull(param_1,param_2,param_3,param_4);
    if (((((uVar3 & 1) == 0) && (_CGRectIsEmpty(param_1,param_2,param_3,param_4), (uVar3 & 1) == 0))
        && (1.0 < param_3)) && (((1.0 < param_4 && (24.0 <= param_3)) && (24.0 <= param_4)))) {
      uVar4 = local_28;
      _DAT_028c9038 = param_1;
      dRam00000000028c9040 = param_2;
      _DAT_028c9048 = param_3;
      dRam00000000028c9050 = param_4;
      FUN_001d3ce0();
      DAT_026dfa70 = uVar4;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

