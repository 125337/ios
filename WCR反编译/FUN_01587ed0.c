// FUN_01587ed0 @ 01587ed0

void FUN_01587ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_5);
  if (local_18 != 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bounds_026ca548);
    _CGRectIsEmpty();
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bounds_026ca548);
      uVar1 = local_18;
      uVar4 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,uVar4,puVar2,
                 PTR_s_bezierPathWithRoundedRect_corner_026ca530);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGPath_026ca478);
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

