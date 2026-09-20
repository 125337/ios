// addToolbarItemTitle:icon:action:col:row: @ 016401f0

/* Function Stack Size: 0x38 bytes */

void WCRSuperFloatCropViewController::addToolbarItemTitle_icon_action_col_row_
               (ID param_1,SEL param_2,ID param_3,ID param_4,SEL param_5,long_long param_6,
               long_long param_7)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  undefined *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined *local_60;
  long_long local_58;
  long_long local_50;
  SEL local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  local_58 = param_7;
  local_50 = param_6;
  local_48 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_setTag__026caa80,local_58 * 0x14 + 100 + local_50);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setAccessibilityLabel__0269e968,local_38);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,local_48,0x40);
  puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
  local_68 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTag__026caa80,0x321);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setContentMode__026ca8e0,1);
  pcVar3 = local_40;
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
  _objc_retainAutoreleasedReturnValue();
  FUN_01640768(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_70 == (cfstringStruct *)0x0) {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_isEqualToString__0269ccc8,&cf_icons_outlined_mosaic2);
    if (((ulong)pcVar3 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = &cf_icons_outlined_mosaic;
      FUN_01640768(0x4036000000000000);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_70;
      local_70 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setImage__026ca978,local_70);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addSubview__026ca4c0,local_68);
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
  local_78 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTag__026caa80,0x322);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setText__026caa88,local_38);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4024000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setTextAlignment__026caa90,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setAdjustsFontSizeToFitWidth__026ca850,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fe8000000000000,local_78,PTR_s_setMinimumScaleFactor__026ca9d0);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addSubview__026ca4c0,local_78);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toolbar_026b1cd0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

