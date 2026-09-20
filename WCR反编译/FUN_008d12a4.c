// FUN_008d12a4 @ 008d12a4

double FUN_008d12a4(double param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  double dVar4;
  double local_100;
  ulong local_e0;
  ulong local_c8;
  ulong local_70;
  ulong local_68;
  byte local_59;
  ulong local_58;
  ulong local_40;
  double local_38;
  ulong local_30;
  double local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_59 = 0;
  uVar3 = local_30;
  local_38 = param_1;
  FUN_008d10ec();
  uVar2 = (uint)uVar3;
  if (((uVar3 & 1) == 0) && (FUN_008d11c4(), (uVar2 & 1) != 0)) {
    local_c8 = local_30;
    _objc_getAssociatedObject(local_30,DAT_026f4ac0);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = local_c8;
  }
  else {
    local_c8 = 0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_c8;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  bVar1 = local_40 == 0;
  if (bVar1) {
    local_e0 = 0;
  }
  else {
    local_e0 = local_30;
    _objc_getAssociatedObject(local_30,DAT_026f4ac8);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_e0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_e0;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if ((local_40 == 0) || (local_68 == 0)) {
    local_28 = local_38;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_doubleValue_026ca608);
    dVar4 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_doubleValue_026ca608);
    if (dVar4 < param_1 - 0.5) {
      local_100 = (dVar4 + local_38) - param_1;
      if (local_100 <= 40.0) {
        local_100 = 40.0;
      }
      local_28 = local_100;
    }
    else {
      local_28 = local_38;
    }
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

