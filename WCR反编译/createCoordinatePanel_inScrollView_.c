// createCoordinatePanel:inScrollView: @ 01d43c38

/* Function Stack Size: 0x20 bytes */

void WCRefineScreenshotFrameEditorViewController::createCoordinatePanel_inScrollView_
               (ID param_1,SEL param_2,double param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double in_d2;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined8 local_188;
  double local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined *local_168;
  undefined8 local_160;
  double local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined8 local_138;
  double local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined *local_118;
  double local_110;
  int local_104;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  double local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  double local_b0;
  undefined8 local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  local_60 = param_3;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_68,param_4);
  local_70 = 0x4066800000000000;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  dVar10 = local_60;
  IVar2 = local_50;
  dVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  in_d2 = in_d2 - 40.0;
  uVar6 = 0x4034000000000000;
  uVar11 = local_70;
  local_b0 = dVar5;
  FUN_01d42a30();
  local_90 = uVar6;
  local_88 = dVar10;
  local_80 = in_d2;
  local_78 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,dVar10,puVar1,PTR_s_initWithFrame__026ca6e8);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setCoordinatePanel__026c4710);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  uVar8 = 0x3ff0000000000000;
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323ff8,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x4020000000000000;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  uVar6 = local_68;
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar12 = 0x4034000000000000;
  dVar10 = in_d2 - 30.0;
  uVar6 = 0x402e000000000000;
  uVar9 = 0x4024000000000000;
  local_f8 = uVar7;
  local_f0 = uVar8;
  local_e8 = in_d2;
  local_e0 = uVar11;
  FUN_01d42a30();
  local_d8 = uVar6;
  local_d0 = uVar9;
  local_c8 = dVar10;
  local_c0 = uVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,uVar9,dVar10,uVar12,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_b8 = puVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setText__026caa88,&cf_pMO_nxte);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
             PTR_s_boldSystemFontOfSize__0269cf28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02324020,DAT_02339db0,DAT_02323e70,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_48 = &cf__N;
  local_40 = &cf_SN;
  local_38 = &cf__N;
  local_30 = &cf_SN;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  local_100 = puVar1;
  for (local_104 = 0; local_104 < 4; local_104 = local_104 + 1) {
    local_110 = (double)(local_104 * 0x23 + 0x28);
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    uVar6 = 0x402e000000000000;
    uVar11 = 0x404e000000000000;
    uVar7 = 0x403e000000000000;
    dVar10 = local_110;
    FUN_01d42a30();
    local_138 = uVar6;
    local_130 = dVar10;
    local_128 = uVar11;
    local_120 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,dVar10,uVar11,uVar7,puVar1,PTR_s_initWithFrame__026ca6e8);
    puVar4 = local_100;
    local_118 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100,PTR_s_objectAtIndexedSubscript__0269cc78,(long)local_104);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setText__026caa88);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fd3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    uVar7 = 0x403e000000000000;
    uVar6 = 0x4054000000000000;
    uVar11 = 0x4034000000000000;
    dVar10 = local_110;
    FUN_01d42a30();
    local_160 = uVar6;
    local_158 = dVar10;
    local_150 = uVar11;
    local_148 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,dVar10,uVar11,uVar7,puVar1,PTR_s_initWithFrame__026ca6e8);
    local_140 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setText__026caa88,&cf_X_);
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar1 = PTR__OBJC_CLASS___UITextField_026ce2a0;
    _objc_alloc();
    uVar11 = 0x4054000000000000;
    uVar7 = 0x403e000000000000;
    uVar6 = 0x4059000000000000;
    dVar10 = local_110;
    FUN_01d42a30();
    local_188 = uVar6;
    local_180 = dVar10;
    local_178 = uVar11;
    local_170 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,dVar10,uVar11,uVar7,puVar1,PTR_s_initWithFrame__026ca6e8);
    local_168 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setBorderStyle__026aa180);
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setKeyboardType__026aec58);
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4028000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setTag__026caa80,(long)(local_104 << 1));
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_50,
               PTR_s_coordinateFieldChanged__026c4720);
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    uVar11 = 0x4034000000000000;
    uVar7 = 0x403e000000000000;
    uVar6 = 0x4067c00000000000;
    dVar10 = local_110;
    FUN_01d42a30();
    local_1b0 = uVar6;
    local_1a8 = dVar10;
    local_1a0 = uVar11;
    local_198 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,dVar10,uVar11,uVar7,puVar1,PTR_s_initWithFrame__026ca6e8);
    local_190 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setText__026caa88,&cf_Y_);
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4026000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar1 = PTR__OBJC_CLASS___UITextField_026ce2a0;
    _objc_alloc();
    uVar11 = 0x4054000000000000;
    uVar7 = 0x403e000000000000;
    uVar6 = 0x406a400000000000;
    dVar10 = local_110;
    FUN_01d42a30();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,dVar10,uVar11,uVar7,puVar1,PTR_s_initWithFrame__026ca6e8);
    local_1b8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setBorderStyle__026aa180,3);
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_setKeyboardType__026aec58,4);
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4028000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1b8,PTR_s_setTag__026caa80,(long)(local_104 * 2 + 1));
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1b8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_50,
               PTR_s_coordinateFieldChanged__026c4720,0x20000);
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_coordinatePanel_026c4718);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (local_104 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setLeftTopXField__026c4728,local_168);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setLeftTopYField__026c4730,local_1b8);
    }
    else if (local_104 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setRightTopXField__026c4738,local_168);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setRightTopYField__026c4740,local_1b8);
    }
    else if (local_104 == 2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setLeftBottomXField__026c4748,local_168);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setLeftBottomYField__026c4750,local_1b8);
    }
    else if (local_104 == 3) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setRightBottomXField__026c4758,local_168)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setRightBottomYField__026c4760,local_1b8)
      ;
    }
    _objc_storeStrong(&local_1b8);
    _objc_storeStrong(&local_190,0);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_140,0);
    _objc_storeStrong(&local_118,0);
  }
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isDoubleMode_026c4670);
  if ((IVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSecondSetFields_026c4768);
  }
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

