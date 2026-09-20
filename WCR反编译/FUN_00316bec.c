// FUN_00316bec @ 00316bec

void FUN_00316bec(long param_1)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  uint local_174;
  long local_110;
  long local_e8;
  ulong local_a8;
  byte local_99;
  ulong local_98;
  byte local_89;
  ulong local_88;
  long local_80;
  bool local_71;
  long local_70;
  long local_68 [3];
  ulong local_50;
  long local_48;
  undefined4 local_3c;
  ulong local_38;
  long local_30;
  long local_28;
  
  uVar3 = param_1 + 0x20;
  local_30 = param_1;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_38 = uVar3;
  if (uVar3 == 0) {
    local_3c = 1;
  }
  else {
    local_48 = 0;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar3;
    while (uVar3 = local_50, local_50 != 0) {
      puVar4 = PTR__OBJC_CLASS___UITableView_026ce1a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar3 & 1) != 0) {
        _objc_storeStrong(&local_48,local_50);
        break;
      }
      uVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_50;
      local_50 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    local_3c = 2;
    _objc_storeStrong(&local_50,0);
    local_71 = false;
    bVar1 = local_48 == 0;
    if (bVar1) {
      local_e8 = 0;
    }
    else {
      local_e8 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_indexPathForCell__0269e208,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_e8;
    }
    local_71 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_68[0] = local_e8;
    if ((local_71 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    local_110 = local_48;
    if ((local_68[0] == 0) || (local_48 == 0)) {
      local_110 = 0;
    }
    else {
      lVar6 = local_68[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_section_0269e988);
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_numberOfRowsInSection__026a2008,lVar6);
    }
    local_80 = local_110;
    if (((local_68[0] == 0) || (local_110 < 1)) ||
       (lVar6 = local_68[0], (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_row_0269e210),
       lVar6 != local_80 + -1)) {
      local_3c = 1;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      local_89 = 0;
      local_99 = 0;
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_174 = 0;
      if (uVar5 != 0) {
        uVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_89 = 1;
        local_88 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_99 = 1;
        puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_98 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
        local_174 = (uint)uVar5;
      }
      if ((local_99 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      if ((local_89 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if ((local_174 & 1) != 0) {
        uVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_a8 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        uVar3 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar7);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        _objc_storeStrong(&local_a8,0);
      }
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = 0;
      if (uVar3 != 0) {
        bVar2 = *(byte *)(param_1 + 0x38);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if ((bVar2 & 1) != 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        uVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentView_026ca5a8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar7);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentView_026ca5a8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentView_026ca5a8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      local_3c = 0;
    }
    _objc_storeStrong(local_68);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

