// FUN_002234d0 @ 002234d0

void FUN_002234d0(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar5;
  double dVar6;
  double dVar7;
  uint local_bc;
  ulong local_78;
  ulong local_68;
  ulong local_40;
  undefined4 local_38;
  undefined8 local_28;
  double local_20;
  ulong local_18;
  ulong *puVar4;
  
  puVar4 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar4,param_3);
  uVar3 = (uint)puVar4;
  local_28 = param_2;
  local_20 = param_1;
  FUN_001cf8b0();
  if ((((uVar3 & 1) == 0) || (local_18 == 0)) ||
     (uVar5 = local_18, FUN_002238b8(), (uVar5 & 1) == 0)) {
    local_38 = 1;
  }
  else {
    uVar5 = local_18;
    FUN_00223b40();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar5;
    if (uVar5 == 0) {
      local_38 = 1;
    }
    else {
      _CACurrentMediaTime();
      dVar6 = param_1;
      FUN_00223ce4(local_40);
      dVar7 = dVar6;
      FUN_001d597c();
      bVar2 = false;
      bVar1 = false;
      local_bc = 0;
      if (param_1 + DAT_02323c90 < dVar6) {
        local_68 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_bc = 0;
        if (ABS(dVar6 - dVar7) <= 0.5) {
          local_78 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          uVar5 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_bc = 0;
          if ((uVar5 & 1) != 0) {
            uVar5 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_clipsToBounds_026ca570);
            local_bc = (uint)uVar5;
          }
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      if ((local_bc & 1) == 0) {
        FUN_00223e8c(param_1 + local_20,local_40);
        FUN_00223fd8(local_18,local_40);
        FUN_0022442c(local_28,local_40);
        local_38 = 0;
      }
      else {
        local_38 = 1;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

