// FUN_006ab848 @ 006ab848

void FUN_006ab848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = param_1;
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  _CGRectGetMidX(param_1,param_2,param_3,param_4);
  uVar2 = local_30;
  local_38 = param_1;
  _CGRectGetMidY(local_30,local_28,local_20,local_18);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
  local_40 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_38;
  uVar3 = local_30;
  local_48 = puVar1;
  _CGRectGetMinY(local_30,local_28,local_20,local_18);
  FUN_006aa80c();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,uVar3,puVar1,PTR_s_moveToPoint__026a01b0);
  uVar2 = local_38;
  puVar1 = local_48;
  uVar3 = local_30;
  _CGRectGetMaxY(local_30,local_28,local_20,local_18);
  FUN_006aa80c();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,uVar3,puVar1,PTR_s_addLineToPoint__026a01b8);
  puVar1 = local_48;
  uVar2 = local_30;
  _CGRectGetMinX(local_30,local_28,local_20,local_18);
  uVar3 = local_40;
  FUN_006aa80c();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,uVar3,puVar1,PTR_s_moveToPoint__026a01b0);
  puVar1 = local_48;
  uVar2 = local_30;
  _CGRectGetMaxX(local_30,local_28,local_20,local_18);
  uVar3 = local_40;
  FUN_006aa80c();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,uVar3,puVar1,PTR_s_addLineToPoint__026a01b8);
  puVar1 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

