// FUN_0010248c @ 0010248c

void FUN_0010248c(double param_1,double param_2,undefined8 param_3,double param_4,undefined8 param_5
                 )

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double local_3e0;
  double local_3d8;
  uint local_2c4;
  ulong local_60;
  ulong local_58;
  long local_50;
  long local_48;
  undefined4 local_40;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  if (uVar1 == 0) {
    lVar2 = 1;
    local_40 = 1;
  }
  else {
    for (local_48 = 0; lVar2 = local_48 + -1, local_48 == 0 || lVar2 == 0; local_48 = local_48 + 1)
    {
      local_50 = local_48;
      uVar1 = local_28;
      FUN_000fad94(local_28,local_48,0);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar1;
      FUN_000faf34();
      if ((uVar1 & 1) == 0) {
        local_40 = 4;
        dVar4 = param_1;
        local_3e0 = param_2;
      }
      else {
        uVar1 = local_58;
        _objc_getAssociatedObject(local_58,DAT_026df8a0);
        _objc_retainAutoreleasedReturnValue();
        local_2c4 = 1;
        local_60 = uVar1;
        if (uVar1 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_CGSizeValue_0269ec50);
          uVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
          local_2c4 = (uint)uVar1;
          FUN_00102bd4();
          local_2c4 = local_2c4 ^ 1;
        }
        if ((local_2c4 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
          dVar4 = param_4;
          uVar7 = param_3;
          dVar3 = param_2;
          dVar5 = param_1;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
          _CGRectGetWidth(dVar4,uVar7,dVar3,dVar5);
          dVar3 = param_1;
          _CGRectGetWidth(param_1,param_2);
          dVar4 = dVar4 - dVar3;
          local_3e0 = dVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_safeAreaInsets_026ca828);
          local_3e0 = local_3e0 + 8.0;
          dVar5 = local_3e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
          _CGRectGetHeight();
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_safeAreaInsets_026ca828);
          dVar6 = param_1;
          _CGRectGetHeight(param_1,param_2,param_3,param_4);
          local_3d8 = ((dVar5 - dVar3) - dVar6) - 8.0;
          dVar3 = param_1;
          _CGRectGetMinY(param_1,param_2,param_3,param_4);
          if (dVar3 < local_3d8) {
            local_3d8 = dVar3;
          }
          if (local_3e0 < local_3d8) {
            local_3e0 = local_3d8;
          }
          dVar3 = param_1;
          _CGRectGetMinX(param_1,param_2,param_3,param_4);
          if (ABS(dVar4 - dVar3) < 0.5) {
            uVar7 = param_3;
            dVar3 = param_4;
            _CGRectGetMinY(param_1,param_2);
            if (ABS(local_3e0 - param_1) < 0.5) {
              local_40 = 4;
              dVar4 = ABS(local_3e0 - param_1);
              local_3e0 = 0.5;
              param_3 = uVar7;
              param_4 = dVar3;
              goto LAB_00102b28;
            }
          }
          FUN_000fa79c();
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setFrame__026ca960);
          local_40 = 0;
        }
        else {
          _objc_setAssociatedObject(local_58,DAT_026df888,0,1);
          FUN_000fb0dc(local_28,local_58,local_50);
          local_40 = 4;
          dVar4 = param_1;
          local_3e0 = param_2;
        }
LAB_00102b28:
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_58,0);
      param_1 = dVar4;
      param_2 = local_3e0;
    }
    local_40 = 0;
  }
  _objc_storeStrong(lVar2,&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

