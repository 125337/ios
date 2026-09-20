// FUN_00446438 @ 00446438

void FUN_00446438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *local_70;
  ulong local_68;
  uint local_5c;
  ulong local_58 [3];
  ulong local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar4 = local_38;
  local_40 = 0;
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar6 = local_38;
  if ((uVar4 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar6 & 1) != 0) {
      _objc_storeStrong(&local_40,local_38);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_58[0] = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_state_026cab20);
    if (uVar6 == 3) {
      uVar5 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_40;
      local_40 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    local_5c = (uint)(uVar6 != 3);
    _objc_storeStrong(local_58,0);
    if (local_5c != 0) goto LAB_00446984;
  }
  if (local_40 == 0) {
    local_5c = 1;
    goto LAB_00446984;
  }
  uVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_accessibilityIdentifier_0269ec20);
  _objc_retainAutoreleasedReturnValue();
  local_68 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqualToString__0269ccc8,&cf___manage__);
  uVar2 = (uint)uVar4;
  if ((uVar4 & 1) == 0) {
    uVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf___cancel__);
    if ((uVar4 & 1) == 0) {
      uVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf___new__);
      if ((uVar4 & 1) == 0) {
        puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_selectedFilterPackRel_026a3dd0);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_68;
        local_70 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,puVar3);
        bVar1 = (uVar4 & 1) == 0;
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLocalEmoticonStore_026ce440,
                     PTR_s_setSelectedFilterPackRel__026a3ac0,local_68);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_WCRLE_applyChipSelection_026a3bc0);
          uVar7 = local_28;
          FUN_004502e0();
          _objc_retainAutoreleasedReturnValue();
          FUN_00450dc0();
          (*(code *)PTR__objc_release_02578630)(uVar7);
        }
        local_5c = (uint)!bVar1;
        _objc_storeStrong(&local_70,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_WCRLE_promptCreateGroup_026a3bd0);
        local_5c = 1;
      }
    }
    else {
      FUN_0043c270();
      _objc_setAssociatedObject(local_28,DAT_026e0368,0,3);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_WCRLE_reloadLocalChips_026a3bb0);
      uVar7 = local_28;
      FUN_004502e0();
      _objc_retainAutoreleasedReturnValue();
      FUN_00450dc0();
      (*(code *)PTR__objc_release_02578630)(uVar7);
      local_5c = 1;
    }
  }
  else {
    if (DAT_028ca9b8 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_WCRLE_presentManageSheet_026a3bf8);
    }
    else {
      FUN_0045839c();
      if ((uVar2 & 1) == 0) {
        local_5c = 1;
        goto LAB_00446974;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_WCRLE_finishPanelOp_026a3c00);
    }
    local_5c = 1;
  }
LAB_00446974:
  _objc_storeStrong(&local_68,0);
LAB_00446984:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

