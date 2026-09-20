// configureBadgeContentOnOverlay:text:size: @ 010e3d84

/* Function Stack Size: 0x30 bytes */

void WCRefineNameplateHelper::configureBadgeContentOnOverlay_text_size_
               (ID param_1,SEL param_2,ID param_3,ID param_4,CGSize param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 in_d0;
  double in_d1;
  undefined8 uVar7;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 uVar8;
  cfstringStruct *local_1d8;
  double local_1b8;
  double local_1b0;
  undefined *local_198;
  undefined *local_178;
  double local_108;
  undefined *local_d8;
  undefined *local_c8;
  ID local_c0;
  byte local_b1;
  undefined *local_b0;
  byte local_a1;
  undefined *local_a0;
  ID local_98;
  byte local_89;
  undefined *local_88 [5];
  undefined *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  SEL local_40;
  ID local_38;
  double local_28;
  
  local_48 = (undefined *)0x0;
  local_40 = param_2;
  local_38 = param_1;
  local_28 = in_d1;
  _objc_storeStrong(&local_48,param_3,param_3,param_4,param_5.field0_0x0,param_5.field1_0x8);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_4);
  puVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_viewWithTag__026cabe0,0x24f6f9);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar2;
  if (puVar2 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_removeFromSuperview_026ca800);
  }
  puVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_viewWithTag__026cabe0,0x24f6fa);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_60 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_removeFromSuperview_026ca800);
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,in_d1,in_d2,in_d3,puVar3,PTR_s_initWithFrame__026ca6e8);
    puVar2 = local_60;
    local_60 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTag__026caa80,_WCR_NAMEPLATE_TEXT_TAG);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTextAlignment__026caa90,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setUserInteractionEnabled__026caad8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setAutoresizingMask__026ca878,0x12);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addSubview__026ca4c0,local_60);
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_38;
  local_88[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isDarkMode_0269f410);
  IVar5 = local_38;
  local_89 = (byte)IVar4;
  local_a1 = 0;
  local_b1 = 0;
  local_178 = local_88[0];
  if ((IVar4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_nameplateBadgeBgColorLight_026ae940);
    _objc_retainAutoreleasedReturnValue();
    local_b1 = 1;
    local_b0 = local_178;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_nameplateBadgeBgColorDark_026ae938);
    _objc_retainAutoreleasedReturnValue();
    local_a1 = 1;
    local_a0 = local_178;
  }
  uVar6 = 0x3fd6666666666666;
  uVar8 = 0x3ff0000000000000;
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fee666666666666,DAT_02324258,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_colorFromHex_fallback__026ae948,local_178);
  _objc_retainAutoreleasedReturnValue();
  local_98 = IVar5;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((local_b1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  IVar5 = local_38;
  bVar1 = (local_89 & 1) == 0;
  local_198 = local_88[0];
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_nameplateBadgeTextColorLight_026ae958);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = local_198;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_nameplateBadgeTextColorDark_026ae950);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = local_198;
  }
  local_1b0 = 0.15;
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fc3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_colorFromHex_fallback__026ae948,local_198);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = IVar5;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_nameplateBadgeFontSize_026ae960);
  if (local_1b0 <= 0.0) {
    local_1b8 = local_28 * DAT_02323c98;
    if (local_1b8 <= 10.0) {
      local_1b8 = 10.0;
    }
    local_1b0 = local_1b8;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_nameplateBadgeFontSize_026ae960);
  }
  local_108 = local_1b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_nameplateBadgeCornerRadius_026ae968);
  if (local_108 < 0.0) {
    local_108 = local_28 * 0.5;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setBackgroundColor__026ca888,local_98);
  puVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_108);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setClipsToBounds__026ca8c8,1);
  if (local_50 == (cfstringStruct *)0x0) {
    local_1d8 = &::cf__;
  }
  else {
    local_1d8 = local_50;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setText__026caa88,local_1d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTextColor__026caa98,local_c0);
  uVar7 = *(undefined8 *)PTR__UIFontWeightSemibold_02578160;
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1b0,uVar7,uVar6,uVar8,local_60,PTR_s_setFrame__026ca960);
  puVar2 = local_48;
  uVar6 = DAT_0280e1d8;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_badge___);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(puVar2,uVar6,puVar3,3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(local_88,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  return;
}

