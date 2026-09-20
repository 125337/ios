// FUN_002d47d8 @ 002d47d8

byte FUN_002d47d8(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_d0;
  ulong local_78;
  byte local_69;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50 [3];
  undefined4 local_34;
  ulong local_30;
  byte local_21;
  
  puVar3 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar3,param_1);
  uVar2 = (uint)puVar3;
  if (local_30 == 0) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    FUN_002d50e0();
    if ((uVar2 & 1) == 0) {
      FUN_002d524c();
      if ((uVar2 & 1) == 0) {
        uVar4 = local_30;
        FUN_0029cc70();
        _objc_retainAutoreleasedReturnValue();
        local_50[0] = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_selectedViewController_0269d610);
        _objc_retainAutoreleasedReturnValue();
        local_58 = uVar4;
        if (uVar4 == 0) {
          local_21 = 0;
          local_34 = 1;
        }
        else {
          local_69 = 0;
          puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
          if ((uVar4 & 1) == 0) {
            local_d0 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_navigationController_0269d458);
            _objc_retainAutoreleasedReturnValue();
            local_69 = 1;
            local_68 = local_d0;
          }
          else {
            local_d0 = local_58;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_60 = local_d0;
          if ((local_69 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_68);
          }
          if (local_60 == 0) {
            local_21 = 0;
            local_34 = 1;
          }
          else {
            uVar4 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_viewControllers_0269e348);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar4);
            if (uVar6 < 2) {
              local_21 = 0;
              local_34 = 1;
            }
            else {
              uVar4 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_topViewController_0269e588);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = true;
              local_78 = uVar4;
              if (uVar4 != 0) {
                uVar6 = local_60;
                (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_viewControllers_0269e348);
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                bVar1 = uVar4 == uVar7;
                (*(code *)PTR__objc_release_02578630)(uVar7);
                (*(code *)PTR__objc_release_02578630)(uVar6);
              }
              if (bVar1) {
                local_21 = 0;
              }
              else {
                uVar4 = local_78;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_78,PTR_s_hidesBottomBarWhenPushed_026a1a98);
                local_21 = (byte)uVar4 & 1;
              }
              local_34 = 1;
              _objc_storeStrong(&local_78,0);
            }
          }
          _objc_storeStrong(&local_60,0);
        }
        _objc_storeStrong(&local_58);
        _objc_storeStrong(local_50,0);
      }
      else {
        local_21 = 1;
        local_34 = 1;
      }
    }
    else {
      local_21 = 0;
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

