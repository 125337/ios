// hitTest:withEvent: @0x8cae8

/* Function Stack Size: 0x28 bytes */

ID __thiscall
WCMYBIBCollectionView::hitTest_withEvent_
          (WCMYBIBCollectionView *this,ID param_1,SEL param_2,CGPoint param_3,ID param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 local_78;
  WCMYBIBCollectionView *local_50;
  class_t *local_48;
  undefined8 local_40;
  undefined8 local_38;
  ID local_30;
  WCMYBIBCollectionView *local_28;
  double local_20;
  double local_18;
  
  local_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  local_38 = 0;
  local_30 = param_1;
  local_28 = this;
  _objc_storeStrong(&local_38,param_2);
  local_50 = local_28;
  local_48 = &objc::class_t::WCMYBIBCollectionView;
  _objc_msgSendSuper2(local_20,local_18,&local_50,"hitTest:withEvent:",local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  uVar3 = _objc_opt_class(&_OBJC_CLASS___UISlider);
  uVar1 = _objc_opt_isKindOfClass(uVar2,uVar3);
  _objc_msgSend_setScrollEnabled_(local_28,local_78,(uVar1 ^ 1) & 1);
  uVar2 = (*(code *)PTR__objc_retain_00110460)(local_40);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  IVar4 = _objc_autoreleaseReturnValue(uVar2);
  return IVar4;
}

