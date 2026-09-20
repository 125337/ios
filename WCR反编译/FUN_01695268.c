// FUN_01695268 @ 01695268

void FUN_01695268(byte param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_158;
  undefined *local_138;
  undefined8 local_c0;
  undefined *local_98;
  undefined *local_88;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  undefined *local_58 [3];
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  byte local_22;
  byte local_21;
  
  uVar2 = DAT_02324040;
  local_38 = 0;
  local_30 = param_3;
  local_22 = param_2;
  local_21 = param_1;
  _objc_storeStrong(&local_38,param_4);
  puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
  _objc_retainAutoreleasedReturnValue();
  if ((local_21 & 1) == 0) {
    local_c0 = *(undefined8 *)PTR__UIFontWeightMedium_02578150;
  }
  else {
    local_c0 = *(undefined8 *)PTR__UIFontWeightSemibold_02578160;
  }
  puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402e000000000000,local_c0,PTR__OBJC_CLASS___UIFont_026cdfc0,
             PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3feb333333333333);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_40;
  if ((local_21 & 1) == 0) {
    local_61 = 0;
    local_71 = 0;
    local_138 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if ((local_22 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fc3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_138;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323e70,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = local_138;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58[0] = local_138;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    bVar1 = (local_22 & 1) == 0;
    local_158 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,uVar2,uVar2,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_98 = local_158;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323ec8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_88 = local_158;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_158;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setTitleColor_forState__026caac0,local_58[0],0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBackgroundColor__026ca888,local_80);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(local_58,0);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTitleColor_forState__026caac0,puVar4,0);
    (*(code *)PTR__objc_release_02578630)();
    FUN_01698180();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  puVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4020000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_38,local_30,0x40);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  puVar3 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

