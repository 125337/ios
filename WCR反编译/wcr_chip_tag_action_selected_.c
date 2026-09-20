// wcr_chip:tag:action:selected: @ 01dd01ec

/* Function Stack Size: 0x2c bytes */

ID WCRefineSessionStatsViewController::wcr_chip_tag_action_selected_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,SEL param_5,bool param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *local_108;
  undefined *local_f8;
  undefined *local_98;
  undefined *local_88;
  undefined *local_78;
  undefined *local_68;
  undefined *local_58;
  byte local_49;
  SEL local_48;
  long_long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_49 = (byte)param_6;
  puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  local_48 = param_5;
  local_40 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitle_forState__026caab8,local_38,0);
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402c000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTag__026caa80,local_40);
  puVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4030000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_dark_026c4ca0);
  if ((local_49 & 1) == 0) {
    bVar1 = (IVar4 & 1) == 0;
    local_f8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02332e50,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_f8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323ec8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_f8;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setBackgroundColor__026ca888,local_f8);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    puVar2 = local_58;
    bVar1 = (IVar4 & 1) == 0;
    local_108 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fc3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_98 = local_108;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      local_88 = local_108;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitleColor_forState__026caac0,local_108,0)
    ;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323da8,DAT_02323f80,DAT_02324040,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_58;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitleColor_forState__026caac0,puVar3,0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,local_48,0x40);
  puVar2 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

