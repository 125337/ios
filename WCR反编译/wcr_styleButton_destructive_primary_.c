// wcr_styleButton:destructive:primary: @ 01be7cb4

/* Function Stack Size: 0x20 bytes */

void WCRMomentsDraftCardView::wcr_styleButton_destructive_primary_
               (ID param_1,SEL param_2,ID param_3,bool param_4,bool param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *local_f0;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_98;
  undefined *local_88;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  byte local_3b;
  byte local_3a;
  byte local_39;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  uVar6 = DAT_02323e88;
  uVar5 = DAT_02323d58;
  uVar4 = DAT_02323cc0;
  uVar3 = DAT_02323c68;
  uVar2 = DAT_02323c60;
  puVar8 = &local_38;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(puVar8,param_3);
  local_3b = (byte)puVar8;
  local_39 = (byte)param_4;
  local_3a = (byte)param_5;
  FUN_01be81d0();
  local_51 = 0;
  local_61 = 0;
  local_71 = 0;
  if ((local_3a & 1) == 0) {
    local_e0 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if ((local_3b & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323ec8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_e0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323f88,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = local_e0;
    }
    local_d8 = local_e0;
  }
  else {
    local_d8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,DAT_02324048,uVar2,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_d8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_d8;
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  bVar1 = (local_3b & 1) == 0;
  local_f0 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (0,DAT_02323d50,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_98 = local_f0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,uVar3,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_88 = local_f0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_f0;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if ((local_39 & 1) == 0) {
    if ((local_3a & 1) != 0) {
      puVar9 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,DAT_02323f78,0x3fee666666666666,DAT_02323f10,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = local_80;
      local_80 = puVar9;
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
  }
  else {
    puVar9 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,uVar6,uVar5,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_48;
    local_48 = puVar9;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    puVar9 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,uVar6,uVar5,uVar3,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_80;
    local_80 = puVar9;
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTitleColor_forState__026caac0,local_48,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBackgroundColor__026ca888,local_80);
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return;
}

