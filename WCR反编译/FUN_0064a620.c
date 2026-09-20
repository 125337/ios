// FUN_0064a620 @ 0064a620

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0064a620(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  double dVar9;
  ulong local_a8;
  ulong local_a0;
  byte local_91;
  ulong local_90;
  byte local_82;
  byte local_81;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  ulong *puVar5;
  
  dVar2 = DAT_02323d38;
  puVar5 = &local_38;
  local_38 = 0;
  dVar9 = DAT_02323d38;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(puVar5,param_3);
  uVar4 = (uint)puVar5;
  FUN_006620a0();
  if ((uVar4 & 1) == 0) {
    FUN_0066c488(local_28,1);
    (*DAT_028cbb68)(local_28,local_30,local_38);
    local_48 = 1;
  }
  else {
    uVar6 = local_38;
    FUN_0066af54();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar6;
    FUN_00666cb0();
    if ((uVar6 & 1) != 0) {
      FUN_0066426c(local_38,local_50,&cf_updateWithCellData_before);
    }
    FUN_0066b2cc(local_38);
    uVar6 = local_38;
    FUN_0066c6c4();
    if ((uVar6 & 1) != 0) {
      uVar6 = local_38;
      FUN_0066c76c();
      _objc_retainAutoreleasedReturnValue();
      FUN_006653a8(&cf_H);
      (*(code *)PTR__objc_release_02578630)(uVar6);
    }
    FUN_0066c8ac(local_28,local_38);
    FUN_0066ce54(&cf_u,local_28,local_38);
    (*DAT_028cbb68)(local_28,local_30,local_38);
    FUN_0066ce54(&cf_u,local_28,local_38);
    uVar6 = local_38;
    FUN_0066af54();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar6;
    FUN_00666cb0();
    if ((uVar6 & 1) == 0) {
      uVar6 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if (uVar6 == 0) {
        uVar6 = local_38;
        FUN_00664010();
        _objc_retainAutoreleasedReturnValue();
        local_60 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
        if ((uVar6 != 0) && (uVar7 = local_60, FUN_006620c0(uVar6), (uVar7 & 1) == 0)) {
          FUN_00663f60(local_38);
        }
        _objc_storeStrong(&local_60,0);
      }
      else {
        uVar6 = local_58;
        FUN_006638c8();
        if ((uVar6 & 1) != 0) {
          uVar6 = local_38;
          FUN_00662d08();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          FUN_00663124();
          _objc_retainAutoreleasedReturnValue();
          local_68 = uVar7;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          uVar6 = local_68;
          FUN_00663614();
          if ((uVar6 & 1) != 0) {
            FUN_0066c02c(local_38);
            FUN_00663f60(local_38);
          }
          _objc_storeStrong(&local_68,0);
        }
      }
    }
    else {
      FUN_0066426c(local_38,local_58,&cf_updateWithCellData_after);
    }
    uVar6 = local_28;
    FUN_00655d64(local_28,"m_greenLabel");
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar6;
    FUN_0066cee4();
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
    if (((uVar6 != 0) &&
        (uVar6 = local_78,
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,local_58),
        (uVar6 & 1) != 0)) && (uVar7 = local_78, FUN_00666cb0(), uVar6 = local_70, (uVar7 & 1) != 0)
       ) {
      puVar8 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar8);
      uVar7 = local_70;
      if ((uVar6 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = false;
        if (uVar7 == local_28) {
          uVar6 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isHidden_026ca768);
          bVar1 = false;
          if ((uVar6 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_alpha_026ca4d8);
            bVar1 = dVar2 < dVar9;
          }
        }
        (*(code *)PTR__objc_release_02578630)(uVar7);
        if (bVar1) {
          FUN_0066426c(local_38,local_78,&cf_updateWithCellData_nativeRed_after);
        }
        _objc_storeStrong(&local_80,0);
      }
    }
    uVar6 = local_38;
    FUN_0066c6c4();
    local_81 = (byte)uVar6;
    local_82 = (byte)local_28;
    FUN_0066cfc4();
    uVar7 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028cbc90);
    _objc_retainAutoreleasedReturnValue();
    local_91 = 0;
    puVar8 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_90 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar8);
    uVar6 = local_90;
    if ((uVar7 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = uVar6;
      bVar1 = false;
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isHidden_026ca768);
      bVar3 = false;
      if ((uVar6 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_alpha_026ca4d8);
        bVar3 = false;
        if (dVar2 < dVar9) {
          local_a8 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          bVar3 = local_a8 != 0;
        }
      }
      local_91 = bVar3;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      _objc_storeStrong(&local_a0,0);
    }
    if ((((local_81 & 1) == 0) && ((local_82 & 1) == 0)) && ((local_91 & 1) == 0)) {
      FUN_0066d7d0(local_28,0);
      FUN_0066d970(local_28);
    }
    else {
      FUN_0066d09c(local_28,local_38);
      FUN_0066d740(&cf_H,local_28,local_38);
    }
    uVar6 = local_38;
    FUN_0066db9c();
    _objc_retainAutoreleasedReturnValue();
    FUN_00657450(&cf_H);
    (*(code *)PTR__objc_release_02578630)(uVar6);
    FUN_0066dcbc(local_28,local_38,&cf_updateWithCellData);
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    local_48 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

