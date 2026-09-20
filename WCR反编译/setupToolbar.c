// setupToolbar @ 01fa042c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkEditorViewController::setupToolbar(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_d2;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double in_d3;
  undefined *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  double local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  double local_168;
  undefined8 local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined1 local_141;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_130;
  undefined8 uStack_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_88;
  double local_80;
  undefined8 local_70;
  double local_68;
  undefined8 local_60;
  double local_38;
  SEL local_30;
  ID local_28;
  
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_60 = 0x4046000000000000;
  local_68 = 0.0;
  IVar3 = local_28;
  local_38 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_modalPresentationStyle_026aa5b8);
  if (IVar3 == 6) {
    local_68 = 20.0;
  }
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  dVar7 = local_38 + local_68;
  IVar3 = local_28;
  dVar12 = dVar7;
  dVar13 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar8 = 0;
  uVar4 = local_60;
  local_a8 = dVar12;
  local_a0 = dVar13;
  FUN_01fa0f08();
  local_88 = uVar8;
  local_80 = dVar7;
  local_70 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar8,dVar7,in_d2,uVar4,puVar2,PTR_s_initWithFrame__026ca6e8);
  uVar4 = *(undefined8 *)(local_28 + (long)_toolbarView);
  *(undefined8 *)(local_28 + (long)_toolbarView) = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323c68,0x3fee666666666666,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_toolbarView),PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_toolbarView),PTR_s_setAutoresizingMask__026ca878,2);
  puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0;
  uVar8 = 0x4024000000000000;
  uVar11 = 0x404e000000000000;
  uVar4 = local_60;
  local_b0 = puVar2;
  FUN_01fa0f08();
  local_f0 = uVar8;
  uStack_e8 = uVar9;
  local_e0 = uVar11;
  uStack_d8 = uVar4;
  local_d0 = uVar8;
  uStack_c8 = uVar9;
  local_c0 = uVar11;
  uStack_b8 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar9,uVar11,uVar4,local_b0,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setTitle_forState__026caab8,&cf_Sm);
  puVar2 = local_b0;
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitleColor_forState__026caac0,puVar5,0);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_cancelButtonTapped_026b85d8);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_toolbarView),PTR_s_addSubview__026ca4c0,local_b0);
  puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0;
  dVar12 = 60.0;
  uVar8 = 0x4054000000000000;
  uVar4 = local_60;
  local_f8 = puVar2;
  FUN_01fa0f08();
  local_140 = uVar8;
  uStack_138 = uVar9;
  local_130 = dVar12;
  uStack_128 = uVar4;
  local_118 = uVar8;
  uStack_110 = uVar9;
  local_108 = dVar12;
  uStack_100 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setTitle_forState__026caab8,&cf_n_,0);
  puVar2 = local_f8;
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemOrangeColor_026cab80);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitleColor_forState__026caac0,puVar5,0);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_f8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_resetButtonTapped_026c4778,0x40);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_toolbarView),PTR_s_addSubview__026ca4c0,local_f8);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editNightVariant_026c9d50);
  local_141 = false;
  if ((IVar3 & 1) != 0) {
    local_141 = *(long *)(local_28 + (long)_watermarkTag) < 100;
  }
  local_150 = 0;
  if (*(long *)(local_28 + (long)_watermarkTag) < 100) {
    pcVar1 = &cf_teY4lpSMOn_;
    if ((bool)local_141 == false) {
      pcVar1 = &cf_te4lpSMOn_;
    }
    _objc_storeStrong(&local_150,pcVar1);
  }
  else {
    _objc_storeStrong(*(long *)(local_28 + (long)_watermarkTag) + -100,&local_150,&cf_te4lpSMOn_);
  }
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar13 = dVar12 - 300.0;
  uVar6 = 0x4062c00000000000;
  uVar10 = 0;
  uVar11 = local_60;
  local_198 = uVar8;
  local_190 = uVar9;
  local_188 = dVar12;
  local_180 = uVar4;
  FUN_01fa0f08();
  local_178 = uVar6;
  local_170 = uVar10;
  local_168 = dVar13;
  local_160 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_158 = puVar2;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setText__026caa88,local_150);
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setTextAlignment__026caa90);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_boldSystemFontOfSize__0269cf28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setAutoresizingMask__026ca878,2);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_toolbarView),PTR_s_addSubview__026ca4c0,local_158);
  puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  local_1a0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar8 = 0;
  dVar13 = dVar13 - 70.0;
  uVar9 = 0x404e000000000000;
  uVar4 = local_60;
  FUN_01fa0f08();
  (*(code *)PTR__objc_msgSend_02578628)(dVar13,uVar8,uVar9,uVar4,local_1a0,PTR_s_setFrame__026ca960)
  ;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setAutoresizingMask__026ca878,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setTitle_forState__026caab8,&cf_OX_);
  puVar2 = local_1a0;
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBlueColor_026cab58);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitleColor_forState__026caac0,puVar5,0);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1a0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_saveButtonTapped_026c46a0,0x40);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_toolbarView),PTR_s_addSubview__026ca4c0,local_1a0);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_1a0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_b0,0);
  return;
}

