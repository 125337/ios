// makeEditorBarButton:icon:fallback:action: @ 0195c98c

/* Function Stack Size: 0x30 bytes */

ID WCRefineFileManagerPreviewViewController::makeEditorBarButton_icon_fallback_action_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,SEL param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_b0;
  undefined *local_60;
  undefined *local_58;
  SEL local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_5);
  puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  local_50 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_58 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitleColor_forState__026caac0,puVar2,0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_40;
  FUN_0195cde0(0x4036000000000000,local_40,0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    if (local_48 == (cfstringStruct *)0x0) {
      local_b0 = &cf_questionmark;
    }
    else {
      local_b0 = local_48;
    }
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,local_b0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_60;
    local_60 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_60;
    puVar3 = PTR__OBJC_CLASS___UIImageSymbolConfiguration_026ce640;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4032000000000000,PTR__OBJC_CLASS___UIImageSymbolConfiguration_026ce640,
               PTR_s_configurationWithPointSize_weigh_026ca588,4);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_imageWithConfiguration__026b9d60);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_60;
    local_60 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_imageWithRenderingMode__026ca690,2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_60;
    local_60 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTintColor__026caab0);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setImage_forState__0269cc60,local_60);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTitle_forState__026caab8,local_38,0);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4024000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutPreviewBtnVertical__026b9d68,local_58);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,local_50,0x40);
  puVar1 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

