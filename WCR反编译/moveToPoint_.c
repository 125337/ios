// moveToPoint: @ 008060f8

/* Function Stack Size: 0x20 bytes */

void __thiscall
WBTouchTrailView::moveToPoint_(WBTouchTrailView *this,ID param_1,SEL param_2,CGPoint param_3)

{
  undefined4 uVar1;
  ID IVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [96];
  SEL local_40;
  ID local_38;
  
  local_40 = param_2;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d0,in_d1,param_1,PTR_s_setCenter__026ca8c0,param_3.field0_0x0,param_3.field1_0x8);
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isMoving_026a8a80);
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setIsMoving__026a8a50,1);
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(0x3fe6666666666666,local_38,PTR_s_setAlpha__026ca860);
    _memcpy(auStack_a0,PTR__CGAffineTransformIdentity_025782d8,0x30);
    IVar2 = local_38;
    _memcpy(auStack_d0,auStack_a0,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setTransform__026caad0,auStack_d0);
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_useCustomImage_026a8a60);
    uVar1 = 0;
    if ((IVar2 & 1) == 0) {
      uVar1 = 0x3e99999a;
    }
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4008000000000000);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  return;
}

