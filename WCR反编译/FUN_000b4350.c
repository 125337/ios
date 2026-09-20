// FUN_000b4350 @ 000b4350

byte FUN_000b4350(undefined8 param_1,byte param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  byte local_a0;
  undefined **local_98;
  cfstringStruct *local_90;
  byte local_81;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  cfstringStruct *local_60;
  uint local_58;
  ulong local_48;
  undefined8 local_40;
  byte local_31;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_40 = 0;
  local_31 = param_2;
  _objc_storeStrong(&local_40,param_3);
  uVar3 = local_30;
  FUN_000b4fbc();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar3;
  if (uVar3 == 0) {
    local_21 = 0;
    local_58 = 1;
    goto LAB_000b4a1c;
  }
  pcVar4 = &cf_preOpenAlbumView;
  _NSSelectorFromString();
  uVar3 = local_48;
  local_60 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar4);
  if ((uVar3 & 1) == 0) {
    local_21 = 0;
    local_58 = 1;
    goto LAB_000b4a1c;
  }
  uVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,local_60);
  _objc_retainAutoreleasedReturnValue();
  local_68 = uVar3;
  if (uVar3 == 0) {
    local_21 = 0;
    local_58 = 1;
  }
  else {
    FUN_000b53f0();
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar3;
    if (uVar3 == 0) {
      local_21 = 0;
      local_58 = 1;
    }
    else {
      uVar5 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_70;
      (*(code *)PTR__objc_release_02578630)();
      if (uVar5 == uVar3) {
        uVar3 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        local_78 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_containsObject__0269cbb8,local_68);
        bVar2 = (uVar3 & 1) != 0;
        if (bVar2) {
          uVar3 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_popToViewController_animated__0269e4f8,local_68,1);
          _objc_unsafeClaimAutoreleasedReturnValue(uVar3);
          FUN_000b5524(local_68,local_31 & 1,local_40);
          local_21 = 1;
        }
        local_58 = (uint)bVar2;
        _objc_storeStrong(&local_78,0);
        if (local_58 == 0) {
LAB_000b47ac:
          pcVar4 = &cf_PushViewController_animated_completion_;
          _NSSelectorFromString();
          uVar5 = local_70;
          local_90 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,pcVar4);
          uVar3 = local_68;
          if ((uVar5 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_70,PTR_s_PushViewController_animated__0269cd40,local_68,1);
            FUN_000b5524(local_68,local_31 & 1,local_40);
            local_21 = 1;
            local_58 = 1;
          }
          else {
            ppuVar6 = &local_d0;
            local_d0 = PTR___NSConcreteStackBlock_02578660;
            local_c8 = 0xc2000000;
            local_c4 = 0;
            local_c0 = FUN_000b5678;
            local_b8 = &DAT_02579420;
            (*(code *)PTR__objc_retain_02578638)();
            uVar1 = local_40;
            local_b0 = uVar3;
            local_a0 = local_31 & 1;
            (*(code *)PTR__objc_retain_02578638)();
            local_a8 = uVar1;
            _objc_retainBlock();
            uVar5 = local_68;
            uVar3 = local_70;
            pcVar4 = local_90;
            local_98 = ppuVar6;
            _objc_retainBlock();
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,pcVar4,uVar5,1);
            (*(code *)PTR__objc_release_02578630)(ppuVar6);
            local_21 = 1;
            local_58 = 1;
            _objc_storeStrong(&local_98);
            _objc_storeStrong(&local_a8,0);
            _objc_storeStrong(&local_b0,0);
          }
        }
      }
      else {
        local_81 = 0;
        uVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_parentViewController_0269e500);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        if (uVar3 == 0) {
          uVar5 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          local_81 = 1;
          bVar2 = uVar5 != 0;
          local_80 = uVar5;
        }
        if ((local_81 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (!bVar2) goto LAB_000b47ac;
        local_21 = 0;
        local_58 = 1;
      }
    }
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_68,0);
LAB_000b4a1c:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

