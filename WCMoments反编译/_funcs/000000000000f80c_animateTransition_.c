// animateTransition: @0xf80c

/* Function Stack Size: 0x18 bytes */

void WCMCommentTransition::animateTransition_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 in_d3;
  undefined8 local_198;
  undefined8 local_188;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 auStack_110 [48];
  undefined8 local_e0;
  undefined1 auStack_c0 [88];
  undefined8 local_68;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar3 = local_38;
  uVar2 = _objc_msgSend_presenting(local_28,local_188);
  if ((uVar2 & 1) == 0) {
    local_198 = *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_00110138;
  }
  else {
    local_198 = *(undefined8 *)PTR__UITransitionContextToViewControllerKey_00110140;
  }
  _objc_msgSend_viewControllerForKey_(uVar3,local_188,local_198);
  local_40 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_view(local_40,local_188);
  local_48 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_presenting(local_28,local_188);
  if ((uVar2 & 1) != 0) {
    local_68 = _objc_msgSend_finalFrameForViewController_(local_38,local_188,local_40);
    _objc_msgSend_setFrame_(local_68,local_48,local_188);
    _objc_msgSend_containerView(local_38,local_188);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addSubview_(uVar3,local_188,local_48);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    local_e0 = _objc_msgSend_bounds(local_48,local_188);
    _CGAffineTransformMakeTranslation(0,in_d3);
    uVar3 = local_48;
    _memcpy(auStack_110,auStack_c0,0x30);
    _objc_msgSend_setTransform_(uVar3,local_188,auStack_110);
  }
  puVar1 = PTR___NSConcreteStackBlock_001104f0;
  local_140 = PTR___NSConcreteStackBlock_001104f0;
  local_138 = 0xc2000000;
  local_134 = 0;
  local_130 = ___42__WCMCommentTransition_animateTransition___block_invoke;
  local_128 = &___block_descriptor_48_e8_32s40s_e5_v8__0l;
  local_120 = (*(code *)PTR__objc_retain_00110460)(local_48);
  local_118 = (*(code *)PTR__objc_retain_00110460)(local_28);
  local_178 = puVar1;
  local_170 = 0xc2000000;
  local_16c = 0;
  local_168 = ___42__WCMCommentTransition_animateTransition___block_invoke_483;
  local_160 = &___block_descriptor_56_e8_32s40s48s_e8_v12__0B8l;
  local_158 = (*(code *)PTR__objc_retain_00110460)(local_38);
  local_150 = (*(code *)PTR__objc_retain_00110460)(local_28);
  local_148 = (*(code *)PTR__objc_retain_00110460)(local_48);
  _objc_msgSend_animateWithDuration_delay_options_animations_completion_
            (0x3fd1eb851eb851ec,0,&_OBJC_CLASS___UIView,local_188,0,&local_140,&local_178);
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_120,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

