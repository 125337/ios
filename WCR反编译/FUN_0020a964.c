// FUN_0020a964 @ 0020a964

void FUN_0020a964(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong local_80 [2];
  undefined1 local_69;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  long local_50 [3];
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  long lVar7;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    uVar4 = local_28;
    FUN_0021029c();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar4;
    if (uVar4 == 0) {
      local_2c = 1;
    }
    else {
      local_50[0] = 0;
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_contentView_026ca5a8);
      if ((uVar4 & 1) != 0) {
        uVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_contentView);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_58 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
        uVar4 = local_58;
        if ((uVar5 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_60 = uVar4;
          local_69 = 0;
          uVar1 = uVar4 != local_38;
          bVar2 = false;
          if ((bool)uVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = uVar4 == local_38;
            local_69 = uVar1;
            local_68 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar4);
            uVar1 = local_69;
          }
          local_69 = uVar1;
          if (bVar2) {
            _objc_storeStrong(local_50,local_60);
          }
          _objc_storeStrong(&local_60,0);
        }
        _objc_storeStrong(&local_58,0);
      }
      if (local_50[0] == 0) {
        uVar4 = local_38;
        FUN_0020f600();
        _objc_retainAutoreleasedReturnValue();
        local_80[0] = uVar4;
        if (((uVar4 != 0) && (uVar4 - local_38 != 0)) &&
           (FUN_0020fa00(uVar4 - local_38,uVar4,local_38), (uVar4 & 1) != 0)) {
          _objc_storeStrong(local_50,local_80[0]);
        }
        _objc_storeStrong(local_80,0);
      }
      if (local_50[0] == 0) {
        local_2c = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
        dVar8 = param_1;
        _CGRectGetWidth(param_1,param_2,param_3,param_4);
        if ((dVar8 <= 0.0) ||
           (dVar8 = param_1, uVar9 = param_2, uVar10 = param_3, uVar11 = param_4, _CGRectGetHeight()
           , dVar8 <= 0.0)) {
          local_2c = 1;
        }
        else {
          lVar7 = local_50[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_frame_026ca640);
          uVar3 = (uint)lVar7;
          FUN_00207ae0(dVar8,uVar9,uVar10,uVar11,param_1,param_2,param_3,param_4);
          if ((uVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (param_1,param_2,param_3,param_4,local_50[0],PTR_s_setFrame__026ca960);
          }
          local_2c = 0;
        }
      }
      _objc_storeStrong(local_50,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

