// updateExtraButtonOffsetValueButtonInContainer:tag:value: @ 019b5600

/* Function Stack Size: 0x28 bytes */

void WCRefineFloatingTabBarButtonActionViewController::
     updateExtraButtonOffsetValueButtonInContainer_tag_value_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,double param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_40;
  double local_38;
  long_long local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  local_38 = param_5;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,param_4 + 0x1964);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  local_40 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar1 = local_40;
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTitle_forState__026caab8,puVar3,0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

