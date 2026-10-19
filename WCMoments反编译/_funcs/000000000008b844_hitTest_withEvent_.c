// hitTest:withEvent: @0x8b844

/* Function Stack Size: 0x28 bytes */

ID __thiscall
WCMYBIBContainerView::hitTest_withEvent_
          (WCMYBIBContainerView *this,ID param_1,SEL param_2,CGPoint param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ID IVar4;
  WCMYBIBContainerView *local_58;
  class_t *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ID local_38;
  WCMYBIBContainerView *local_30;
  double local_28;
  double local_20;
  undefined8 local_18;
  
  local_20 = param_3.field1_0x8;
  local_28 = param_3.field0_0x0;
  local_40 = 0;
  local_38 = param_1;
  local_30 = this;
  _objc_storeStrong(&local_40,param_2);
  local_58 = local_30;
  local_50 = &objc::class_t::WCMYBIBContainerView;
  _objc_msgSendSuper2(local_28,local_20,&local_58,"hitTest:withEvent:",local_40);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_48 = uVar1;
  uVar2 = _objc_opt_class(local_30);
  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
  if ((uVar3 & 1) == 0) {
    local_18 = (*(code *)PTR__objc_retain_00110460)(local_48);
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  IVar4 = _objc_autoreleaseReturnValue(local_18);
  return IVar4;
}

