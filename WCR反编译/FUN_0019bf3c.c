// FUN_0019bf3c @ 0019bf3c

undefined8
FUN_0019bf3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined1 *param_6)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  ulong local_98;
  undefined4 local_90;
  undefined1 local_89;
  ulong local_88;
  undefined1 local_7d;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = param_6;
  FUN_0019e67c(local_48);
  local_7d = 0;
  if (local_50 != (undefined1 *)0x0) {
    *local_50 = 1;
  }
  local_89 = 0;
  bVar2 = true;
  uVar1 = local_48 != 0;
  local_70 = param_1;
  uStack_68 = param_2;
  local_60 = param_3;
  uStack_58 = param_4;
  if ((bool)uVar1) {
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar3 == 0;
    local_89 = uVar1;
    local_88 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar1 = local_89;
  }
  local_89 = uVar1;
  if (bVar2) {
    uStack_38 = uStack_68;
    local_40 = local_70;
    uStack_28 = uStack_58;
    local_30 = local_60;
    local_90 = 1;
  }
  else {
    uVar3 = local_48;
    FUN_0019e8b0();
    _objc_retainAutoreleasedReturnValue();
    local_98 = uVar3;
    FUN_0019ef4c();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_a0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar3 & 1) == 0) {
      uStack_38 = uStack_68;
      local_40 = local_70;
      uStack_28 = uStack_58;
      local_30 = local_60;
    }
    else {
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setNeedsLayout_0269deb8);
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_layoutIfNeeded_026ca790);
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setNeedsLayout_0269deb8);
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layoutIfNeeded_026ca790);
      uVar3 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_bounds_026ca548);
      uVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_convertRect_toView__0269ded8);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      uVar3 = local_48;
      uVar6 = param_4;
      uVar7 = param_3;
      uVar8 = param_2;
      uVar9 = param_1;
      FUN_0019fd48();
      local_c0 = param_4;
      uStack_b8 = param_3;
      local_b0 = param_2;
      uStack_a8 = param_1;
      if ((uVar3 & 1) != 0) {
        local_7d = 1;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setNeedsLayout_0269deb8);
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layoutIfNeeded_026ca790);
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentView_026ca5a8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentView_026ca5a8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setNeedsLayout_0269deb8);
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_layoutIfNeeded_026ca790);
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setNeedsLayout_0269deb8);
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layoutIfNeeded_026ca790);
        uVar3 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_bounds_026ca548);
        uVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentView_026ca5a8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_convertRect_toView__0269ded8);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        local_c0 = uVar6;
        uStack_b8 = uVar7;
        local_b0 = uVar8;
        uStack_a8 = uVar9;
      }
      uVar3 = local_48;
      FUN_0019fd48(local_c0,uStack_b8,local_b0,uStack_a8);
      if ((uVar3 & 1) == 0) {
        if (local_50 != (undefined1 *)0x0) {
          *local_50 = 0;
        }
        uStack_38 = uStack_b8;
        local_40 = local_c0;
        uStack_28 = uStack_a8;
        local_30 = local_b0;
      }
      else {
        uStack_38 = uStack_68;
        local_40 = local_70;
        uStack_28 = uStack_58;
        local_30 = local_60;
      }
    }
    local_90 = 1;
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_48,0);
  return local_40;
}

