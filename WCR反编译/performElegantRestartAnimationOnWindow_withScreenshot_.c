// performElegantRestartAnimationOnWindow:withScreenshot: @ 014ae2d4

/* Function Stack Size: 0x20 bytes */

void WCRefineRestar::performElegantRestartAnimationOnWindow_withScreenshot_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_d0;
  undefined8 uVar4;
  undefined8 in_d1;
  undefined8 uVar5;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_188;
  undefined *local_180;
  ID local_178;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined *local_110;
  undefined8 local_108;
  undefined *local_e8 [10];
  undefined *local_98 [10];
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setFrame__026ca960);
  puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithEffect__026ca6e0);
  local_98[0] = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)(in_d0,local_98[0],PTR_s_setFrame__026ca960);
  uVar4 = 0;
  (*(code *)PTR__objc_msgSend_02578628)(local_98[0],PTR_s_setAlpha__026ca860);
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
  local_108 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,in_d1,puVar2,PTR_s_initWithFrame__026ca6e8);
  uVar5 = 0x3fe0000000000000;
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_e8[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (0,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar4 = 0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_setAlpha__026ca860);
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
  local_130 = uVar4;
  local_128 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar5,in_d2,in_d3,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_110 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addSubview__026ca4c0,local_98[0]);
  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_addSubview__026ca4c0,local_e8[0]);
  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_addSubview__026ca4c0,local_48);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_110);
  uVar4 = local_38;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_170 = PTR___NSConcreteStackBlock_02578660;
  local_168 = 0xc2000000;
  local_164 = 0;
  local_160 = FUN_014ae8d4;
  local_158 = &DAT_0257d718;
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = local_48;
  local_150 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = local_98[0];
  local_148 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = local_e8[0];
  local_140 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = local_48;
  local_138 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = local_110;
  local_188 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_180 = puVar3;
  local_178 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fd3333333333333,puVar2,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_170);
  _objc_storeStrong(&local_180,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(local_e8,0);
  _objc_storeStrong(local_98,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

