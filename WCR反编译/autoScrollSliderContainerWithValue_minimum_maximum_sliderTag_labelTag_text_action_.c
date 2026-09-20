// autoScrollSliderContainerWithValue:minimum:maximum:sliderTag:labelTag:text:action: @ 01a4eacc

/* Function Stack Size: 0x48 bytes */

ID WCRefineGeneralFunctionViewController::
   autoScrollSliderContainerWithValue_minimum_maximum_sliderTag_labelTag_text_action_
             (ID param_1,SEL param_2,double param_3,double param_4,double param_5,long_long param_6,
             long_long param_7,ID param_8,SEL param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  SEL local_68;
  undefined8 local_60;
  long_long local_58;
  long_long local_50;
  double local_48;
  double local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_60 = 0;
  local_58 = param_7;
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_60,param_8);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_68 = param_9;
  _objc_alloc();
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0x4065400000000000;
  uVar5 = 0x403e000000000000;
  FUN_01a30750();
  local_90 = uVar3;
  local_88 = uVar4;
  local_80 = uVar2;
  local_78 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,uVar4,uVar2,uVar5,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_70 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setUserInteractionEnabled__026caad8,1);
  puVar1 = PTR__OBJC_CLASS___UISlider_026ce248;
  _objc_alloc();
  uVar3 = 0;
  uVar5 = 0x403e000000000000;
  uVar4 = 0x405d000000000000;
  uVar2 = uVar3;
  FUN_01a30750();
  local_b8 = uVar3;
  local_b0 = uVar2;
  local_a8 = uVar4;
  local_a0 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,uVar2,uVar4,uVar5,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_98 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)((float)local_40,puVar1,PTR_s_setMinimumValue__026b2338);
  (*(code *)PTR__objc_msgSend_02578628)((float)local_48,local_98,PTR_s_setMaximumValue__026b2340);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setContinuous__026b4d68,0);
  (*(code *)PTR__objc_msgSend_02578628)((float)local_38,local_98,PTR_s_setValue__026a51b0);
  puVar1 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setTag__026caa80,local_50);
  FUN_01a4e460();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setMinimumTrackTintColor__026b2398);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_023242d0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setMaximumTrackTintColor__026b4d70);
  (*(code *)PTR__objc_release_02578630)();
  FUN_01a4e4a4();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setThumbImage_forState__026b4d78,puVar1,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setThumbImage_forState__026b4d78,local_c0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_98,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,local_68,0x1000);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addSubview__026ca4c0,local_98);
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  uVar2 = 0x405e800000000000;
  uVar3 = 0x4000000000000000;
  uVar4 = 0x4048000000000000;
  uVar5 = 0x403a000000000000;
  FUN_01a30750();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,uVar3,uVar4,uVar5,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,local_58);
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setTextAlignment__026caa90,1);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_grayColor_026a9f68)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setText__026caa88,local_60);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addSubview__026ca4c0,local_c8);
  puVar1 = local_70;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

