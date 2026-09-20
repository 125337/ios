// placeSerialBadgeAtPoint: @ 01658ae0

/* Function Stack Size: 0x20 bytes */

void __thiscall
WCRSuperFloatCropViewController::placeSerialBadgeAtPoint_
          (WCRSuperFloatCropViewController *this,ID param_1,SEL param_2,CGPoint param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  double in_d0;
  double dVar5;
  double in_d1;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *local_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  ID local_48;
  SEL local_40;
  ID local_38;
  double local_30;
  double dStack_28;
  
  local_40 = param_2;
  local_38 = param_1;
  local_30 = in_d0;
  dStack_28 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_annotationSerial_026b21f8,param_3.field0_0x0,param_3.field1_0x8);
  if ((long)param_1 < 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAnnotationSerial__026b1b48,0);
  }
  IVar2 = local_38;
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_annotationSerial_026b21f8);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setAnnotationSerial__026b1b48,IVar1 + 1);
  IVar2 = local_38;
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_annotationSerial_026b21f8);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_makeSerialBadgeLabelWithNumber__026b2200,IVar1);
  _objc_retainAutoreleasedReturnValue();
  dStack_58 = dStack_28;
  local_60 = local_30;
  dStack_68 = dStack_28;
  local_70 = local_30;
  local_48 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,dStack_28,IVar2,PTR_s_setCenter__026ca8c0);
  puVar3 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
  dVar5 = local_30 - 11.0;
  dVar6 = dStack_28 - 11.0;
  uVar7 = 0x4036000000000000;
  uVar8 = 0x4036000000000000;
  local_78 = puVar3;
  FUN_0163f5dc();
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar5,dVar6,uVar7,uVar8,puVar4,PTR_s_bezierPathWithOvalInRect__026ca528);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  puVar3 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGPath_026ca478);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setPath__026caa08,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  puVar3 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setFillColor__026ca948,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  puVar3 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setStrokeColor__026caa78,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_drawCanvas_026b1bd8);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_drawCanvas_026b1bd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_setAssociatedObject(local_78,DAT_028c6018,local_48,1);
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_strokeLayers_026b2088);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_48,0);
  return;
}

