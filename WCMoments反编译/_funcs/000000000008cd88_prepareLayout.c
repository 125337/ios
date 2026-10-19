// prepareLayout @0x8cd88

/* Function Stack Size: 0x10 bytes */

void WCMYBIBCollectionViewLayout::prepareLayout(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_80;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = &objc::class_t::WCMYBIBCollectionViewLayout;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_30,"prepareLayout");
  _objc_msgSend_collectionView(local_18,local_80);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_bounds(uVar1,local_80);
  _objc_msgSend_setItemSize_(in_d2,in_d3,local_18,local_80);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

