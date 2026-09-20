// updateButtonBesideSlider:value: @ 018d360c

/* Function Stack Size: 0x20 bytes */

void WCRChatToolbarAdjustmentViewController::updateButtonBesideSlider_value_
               (ID param_1,SEL param_2,ID param_3,double param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
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
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_viewWithTag__026cabe0,uVar2 + 2000);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_38;
  puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
  IVar7 = local_18;
  uVar2 = local_38;
  if ((uVar1 & 1) != 0) {
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,IVar7,PTR_s_displayTextForItem_value__026b81a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTitle_forState__026caab8,IVar7,0);
    (*(code *)PTR__objc_release_02578630)(IVar7);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar5);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

