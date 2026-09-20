// pickerView:viewForRow:forComponent:reusingView: @ 00577d80

/* Function Stack Size: 0x30 bytes */

ID WCRMomentsScheduledDatePickerPanel::pickerView_viewForRow_forComponent_reusingView_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,long_long param_5,ID param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  cfstringStruct *local_e0;
  undefined *local_b8;
  cfstringStruct *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_58;
  undefined *local_50;
  long_long local_48;
  long_long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_50 = (undefined *)0x0;
  local_48 = param_5;
  local_40 = param_4;
  _objc_storeStrong(&local_50,param_6);
  puVar2 = local_50;
  local_71 = 0;
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_b8 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc_init();
    local_71 = 1;
    local_70 = local_b8;
  }
  else {
    local_b8 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_b8;
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTextAlignment__026caa90,1);
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4031000000000000,*(undefined8 *)PTR__UIFontWeightRegular_02578158,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setAdjustsFontSizeToFitWidth__026ca850,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fe6666666666666,local_58,PTR_s_setMinimumScaleFactor__026ca9d0);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setBaselineAdjustment__026a3018,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setLineBreakMode__026ca988,2);
  if (((long)local_48 < 0) || (5 < (long)local_48)) {
    local_e0 = &::cf___;
  }
  else {
    local_e0 = *(cfstringStruct **)(&DAT_0257dee8 + local_48 * 8);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_e0;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_wcr_pickerTitleForRow_component__026a5358,local_40,local_48);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setText__026caa88);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

