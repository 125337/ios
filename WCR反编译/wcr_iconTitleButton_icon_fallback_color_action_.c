// wcr_iconTitleButton:icon:fallback:color:action: @ 01f92758

/* Function Stack Size: 0x38 bytes */

ID WCRefineVoicePackPickerViewController::wcr_iconTitleButton_icon_fallback_color_action_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,SEL param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_58;
  undefined *local_50;
  SEL local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  local_48 = param_7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTintColor__026caab0,local_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTitleColor_forState__026caac0,local_40);
  uVar2 = local_30;
  FUN_01f8c3b8(0x4038000000000000,local_30,local_40,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setImage_forState__0269cc60,uVar2,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTitle_forState__026caab8,local_28,0);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4024000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcr_layoutFloatButtonVertical__026c98d0,local_50);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_18,local_48,0x40);
  puVar1 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

