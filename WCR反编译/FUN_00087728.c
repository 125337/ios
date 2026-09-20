// FUN_00087728 @ 00087728

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_00087728(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong local_68;
  long local_60;
  ulong local_58;
  long local_50;
  double local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  bool local_21;
  
  local_50 = 0;
  local_48 = param_1;
  uStack_40 = param_2;
  local_38 = param_3;
  uStack_30 = param_4;
  _objc_storeStrong(&local_50,param_5);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_6);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_7);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_8);
  if (((local_50 == 0) && (local_60 != 0)) && (local_68 != 0)) {
    uVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_isEqualToString__0269ccc8,_WCRAvatarSceneMyProfile);
    if (((uVar3 & 1) == 0) &&
       (uVar3 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_58,PTR_s_isEqualToString__0269ccc8,_WCRAvatarSceneFriendProfile),
       (uVar3 & 1) == 0)) {
      local_21 = false;
    }
    else {
      dVar4 = local_48;
      uVar7 = uStack_40;
      uVar9 = local_38;
      uVar11 = uStack_30;
      FUN_0007e6b8();
      if ((uVar3 & 1) == 0) {
        local_21 = false;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_bounds_026ca548);
        dVar5 = local_48;
        uVar10 = local_38;
        uVar12 = uStack_30;
        _CGRectGetMinX(local_48,uStack_40);
        dVar5 = ABS(dVar5);
        uVar8 = 0x3fe0000000000000;
        bVar1 = false;
        if (dVar5 <= 0.5) {
          dVar5 = local_48;
          uVar10 = local_38;
          uVar12 = uStack_30;
          _CGRectGetMinY(local_48,uStack_40);
          dVar5 = ABS(dVar5);
          uVar8 = 0x3fe0000000000000;
          bVar1 = false;
          if (dVar5 <= 0.5) {
            dVar5 = local_48;
            _CGRectGetWidth(local_48,uStack_40,local_38,uStack_30);
            dVar6 = dVar4;
            uVar10 = uVar9;
            uVar12 = uVar11;
            _CGRectGetWidth(dVar4,uVar7);
            dVar5 = ABS(dVar5 - dVar6);
            uVar8 = 0x3ff0000000000000;
            bVar1 = false;
            if (dVar5 <= 1.0) {
              dVar5 = local_48;
              _CGRectGetHeight(local_48,uStack_40,local_38,uStack_30);
              _CGRectGetHeight(dVar4,uVar7);
              dVar5 = ABS(dVar5 - dVar4);
              uVar8 = 0x3ff0000000000000;
              bVar1 = dVar5 <= 1.0;
              uVar10 = uVar9;
              uVar12 = uVar11;
            }
          }
        }
        if (bVar1) {
          uVar3 = local_68;
          FUN_0008d1bc(local_68,local_60);
          FUN_0007e6b8(dVar5,uVar8,uVar10,uVar12);
          if ((uVar3 & 1) == 0) {
            local_21 = false;
          }
          else {
            dVar4 = dVar5;
            _CGRectGetMinX(dVar5,uVar8,uVar10,uVar12);
            bVar1 = true;
            if (ABS(dVar4) <= 1.0) {
              dVar4 = dVar5;
              _CGRectGetMinY(dVar5,uVar8,uVar10,uVar12);
              bVar1 = 1.0 < ABS(dVar4);
            }
            dVar4 = dVar5;
            _CGRectGetWidth(dVar5,uVar8,uVar10,uVar12);
            dVar6 = local_48;
            _CGRectGetWidth(local_48,uStack_40,local_38,uStack_30);
            bVar2 = false;
            if (ABS(dVar4 - dVar6) <= 1.0) {
              _CGRectGetHeight(dVar5,uVar8,uVar10,uVar12);
              dVar4 = local_48;
              _CGRectGetHeight(local_48,uStack_40,local_38,uStack_30);
              bVar2 = ABS(dVar5 - dVar4) <= 1.0;
            }
            local_21 = false;
            if (bVar1) {
              local_21 = bVar2;
            }
          }
        }
        else {
          local_21 = false;
        }
      }
    }
  }
  else {
    local_21 = false;
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  return local_21 & 1;
}

