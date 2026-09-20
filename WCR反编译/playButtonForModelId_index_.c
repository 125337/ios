// playButtonForModelId:index: @ 01f5a838

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineVoiceCloneListViewController::playButtonForModelId_index_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  cfstringStruct *local_128;
  cfstringStruct *local_c0;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  byte local_91;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined *local_48;
  long_long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  local_40 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  uVar5 = 0;
  uVar8 = 0x4041000000000000;
  uVar7 = 0x4041000000000000;
  local_48 = puVar3;
  FUN_01f56e6c();
  local_90 = uVar5;
  uStack_88 = uVar6;
  local_80 = uVar7;
  uStack_78 = uVar8;
  local_68 = uVar5;
  uStack_60 = uVar6;
  local_58 = uVar7;
  uStack_50 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar6,uVar7,uVar8,local_48,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTag__026caa80,local_40);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isPreviewingModelId__026c94f0,local_38);
  local_91 = (byte)IVar4;
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323c70,DAT_02323c98,0x3fd3333333333333,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = (local_91 & 1) == 0;
  local_a0 = puVar3;
  if (bVar1) {
    local_128 = &cf_voice_circle_regular;
    FUN_01f5abe4(0x4036000000000000,&cf_voice_circle_regular,puVar3,&cf_waveform_circle);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = local_128;
  }
  else {
    local_128 = &cf_pause_filled;
    FUN_01f5abe4(0x4036000000000000,&cf_pause_filled,puVar3,&cf_pause_fill);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = local_128;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = local_128;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setImage_forState__0269cc60,local_a8,0);
  uVar8 = 0x4018000000000000;
  uVar5 = 0x4018000000000000;
  uVar6 = 0x4018000000000000;
  uVar7 = 0x4018000000000000;
  FUN_01f5aef0();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar6,uVar7,uVar8,local_48,PTR_s_setContentEdgeInsets__0269ebd0);
  pcVar2 = &cf_f_P_T;
  if ((local_91 & 1) == 0) {
    pcVar2 = &cf__T;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setAccessibilityLabel__0269e968,pcVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_previewButtonTapped__026c94f8,0x40);
  puVar3 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar3;
}

