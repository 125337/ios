// attachSerialBadgeToStroke: @ 016588e4

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::attachSerialBadgeToStroke_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  ID local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((local_28 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_path_0269d4d8),
     IVar3 = local_18, lVar1 == 0)) {
    local_2c = 1;
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotationSerial_026b21f8);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_setAnnotationSerial__026b1b48,IVar2 + 1);
    IVar3 = local_18;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotationSerial_026b21f8);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_makeSerialBadgeLabelWithNumber__026b2200,IVar2);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    lVar1 = local_28;
    local_38 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_path_0269d4d8);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_badgeAnchorForStrokePath__026b2208,lVar1);
    (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,local_38,PTR_s_setCenter__026ca8c0);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_drawCanvas_026b1bd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_setAssociatedObject(local_28,DAT_028c6018,local_38,1);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

