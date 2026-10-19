// wcm_yb_showTransitioningWithContainer:startView:startImage:endFrame:orientation:completion: @0x8d2e8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x58 bytes */

void WCMYBIBAnimatedTransition::
     wcm_yb_showTransitioningWithContainer_startView_startImage_endFrame_orientation_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,CGRect param_6,
               long_long param_7,ID param_8,undefined4 param_9)

{
  undefined *puVar1;
  long_long lVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long_long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 local_258;
  undefined *local_250;
  undefined4 local_248;
  undefined4 local_244;
  code *local_240;
  undefined *local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined *local_220;
  undefined4 local_218;
  undefined4 local_214;
  code *local_210;
  undefined *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  double dStack_1b8;
  double local_1b0;
  double dStack_1a8;
  undefined8 local_198;
  double local_190;
  double local_188;
  double local_180;
  undefined8 local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined8 local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined8 local_128;
  byte local_120;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  undefined8 local_98;
  byte local_8a;
  byte local_89;
  undefined8 local_88;
  long local_80;
  long local_78;
  long_long local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  SEL local_50;
  ID local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  dVar11 = param_6.field1_0x10.field1_0x8;
  dVar10 = param_6.field1_0x10.field0_0x0;
  dVar9 = param_6.field0_0x0.field1_0x8;
  local_40 = param_6.field0_0x0.field0_0x0;
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  dStack_38 = dVar9;
  local_30 = dVar10;
  dStack_28 = dVar11;
  _objc_storeStrong(&local_58,param_3);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_4);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_5);
  local_78 = 0;
  local_70 = param_7;
  _objc_storeStrong(&local_78,param_8);
  local_80 = _objc_msgSend_showType(local_48,local_258);
  if (local_80 == 2) {
    dVar9 = dStack_38;
    dVar10 = local_30;
    dVar11 = dStack_28;
    uVar5 = _CGRectIsEmpty(0,local_40);
    lVar2 = local_70;
    local_89 = 0;
    bVar4 = true;
    if (((uVar5 & 1) == 0) && (bVar4 = true, local_60 != 0)) {
      _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_258);
      local_88 = _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      lVar6 = _objc_msgSend_statusBarOrientation(local_88,local_258);
      bVar4 = lVar2 != lVar6;
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_88);
    }
    if (bVar4) {
      local_80 = 1;
    }
  }
  if (local_80 == 0) {
    (**(code **)(local_78 + 0x10))();
  }
  else if (local_80 == 1) {
    uVar5 = _CGRectIsEmpty(0,local_40,dStack_38,local_30,dStack_28);
    local_8a = (uVar5 & 1) == 0 && local_60 != 0;
    local_98 = 0;
    if ((bool)local_8a) {
      _objc_msgSend_imageViewAssimilateToView_(local_48,local_258,local_60);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      uVar8 = local_98;
      local_98 = uVar7;
      (*(code *)PTR__objc_release_00110458)(uVar8);
      dStack_b8 = dStack_38;
      local_c0 = local_40;
      dStack_a8 = dStack_28;
      local_b0 = local_30;
      dStack_d8 = dStack_38;
      local_e0 = local_40;
      dStack_c8 = dStack_28;
      local_d0 = local_30;
      _objc_msgSend_setFrame_(local_40,dStack_38,local_30,dStack_28,local_98,local_258);
      _objc_msgSend_setImage_(local_98,local_258,local_68);
      _objc_msgSend_addSubview_(local_58,local_258,local_98);
    }
    local_e8 = _objc_msgSend_alpha(local_58,local_258);
    _objc_msgSend_setAlpha_(0,local_58,local_258);
    if ((local_8a & 1) == 0) {
      (**(code **)(local_78 + 0x10))();
    }
    uVar8 = _objc_msgSend_showDuration(local_48,local_258);
    puVar1 = PTR___NSConcreteStackBlock_001104f0;
    local_118 = PTR___NSConcreteStackBlock_001104f0;
    local_110 = 0xc2000000;
    local_10c = 0;
    local_108 = 
    ___120__WCMYBIBAnimatedTransition_wcm_yb_showTransitioningWithContainer_startView_startImage_endFrame_orientation_completion___block_invoke
    ;
    local_100 = &___block_descriptor_48_e8_32s_e5_v8__0l;
    local_f8 = (*(code *)PTR__objc_retain_00110460)(local_58);
    local_f0 = local_e8;
    local_150 = puVar1;
    local_148 = 0xc2000000;
    local_144 = 0;
    local_140 = 
    ___120__WCMYBIBAnimatedTransition_wcm_yb_showTransitioningWithContainer_startView_startImage_endFrame_orientation_completion___block_invoke_2
    ;
    local_138 = &___block_descriptor_49_e8_32s40bs_e8_v12__0B8l;
    local_120 = local_8a & 1;
    local_130 = (*(code *)PTR__objc_retain_00110460)(local_98);
    local_128 = (*(code *)PTR__objc_retain_00110460)(local_78);
    _objc_msgSend_animateWithDuration_animations_completion_
              (uVar8,&_OBJC_CLASS___UIView,local_258,&local_118,&local_150);
    _objc_storeStrong(&local_128);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_98,0);
  }
  else if (local_80 == 2) {
    _objc_msgSend_imageViewAssimilateToView_(0,local_48,local_258,local_60);
    local_158 = _objc_retainAutoreleasedReturnValue();
    lVar3 = local_60;
    local_198 = _objc_msgSend_bounds(local_60,local_258);
    local_190 = dVar9;
    local_188 = dVar10;
    local_180 = dVar11;
    local_1c0 = _objc_msgSend_convertRect_toView_(local_198,lVar3,local_258,local_58);
    dStack_1b8 = dVar9;
    local_1b0 = dVar10;
    dStack_1a8 = dVar11;
    local_178 = local_1c0;
    dStack_170 = dVar9;
    local_168 = dVar10;
    dStack_160 = dVar11;
    _objc_msgSend_setFrame_(local_1c0,dVar9,dVar10,dVar11,local_158,local_258);
    _objc_msgSend_setImage_(local_158,local_258,local_68);
    _objc_msgSend_addSubview_(local_58,local_258,local_158);
    _objc_msgSend_backgroundColor(local_58,local_258);
    local_1c8 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_colorWithAlphaComponent_(0,local_1c8,local_258);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundColor_(local_58,local_258);
    (*(code *)PTR__objc_release_00110458)(uVar8);
    uVar8 = _objc_msgSend_showDuration(local_48,local_258);
    puVar1 = PTR___NSConcreteStackBlock_001104f0;
    local_220 = PTR___NSConcreteStackBlock_001104f0;
    local_218 = 0xc2000000;
    local_214 = 0;
    local_210 = 
    ___120__WCMYBIBAnimatedTransition_wcm_yb_showTransitioningWithContainer_startView_startImage_endFrame_orientation_completion___block_invoke_4
    ;
    local_208 = &___block_descriptor_88_e8_32s40s48s_e5_v8__0l;
    local_200 = (*(code *)PTR__objc_retain_00110460)(local_158);
    dStack_1e0 = dStack_38;
    local_1e8 = local_40;
    dStack_1d0 = dStack_28;
    local_1d8 = local_30;
    local_1f8 = (*(code *)PTR__objc_retain_00110460)(local_58);
    local_1f0 = (*(code *)PTR__objc_retain_00110460)(local_1c8);
    local_250 = puVar1;
    local_248 = 0xc2000000;
    local_244 = 0;
    local_240 = 
    ___120__WCMYBIBAnimatedTransition_wcm_yb_showTransitioningWithContainer_startView_startImage_endFrame_orientation_completion___block_invoke_5
    ;
    local_238 = &___block_descriptor_48_e8_32s40bs_e8_v12__0B8l;
    local_228 = (*(code *)PTR__objc_retain_00110460)(local_78);
    local_230 = (*(code *)PTR__objc_retain_00110460)(local_158);
    _objc_msgSend_animateWithDuration_animations_completion_
              (uVar8,&_OBJC_CLASS___UIView,local_258,&local_220,&local_250);
    _objc_storeStrong(&local_230);
    _objc_storeStrong(&local_228,0);
    _objc_storeStrong(&local_1f0,0);
    _objc_storeStrong(&local_1f8,0);
    _objc_storeStrong(&local_200,0);
    _objc_storeStrong(&local_1c8,0);
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  return;
}

