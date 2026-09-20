// FUN_0008e62c @ 0008e62c

byte FUN_0008e62c(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  bool local_d9;
  ulong local_a8;
  undefined1 local_99;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  double local_70;
  double dStack_68;
  byte local_52;
  undefined1 local_51;
  ulong local_50;
  ulong local_48;
  uint local_40;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if ((local_30 == 0) ||
     (uVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isViewLoaded_0269cde0),
     (uVar3 & 1) == 0)) {
    local_21 = 0;
    local_40 = 1;
    goto LAB_0008ecc4;
  }
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  bVar2 = true;
  uVar1 = uVar3 != 0;
  local_48 = uVar3;
  if ((bool)uVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar3 == 0;
    local_51 = uVar1;
    local_50 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar1 = local_51;
  }
  local_51 = uVar1;
  if (bVar2) {
    local_21 = 0;
    local_40 = 1;
  }
  else {
    uVar3 = local_30;
    _WCRAvatarIsFriendProfileController();
    local_52 = (byte)uVar3;
    uVar3 = local_48;
    FUN_0007ff38(local_48,9);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_30;
      FUN_0008e560();
      if ((uVar3 & 1) == 0) {
        local_21 = 0;
        local_40 = 1;
      }
      else {
        uStack_78 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
        local_80 = *(undefined8 *)PTR__CGRectZero_025782f0;
        dStack_68 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
        local_70 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
        uVar3 = local_30;
        FUN_0008ed00(local_30,&local_80);
        _objc_retainAutoreleasedReturnValue();
        local_88 = uVar3;
        if (((uVar3 == 0) || (local_70 <= 0.5)) || (dStack_68 <= 0.5)) {
          local_21 = 0;
          local_40 = 1;
        }
        else {
          uVar4 = local_30;
          FUN_0007d340(local_30,uVar3);
          _objc_retainAutoreleasedReturnValue();
          local_99 = 0;
          bVar2 = true;
          uVar1 = uVar4 != 0;
          local_90 = uVar4;
          if ((bool)uVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = uVar4 == 0;
            local_99 = uVar1;
            local_98 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar4);
            uVar1 = local_99;
          }
          local_99 = uVar1;
          if (bVar2) {
            if ((local_52 & 1) != 0) {
              uVar3 = local_30;
              FUN_0007d5f0(local_80,uStack_78,local_70,dStack_68,local_30,local_88);
              _objc_retainAutoreleasedReturnValue();
              if (uVar3 != 0) {
                local_21 = 0;
              }
              local_40 = (uint)(uVar3 != 0);
              local_a8 = uVar3;
              _objc_storeStrong(&local_a8,0);
              if (local_40 != 0) goto LAB_0008ec64;
            }
            local_21 = 1;
            local_40 = 1;
          }
          else {
            if ((local_52 & 1) != 0) {
              uVar3 = local_88;
              _objc_getAssociatedObject(local_88,DAT_026df798);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar3);
              if ((long)uVar4 < 2) {
                local_d9 = false;
                if (local_90 != 0) {
                  uVar3 = local_90;
                  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_superview_026cab50);
                  _objc_retainAutoreleasedReturnValue();
                  local_d9 = uVar3 != 0;
                  (*(code *)PTR__objc_release_02578630)(uVar3);
                }
                if (!local_d9) {
                  uVar3 = local_30;
                  FUN_0007d5f0(local_80,uStack_78,local_70,dStack_68,local_30,local_88);
                  _objc_retainAutoreleasedReturnValue();
                  local_d9 = uVar3 != 0;
                  (*(code *)PTR__objc_release_02578630)();
                }
                local_21 = local_d9 ^ 1;
                local_40 = 1;
                goto LAB_0008ec64;
              }
            }
            local_21 = 0;
            local_40 = 1;
          }
LAB_0008ec64:
          _objc_storeStrong(&local_90,0);
        }
        _objc_storeStrong(&local_88,0);
      }
    }
    else {
      local_21 = 1;
      local_40 = 1;
    }
  }
  _objc_storeStrong(&local_48,0);
LAB_0008ecc4:
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

