// applyName:subtitle:hexStops:direction:selected: @ 01a8617c

/* Function Stack Size: 0x34 bytes */

void WCRGradientPaletteCardCell::applyName_subtitle_hexStops_direction_selected_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6,
               bool param_7)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 local_48;
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
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameLabel_026ad1e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_subtitleLabel_026bd820);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar3 = PTR_WCRefineGradientPalette_026ce910;
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_gradientLayer_026bd810);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_configureLayer_hexStops_directio_026bd830,IVar1,local_48,0);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_checkView_026bd828);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((param_7 & 1) == 0) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x3fe0000000000000);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,DAT_02323c90,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4004000000000000);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02332e78,DAT_02332e70,DAT_02332e68,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

