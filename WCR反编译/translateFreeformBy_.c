// translateFreeformBy: @ 0164ae30

/* Function Stack Size: 0x20 bytes */

void __thiscall
WCRSuperFloatCropViewController::translateFreeformBy_
          (WCRSuperFloatCropViewController *this,ID param_1,SEL param_2,CGPoint param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  uint local_94;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  SEL local_30;
  ID local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = param_2;
  local_28 = param_1;
  local_20 = in_d0;
  local_18 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_freeformPath_026b1ee8,param_3.field0_0x0,param_3.field1_0x8);
  _objc_retainAutoreleasedReturnValue();
  local_94 = 1;
  if (param_1 != 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_freeformClosed_026b1ef0);
    local_94 = (uint)IVar2 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((local_94 & 1) == 0) {
    _CGAffineTransformMakeTranslation(local_20,local_18);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_freeformPath_026b1ee8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_applyTransform__026b1f20;
    _memcpy(auStack_90,auStack_60,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,puVar1,auStack_90);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  return;
}

