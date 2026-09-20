// updateLayoutSliderValueButton:value: @ 018cce70

/* Function Stack Size: 0x20 bytes */

void WCRefineChatToolbarViewController::updateLayoutSliderValueButton_value_
               (ID param_1,SEL param_2,ID param_3,double param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ID IVar6;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  double local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  uVar3 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_viewWithTag__026cabe0,uVar2 + 0xc1c);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_38;
  puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((uVar1 & 1) == 0) {
    local_3c = 1;
    goto LAB_018cd0d4;
  }
  FUN_018c6f28();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_48 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  if ((long)uVar2 < 0) {
LAB_018ccfec:
    local_3c = 1;
  }
  else {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
    uVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    IVar6 = local_18;
    uVar2 = local_38;
    uVar1 = local_48;
    if ((long)uVar5 <= (long)uVar3) goto LAB_018ccfec;
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_objectAtIndexedSubscript__0269cc78,uVar3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,IVar6,PTR_s_layoutSliderDisplayTextForItem_v_026b8040);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTitle_forState__026caab8,IVar6,0);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_3c = 0;
  }
  _objc_storeStrong(&local_48,0);
LAB_018cd0d4:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

