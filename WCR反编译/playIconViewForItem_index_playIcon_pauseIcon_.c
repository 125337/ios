// playIconViewForItem:index:playIcon:pauseIcon: @ 01f8ac9c

/* Function Stack Size: 0x30 bytes */

ID WCRefineVoicePackPickerViewController::playIconViewForItem_index_playIcon_pauseIcon_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_110;
  undefined8 local_b0;
  byte local_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long_long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_48 = 0;
  local_40 = param_4;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  uVar4 = 0;
  uVar7 = 0x4041000000000000;
  uVar6 = 0x4041000000000000;
  local_58 = puVar2;
  FUN_01f8af58();
  local_a0 = uVar4;
  uStack_98 = uVar5;
  local_90 = uVar6;
  uStack_88 = uVar7;
  local_78 = uVar4;
  uStack_70 = uVar5;
  local_68 = uVar6;
  uStack_60 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,uVar6,uVar7,local_58,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTag__026caa80,local_40);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isPreviewingItem__026c9b78,local_38);
  local_a1 = (byte)IVar3;
  if ((IVar3 & 1) == 0) {
    local_110 = local_48;
  }
  else {
    local_110 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setImage_forState__0269cc60,local_110,0);
  uVar7 = 0x4018000000000000;
  uVar4 = 0x4018000000000000;
  uVar5 = 0x4018000000000000;
  uVar6 = 0x4018000000000000;
  FUN_01f88678();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar5,uVar6,uVar7,local_58,PTR_s_setContentEdgeInsets__0269ebd0);
  pcVar1 = &cf_f_P_T;
  if ((local_a1 & 1) == 0) {
    pcVar1 = &cf__T;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setAccessibilityLabel__0269e968,pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_playIconTapped__026c9b80,0x40);
  puVar2 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

