// wcr_styleCell: @ 01dbeea0

/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsLayoutViewController::wcr_styleCell_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_f8;
  undefined *local_a0;
  undefined *local_90;
  undefined *local_80;
  undefined *local_70;
  undefined *local_60;
  undefined *local_50;
  undefined8 local_48;
  byte local_39;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_dark_026c4ca0);
  local_39 = (byte)IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAccessoryView__026b03e8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setEditingAccessoryView__026c5240,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAccessoryType__026a3220);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSelectionStyle__0269e5f8,3);
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentView_026ca5a8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeFromSuperview_026ca800);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setIndentationLevel__026be160,0);
  bVar1 = (local_39 & 1) == 0;
  if (bVar1) {
    local_60 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323cc0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    local_50 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_textLabel_0269fd00);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  bVar1 = (local_39 & 1) == 0;
  if (bVar1) {
    local_80 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c78,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    local_70 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323d60,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_detailTextLabel_0269fd08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  bVar1 = (local_39 & 1) == 0;
  local_f8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = local_f8;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323d40,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_f8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBackgroundColor__026ca888,local_f8);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_textLabel_0269fd00);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_detailTextLabel_0269fd08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

