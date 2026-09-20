// FUN_0021548c @ 0021548c

void FUN_0021548c(undefined8 param_1,double param_2,undefined8 param_3)

{
  double dVar1;
  uint uVar2;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  uint local_f4;
  ulong local_90;
  char local_81;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong *puVar3;
  
  dVar1 = DAT_02323e58;
  puVar3 = &local_28;
  local_28 = 0;
  dVar7 = DAT_02323e58;
  _objc_storeStrong(puVar3,param_3);
  uVar2 = (uint)puVar3;
  FUN_001cf94c();
  if (((uVar2 & 1) == 0) || (local_28 == 0)) {
    local_38 = 1;
  }
  else {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar4;
    if ((uVar4 == 0) || (FUN_00215908(), (uVar4 & 1) == 0)) {
      local_38 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_translationInView__026cabb0,local_40);
      local_50 = dVar7;
      local_48 = param_2;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_velocityInView__026cabd0,local_40);
      uVar4 = local_40;
      local_68 = ABS(local_50);
      local_70 = ABS(local_48);
      local_78 = ABS(param_2);
      local_80 = ABS(dVar7);
      if (((local_70 < 3.0) || (local_81 = true, local_70 < local_68 * dVar1)) &&
         (local_81 = false, 80.0 <= local_80)) {
        local_81 = local_78 * dVar1 <= local_80;
      }
      local_60 = param_2;
      local_58 = dVar7;
      if ((bool)local_81 == false) {
        local_38 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = uVar4;
        while( true ) {
          uVar4 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_f4 = 0;
          if (uVar4 != 0) {
            uVar5 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            FUN_00215908();
            local_f4 = (uint)uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar5);
          }
          (*(code *)PTR__objc_release_02578630)(uVar4);
          if ((local_f4 & 1) == 0) break;
          uVar5 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_90;
          local_90 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
        FUN_00215cb0(0x3ff0000000000000,0x3ff3333333333333,local_90);
        _objc_storeStrong(&local_90,0);
        local_38 = 0;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

