// refreshSelectAllButton @ 00ee5614

/* Function Stack Size: 0x10 bytes */

void WCRChatRoomPickerBridge::refreshSelectAllButton(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  double in_d0;
  undefined8 uVar8;
  double dVar9;
  undefined8 in_d1;
  long lVar10;
  long lVar11;
  undefined8 in_d2;
  double dVar12;
  double dVar13;
  undefined8 in_d3;
  double dVar14;
  double dVar15;
  double local_310;
  double local_300;
  double local_2f8;
  undefined *local_2e8;
  double local_160;
  double local_138;
  ID local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  double local_f0;
  byte local_e1;
  undefined *local_e0;
  double local_d8;
  undefined8 local_d0;
  ID local_c8;
  cfstringStruct *local_c0;
  ID local_b8;
  ID local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined4 local_54;
  undefined *local_50;
  SEL local_48;
  ID local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = param_2;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pickerController_026ab800);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined *)param_1;
  FUN_00ee347c();
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_50 == (undefined *)0x0) {
    local_54 = 1;
  }
  else {
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_viewWithTag__026cabe0,0x57435341);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_60;
      local_60 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTag__026caa80,DAT_0232c390);
      puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4030000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      in_d2 = 0x4010000000000000;
      uVar8 = 0x4010000000000000;
      in_d3 = 0x4018000000000000;
      in_d1 = 0x4018000000000000;
      FUN_00ee612c();
      puVar2 = local_60;
      local_a0 = uVar8;
      uStack_98 = in_d1;
      local_90 = in_d2;
      uStack_88 = in_d3;
      local_80 = uVar8;
      uStack_78 = in_d1;
      local_70 = in_d2;
      uStack_68 = in_d3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar8,local_60,PTR_s_setContentEdgeInsets__0269ebd0);
      FUN_00ee6178();
      _objc_retainAutoreleasedReturnValue();
      local_a8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setTitleColor_forState__026caac0,puVar2,0);
      puVar2 = local_60;
      puVar3 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fe3333333333333,local_a8,PTR_s_colorWithAlphaComponent__026ca578);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitleColor_forState__026caac0,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar2 = local_60;
      in_d0 = 0.35;
      puVar3 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_colorWithAlphaComponent__026ca578);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitleColor_forState__026caac0,puVar3,2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_40,
                 PTR_s_toggleSelectAll_026ab850,0x40);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_60);
      _objc_storeStrong(&local_a8,0);
    }
    IVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pickerController_026ab800);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    FUN_00ee61c0();
    _objc_retainAutoreleasedReturnValue();
    local_b0 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pickerController_026ab800);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    FUN_00ee6248();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_b8 = IVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = &cf_hQ;
    IVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pickerController_026ab800);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    FUN_00ee649c();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if ((IVar5 & 1) == 0) {
      IVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pickerController_026ab800);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      FUN_00ee4b18();
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      pcVar1 = &cf_hQN;
      if (IVar6 == 0) {
        pcVar1 = &cf_hQ;
      }
      local_c8 = IVar6;
      _objc_storeStrong(&local_c0,pcVar1);
    }
    else {
      IVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pickerController_026ab800);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      FUN_00ee6574();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      if ((IVar5 & 1) != 0) {
        _objc_storeStrong(&local_c0,&cf_hQN);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTitle_forState__026caab8,local_c0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTitle_forState__026caab8,local_c0,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTitle_forState__026caab8,local_c0,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setEnabled__026ca938,local_b8 != 0);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setAccessibilityLabel__0269e968,local_c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_sizeToFit_0269ec08);
    pcVar1 = local_c0;
    local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
    puVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 0;
    local_2e8 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      in_d0 = 16.0;
      local_2e8 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = local_2e8;
    }
    local_30 = local_2e8;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_e1 = puVar3 == (undefined *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_sizeWithAttributes__026cab08);
    local_d8 = in_d0;
    local_d0 = in_d1;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    if ((local_e1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_f8 = 0x4042000000000000;
    local_108 = (double)(long)local_d8 + 16.0;
    local_110 = 0x4052000000000000;
    local_2f8 = local_108;
    if (72.0 <= local_108) {
      local_2f8 = 72.0;
    }
    local_118 = local_2f8;
    local_100 = local_2f8;
    if (local_2f8 <= 36.0) {
      local_300 = 36.0;
    }
    else {
      local_300 = local_2f8;
    }
    local_120 = local_300;
    local_f0 = local_300;
    local_138 = 28.0;
    local_128 = 28.0;
    IVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pickerController_026ab800);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    FUN_00ee39b4();
    _objc_retainAutoreleasedReturnValue();
    local_130 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
    _CGRectGetHeight();
    if (local_138 <= 0.0) {
      local_138 = 56.0;
    }
    if (local_130 == 0) {
      local_310 = 16.0;
    }
    else {
      local_310 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_frame_026ca640);
      _CGRectGetMaxX(local_310,local_2f8,in_d2,in_d3);
    }
    local_160 = local_310;
    if (local_310 < 16.0) {
      local_160 = 16.0;
    }
    local_160 = local_160 + 8.0;
    lVar10 = (long)((local_138 - local_128) * 0.5);
    dVar12 = local_f0;
    dVar14 = local_128;
    FUN_00ee3968();
    puVar2 = local_60;
    dVar9 = local_160;
    lVar11 = lVar10;
    dVar13 = dVar12;
    dVar15 = dVar14;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_frame_026ca640);
    _CGRectEqualToRect(dVar9,lVar11,dVar13,dVar15,local_160,lVar10,dVar12,dVar14);
    if (((ulong)puVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_160,lVar10,dVar12,dVar14,local_60,PTR_s_setFrame__026ca960);
    }
    _objc_storeStrong(&local_130);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

