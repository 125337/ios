// layoutAttributesForElementsInRect: @0x8ce30

/* Function Stack Size: 0x30 bytes */

ID WCMYBIBCollectionViewLayout::layoutAttributesForElementsInRect_
             (ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 local_118;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  ID local_68;
  class_t *local_60;
  undefined8 local_58;
  SEL local_50;
  ID local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  local_28 = param_3.field1_0x10.field1_0x8;
  local_30 = param_3.field1_0x10.field0_0x0;
  local_38 = param_3.field0_0x0.field1_0x8;
  local_40 = param_3.field0_0x0.field0_0x0;
  local_50 = param_2;
  local_48 = param_1;
  uVar1 = _objc_alloc(&_OBJC_CLASS___NSArray);
  local_68 = local_48;
  local_60 = &objc::class_t::WCMYBIBCollectionViewLayout;
  dVar4 = local_38;
  dVar5 = local_30;
  dVar6 = local_28;
  _objc_msgSendSuper2(local_40,&local_68,"layoutAttributesForElementsInRect:");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_58 = _objc_msgSend_initWithArray_copyItems_(uVar1,local_118,uVar2,1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_collectionView(local_48,local_118);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_90 = _objc_msgSend_bounds(uVar1,local_118);
  uVar2 = 0x4000000000000000;
  local_88 = dVar4;
  local_80 = dVar5;
  local_78 = dVar6;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  local_70 = dVar5 / 2.0;
  _objc_msgSend_collectionView(local_48,local_118);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_a8 = (double)_objc_msgSend_contentOffset(uVar1,local_118);
  dVar4 = local_a8 + local_70;
  local_a0 = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = local_58;
  local_b0 = local_70;
  local_b8 = dVar4;
  local_98 = dVar4;
  local_c0 = (*(code *)PTR__objc_retain_00110460)(local_48);
  _objc_msgSend_enumerateObjectsUsingBlock_(uVar1,local_118);
  uVar1 = (*(code *)PTR__objc_retain_00110460)(local_58);
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_58,0);
  IVar3 = _objc_autoreleaseReturnValue(uVar1);
  return IVar3;
}

