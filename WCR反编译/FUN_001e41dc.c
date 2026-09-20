// FUN_001e41dc @ 001e41dc

byte FUN_001e41dc(undefined8 param_1,double param_2,undefined8 param_3,double param_4,ulong param_5)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  double dVar4;
  double dVar6;
  uint local_9c;
  ulong local_98;
  byte local_8a;
  byte local_89;
  ulong local_88;
  double local_80;
  ulong uStack_78;
  undefined4 local_70;
  byte local_69;
  ulong local_68;
  double local_50;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  ulong uStack_30;
  bool local_21;
  ulong uVar5;
  
  local_40 = 0;
  local_38 = param_4;
  uStack_30 = param_5;
  _objc_storeStrong(&local_40,param_3);
  local_69 = 0;
  local_9c = 1;
  local_50 = param_2;
  local_48 = param_1;
  if (local_40 != 0) {
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_9c = 1;
    if ((uVar3 & 1) != 0) {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_clipsToBounds_026ca570);
      local_9c = (uint)uVar3 ^ 1;
    }
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_9c & 1) == 0) {
    uStack_78 = uStack_30;
    local_80 = local_38;
    dVar4 = local_38;
    dVar6 = local_38;
    FUN_001e488c(local_38,uStack_30);
    if (((ulong)dVar4 & 1) == 0) {
      if (uStack_30 == 0) {
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        uVar2 = (uint)uVar5;
        FUN_001dbb90(dVar6,0);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if ((uVar2 & 1) == 0) {
          local_21 = false;
          local_70 = 1;
          goto LAB_001e4850;
        }
      }
      else {
        local_89 = 0;
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        FUN_001dbb90(dVar6,local_48);
        bVar1 = true;
        if ((uVar5 & 1) != 0) {
          uVar5 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          local_89 = 1;
          local_88 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = uVar5 != uStack_30;
        }
        if ((local_89 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_88);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (bVar1) {
          local_21 = false;
          local_70 = 1;
          goto LAB_001e4850;
        }
      }
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar4 = DAT_02323cd0;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (dVar6 <= dVar4) {
        local_8a = 1;
        if (((((ulong)local_38 & 1) == 0) && (local_8a = 1, ((ulong)local_38 & 0x100) == 0)) &&
           (local_8a = 1, ((ulong)local_38 & 0x10000) == 0)) {
          local_8a = local_38._3_1_;
        }
        local_8a = local_8a & 1;
        uVar3 = local_40;
        _objc_getAssociatedObject(local_40,DAT_026dfa98);
        _objc_retainAutoreleasedReturnValue();
        if ((local_50 <= 0.0) || ((local_8a & 1) == 0)) {
          local_21 = uVar3 == 0;
        }
        else {
          local_21 = uVar3 != 0;
        }
        local_70 = 1;
        local_98 = uVar3;
        _objc_storeStrong(&local_98,0);
      }
      else {
        local_21 = false;
        local_70 = 1;
      }
    }
    else {
      uVar3 = local_40;
      FUN_001e5330(local_48,local_50);
      if ((uVar3 & 1) == 0) {
        local_21 = false;
        local_70 = 1;
      }
      else {
        uVar3 = local_40;
        _objc_getAssociatedObject(local_40,DAT_026dfa98);
        _objc_retainAutoreleasedReturnValue();
        local_21 = uVar3 == 0;
        (*(code *)PTR__objc_release_02578630)();
        local_70 = 1;
      }
    }
  }
  else {
    local_21 = false;
    local_70 = 1;
  }
LAB_001e4850:
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

