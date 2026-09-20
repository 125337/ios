// showCellActionMenuForCell:titles:actions: @ 015f2c58

/* Function Stack Size: 0x28 bytes */

void WCRQuickChatWindow::showCellActionMenuForCell_titles_actions_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 uVar12;
  undefined *local_2b0;
  double local_2a0;
  double local_298;
  double local_290;
  undefined *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  code *local_218;
  undefined *local_210;
  undefined *local_208;
  undefined *local_200;
  undefined8 local_1f8;
  double local_1f0;
  undefined *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  byte local_1b1;
  undefined *local_1b0;
  byte local_1a1;
  undefined *local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  undefined *local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  uint local_12c;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined1 local_e9;
  double local_e8;
  double local_e0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  double local_a8;
  double local_a0;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined8 local_70;
  ID local_68;
  double local_60;
  undefined8 local_58;
  double local_50;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  uVar8 = DAT_02323ff8;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissCellActionMenu_026b1298);
  local_50 = 112.0;
  local_58 = 0x4042000000000000;
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
  dVar9 = (double)uVar1;
  dVar6 = dVar9 * 36.0;
  IVar2 = local_28;
  local_60 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rootViewController_026ca820);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_68 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sidebar_026b1168);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sidebar_026b1168);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_a8 = dVar6;
  local_a0 = dVar9;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_convertRect_toView__0269ded8,local_68);
  local_88 = dVar6;
  local_80 = dVar9;
  local_78 = in_d2;
  local_70 = in_d3;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  uVar11 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
  local_e8 = dVar6;
  local_e0 = dVar9;
  (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_convertRect_toView__0269ded8,local_68);
  dVar7 = local_88;
  dVar10 = local_80;
  uVar11 = local_78;
  uVar12 = local_70;
  local_c8 = dVar6;
  local_c0 = dVar9;
  local_b8 = in_d2;
  local_b0 = in_d3;
  _CGRectGetMidX();
  dVar6 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_bounds_026ca548);
  local_110 = dVar6;
  local_108 = dVar10;
  _CGRectGetMidX(dVar6,dVar10,uVar11,uVar12);
  local_e9 = dVar6 < dVar7;
  if ((bool)local_e9) {
    dVar7 = local_88;
    _CGRectGetMinX(local_88,local_80,local_78,local_70);
    local_290 = (dVar7 - local_50) - 8.0;
  }
  else {
    local_290 = local_88;
    _CGRectGetMaxX(local_88,local_80,local_78,local_70);
    local_290 = local_290 + 8.0;
  }
  local_118 = local_290;
  local_12c = 8;
  dVar7 = local_c8;
  _CGRectGetMidY(local_c8,local_c0,local_b8);
  local_138 = dVar7 - local_60 * 0.5;
  local_160 = local_138;
  local_298 = local_138;
  if (local_138 <= (double)(long)(int)local_12c) {
    local_160 = (double)(ulong)local_12c;
    local_298 = (double)(long)(int)local_12c;
  }
  local_140 = local_298;
  local_128 = local_298;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_bounds_026ca548);
  local_168 = local_298;
  local_158 = dVar7;
  _CGRectGetHeight(local_298,local_160,dVar7,local_b0);
  local_148 = (local_298 - local_60) - 8.0;
  local_2a0 = local_148;
  if (local_128 < local_148) {
    local_2a0 = local_128;
  }
  local_170 = local_2a0;
  local_120 = local_2a0;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  dVar7 = local_118;
  dVar6 = local_120;
  dVar10 = local_50;
  dVar9 = local_60;
  FUN_015dff84();
  local_198 = dVar7;
  local_190 = dVar6;
  local_188 = dVar10;
  local_180 = dVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar7,dVar6,dVar10,dVar9,puVar4,PTR_s_initWithFrame__026ca6e8);
  local_178 = puVar4;
  FUN_015e16a4();
  local_1a1 = 0;
  local_1b1 = 0;
  local_2b0 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (((ulong)puVar4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,uVar8,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_1b1 = 1;
    local_1b0 = local_2b0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323f10,uVar8,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_1a1 = 1;
    local_1a0 = local_2b0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setBackgroundColor__026ca888,local_2b0);
  if ((local_1b1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1b0);
  }
  if ((local_1a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1a0);
  }
  puVar4 = local_178;
  (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x402a000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
  puVar5 = local_178;
  (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_178;
  (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3e6147ae);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_178;
  (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4020000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  uVar8 = 0;
  uVar11 = 0x4008000000000000;
  FUN_015dffd0();
  puVar4 = local_178;
  local_1c8 = uVar8;
  uStack_1c0 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  uStack_1d8 = uStack_1c0;
  local_1e0 = local_1c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c8,uStack_1c0);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_arrayWithCapacity__0269d9b8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_40;
  puVar5 = local_178;
  local_228 = PTR___NSConcreteGlobalBlock_02578658;
  local_220 = 0xd0800000;
  local_21c = 0;
  local_218 = FUN_015f36fc;
  local_210 = &DAT_02587538;
  local_1f8 = local_58;
  local_1f0 = local_50;
  local_1e8 = puVar4;
  (*(code *)PTR__objc_retain_02578638)();
  puVar4 = local_1e8;
  local_208 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  local_200 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_228)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_addSubview__026ca4c0,local_178);
  puVar4 = local_178;
  puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addGestureRecognizer__026ca4a8);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCellActionMenu__026b1590,local_178);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCellActionMenuLabels__026b1598,local_1e8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCellActionMenuActions__026b15a0,local_48);
  uVar8 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCellActionUsername__026b15a8);
  (*(code *)PTR__objc_release_02578630)(uVar8);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setCellActionMenuIndex__026b15b0,0xffffffffffffffff);
  _objc_storeStrong(&local_200);
  _objc_storeStrong(&local_208,0);
  _objc_storeStrong(&local_1e8,0);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

