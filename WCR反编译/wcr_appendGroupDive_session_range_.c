// wcr_appendGroupDive:session:range: @ 01db1fbc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

void WCRefineSessionStatsBoardView::wcr_appendGroupDive_session_range_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double in_d3;
  undefined8 uVar11;
  long local_200;
  undefined *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  double local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  ID local_b8;
  undefined8 local_b0;
  double local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  long local_88;
  ulong local_80;
  ulong local_78;
  double local_50;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
  local_50 = in_d3 - 4.0;
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_speakerOrder_026af778);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_40;
  local_78 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_peopleCount_026c4d90);
  if (local_78 < uVar1) {
    local_200 = uVar1 - local_78;
  }
  else {
    local_200 = 0;
  }
  local_88 = local_200;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_80 = uVar1;
  _objc_alloc();
  uVar9 = 0;
  uVar7 = 0x4072c00000000000;
  uVar11 = 0x403c000000000000;
  dVar8 = local_50;
  FUN_01d8ec14();
  local_b0 = uVar9;
  local_a8 = dVar8;
  local_a0 = uVar7;
  local_98 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar9,dVar8,uVar7,uVar11,puVar3,PTR_s_initWithFrame__026ca6e8);
  local_90 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTag__026caa80,0x58);
  IVar6 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_>_);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_01d8f4e8();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_wcr_label_font_color__026c4e70,puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = IVar6;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setNumberOfLines__026ca9d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setTag__026caa80,0x59);
  uVar11 = 0x403c000000000000;
  uVar9 = 0;
  uVar7 = 0x4030000000000000;
  dVar8 = 180.0;
  FUN_01d8ec14();
  local_100 = uVar7;
  uStack_f8 = uVar9;
  local_f0 = dVar8;
  uStack_e8 = uVar11;
  local_d8 = uVar7;
  uStack_d0 = uVar9;
  local_c8 = dVar8;
  uStack_c0 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,uVar9,local_b8,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_addSubview__026ca4c0,local_b8);
  puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
  _objc_retainAutoreleasedReturnValue();
  local_108 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTitle_forState__026caab8,&cf_gwhQ);
  puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)();
  puVar3 = local_108;
  FUN_01da0980();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTitleColor_forState__026caac0,puVar4,0);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_108,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_wcr_openActivity_026c5050,0x40);
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_sizeToFit_0269ec08);
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_frame_026ca640);
  dVar10 = 284.0 - dVar8;
  uVar7 = 0;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_addSubview__026ca4c0,local_108);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_90);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar10,uVar7,dVar8,local_50 + 36.0,local_38,PTR_s_setFrame__026ca960);
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

