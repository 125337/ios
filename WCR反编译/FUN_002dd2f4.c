// FUN_002dd2f4 @ 002dd2f4

byte FUN_002dd2f4(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                 undefined8 param_6,double *param_7)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double local_2f8;
  ulong local_60 [3];
  undefined4 local_44;
  double *local_40;
  ulong local_38;
  ulong local_30;
  bool local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  local_40 = param_7;
  if ((local_30 == 0) || (local_38 == 0)) {
    local_21 = false;
    local_44 = 1;
  }
  else {
    uVar2 = local_30;
    FUN_002ca9fc(local_30,0x24f753);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_60[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsString__0269d0b0,&cf_Replicant);
      if ((uVar2 & 1) == 0) {
        local_21 = false;
      }
      else {
        uVar2 = local_30;
        FUN_002ca6ec(local_30,local_38);
        uVar1 = (uint)uVar2;
        if (local_40 != (double *)0x0) {
          local_40[1] = param_2;
          *local_40 = param_1;
          local_40[3] = param_4;
          local_40[2] = param_3;
        }
        _CGRectIsNull(param_1,param_2,param_3,param_4);
        if (((uVar1 & 1) == 0) &&
           (_CGRectIsEmpty(param_1,param_2,param_3,param_4), (uVar1 & 1) == 0)) {
          dVar4 = param_1;
          _CGRectGetHeight(param_1,param_2,param_3,param_4);
          dVar5 = param_1;
          dVar9 = param_2;
          dVar8 = param_3;
          dVar10 = param_4;
          _CGRectGetWidth();
          uVar2 = local_38;
          FUN_002c93b8();
          if ((uVar2 & 1) == 0) {
            dVar6 = 0.0;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
            _CGRectGetHeight(dVar6,dVar9);
            dVar6 = dVar6 - 190.0;
            local_2f8 = dVar6;
            if (dVar6 <= 0.0) {
              local_2f8 = 0.0;
            }
            uVar2 = local_38;
            dVar9 = local_2f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
            uVar1 = (uint)uVar2;
            _CGRectGetWidth(dVar9,dVar6,dVar8,dVar10);
            dVar9 = dVar9 + 180.0;
            uVar7 = 0xc056800000000000;
            uVar3 = 0x406b800000000000;
            FUN_002adf88();
            _CGRectIntersectsRect(param_1,param_2,param_3,param_4,uVar7,local_2f8,dVar9,uVar3);
            if ((uVar1 & 1) == 0) {
              local_21 = false;
            }
            else {
              local_21 = false;
              if (dVar4 <= 160.0) {
                uVar7 = 0x4030000000000000;
                local_21 = false;
                if (16.0 <= dVar5) {
                  dVar4 = dVar5;
                  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
                  _CGRectGetWidth(dVar4,uVar7,param_3,param_4);
                  local_21 = dVar5 <= dVar4 + 120.0;
                }
              }
            }
          }
          else {
            local_21 = false;
            if (dVar4 <= 200.0) {
              uVar7 = 0x4030000000000000;
              local_21 = false;
              if (16.0 <= dVar5) {
                dVar4 = dVar5;
                (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
                _CGRectGetWidth(dVar4,uVar7,dVar8,dVar10);
                local_21 = dVar5 <= dVar4 + 120.0;
              }
            }
          }
        }
        else {
          local_21 = false;
        }
      }
      local_44 = 1;
      _objc_storeStrong(local_60,0);
    }
    else {
      local_21 = false;
      local_44 = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

