// wcm_yb_hideTransitioningWithContainer:startView:endView:orientation:completion: @0x8dd00

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x38 bytes */

void WCMYBIBAnimatedTransition::
     wcm_yb_hideTransitioningWithContainer_startView_endView_orientation_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6,ID param_7
               ,undefined4 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  code *local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  code *local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  long_long local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  long_long local_50;
  long local_48;
  long local_40;
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
  local_58 = 0;
  local_50 = param_6;
  _objc_storeStrong(&local_58,param_7);
  local_60 = _objc_msgSend_hideType(local_28,local_1f8);
  if ((local_60 == 2) && ((local_40 == 0 || (local_48 == 0)))) {
    local_60 = 1;
  }
  if (local_60 == 0) {
    (**(code **)(local_58 + 0x10))();
  }
  else if (local_60 == 1) {
    local_68 = _objc_msgSend_alpha(0,local_38,local_1f8);
    uVar3 = _objc_msgSend_hideDuration(local_28,local_1f8);
    puVar1 = PTR___NSConcreteStackBlock_001104f0;
    local_90 = PTR___NSConcreteStackBlock_001104f0;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = 
    ___108__WCMYBIBAnimatedTransition_wcm_yb_hideTransitioningWithContainer_startView_endView_orientation_completion___block_invoke
    ;
    local_78 = &___block_descriptor_40_e8_32s_e5_v8__0l;
    local_70 = (*(code *)PTR__objc_retain_00110460)(local_38);
    local_c8 = puVar1;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = 
    ___108__WCMYBIBAnimatedTransition_wcm_yb_hideTransitioningWithContainer_startView_endView_orientation_completion___block_invoke_2
    ;
    local_b0 = &___block_descriptor_56_e8_32s40bs_e8_v12__0B8l;
    local_a0 = (*(code *)PTR__objc_retain_00110460)(local_58);
    local_a8 = (*(code *)PTR__objc_retain_00110460)(local_38);
    local_98 = local_68;
    _objc_msgSend_animateWithDuration_animations_completion_
              (uVar3,&_OBJC_CLASS___UIView,local_1f8,&local_90,&local_c8);
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_70,0);
  }
  else if (local_60 == 2) {
    local_e8 = _objc_msgSend_frame(0,local_40,local_1f8);
    lVar2 = local_48;
    uStack_e0 = in_d1;
    local_d8 = in_d2;
    uStack_d0 = in_d3;
    local_128 = _objc_msgSend_bounds(local_48,local_1f8);
    local_120 = in_d1;
    local_118 = in_d2;
    local_110 = in_d3;
    _objc_msgSend_superview(local_40,local_1f8);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    local_108 = _objc_msgSend_convertRect_toView_(local_128,lVar2,local_1f8);
    uStack_100 = local_120;
    local_f8 = local_118;
    uStack_f0 = local_110;
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_backgroundColor(local_38,local_1f8);
    local_130 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_msgSend_hideDuration(local_28,local_1f8);
    puVar1 = PTR___NSConcreteStackBlock_001104f0;
    local_1b8 = PTR___NSConcreteStackBlock_001104f0;
    local_1b0 = 0xc2000000;
    local_1ac = 0;
    local_1a8 = 
    ___108__WCMYBIBAnimatedTransition_wcm_yb_hideTransitioningWithContainer_startView_endView_orientation_completion___block_invoke_7
    ;
    local_1a0 = &___block_descriptor_136_e8_32s40s48s56s_e5_v8__0l;
    local_198 = (*(code *)PTR__objc_retain_00110460)(local_38);
    local_190 = (*(code *)PTR__objc_retain_00110460)(local_130);
    local_188 = (*(code *)PTR__objc_retain_00110460)(local_40);
    local_180 = (*(code *)PTR__objc_retain_00110460)(local_48);
    local_178 = local_50;
    uStack_168 = uStack_100;
    local_170 = local_108;
    uStack_158 = uStack_f0;
    local_160 = local_f8;
    uStack_148 = uStack_e0;
    local_150 = local_e8;
    uStack_138 = uStack_d0;
    local_140 = local_d8;
    local_1f0 = puVar1;
    local_1e8 = 0xc2000000;
    local_1e4 = 0;
    local_1e0 = 
    ___108__WCMYBIBAnimatedTransition_wcm_yb_hideTransitioningWithContainer_startView_endView_orientation_completion___block_invoke_9
    ;
    local_1d8 = &___block_descriptor_56_e8_32s40s48bs_e8_v12__0B8l;
    local_1c0 = (*(code *)PTR__objc_retain_00110460)(local_58);
    local_1d0 = (*(code *)PTR__objc_retain_00110460)(local_38);
    local_1c8 = (*(code *)PTR__objc_retain_00110460)(local_130);
    _objc_msgSend_animateWithDuration_animations_completion_
              (uVar3,&_OBJC_CLASS___UIView,local_1f8,&local_1b8,&local_1f0);
    _objc_storeStrong(&local_1c8);
    _objc_storeStrong(&local_1d0,0);
    _objc_storeStrong(&local_1c0,0);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_188,0);
    _objc_storeStrong(&local_190,0);
    _objc_storeStrong(&local_198,0);
    _objc_storeStrong(&local_130,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

