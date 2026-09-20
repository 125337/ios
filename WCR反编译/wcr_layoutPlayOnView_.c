// wcr_layoutPlayOnView: @ 01be9c3c

/* Function Stack Size: 0x18 bytes */

void WCRMomentsDraftCardView::wcr_layoutPlayOnView_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  undefined8 in_d1;
  undefined8 uVar5;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 uVar6;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewWithTag__026cabe0,0x24f6df);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) != 0) {
    dVar3 = 28.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    _CGRectGetWidth(dVar3,in_d1);
    uVar5 = 0x3fe0000000000000;
    dVar4 = (dVar3 - 28.0) * 0.5;
    dVar3 = dVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    _CGRectGetHeight(dVar3,uVar5,in_d2,in_d3);
    dVar3 = (dVar3 - 28.0) * 0.5;
    uVar5 = 0x403c000000000000;
    uVar6 = 0x403c000000000000;
    FUN_01be5b68();
    (*(code *)PTR__objc_msgSend_02578628)(dVar4,dVar3,uVar5,uVar6,local_40,PTR_s_setFrame__026ca960)
    ;
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x402c000000000000);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

