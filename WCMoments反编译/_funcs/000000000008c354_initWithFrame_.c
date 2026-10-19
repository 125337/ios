// initWithFrame: @0x8c354

/* Function Stack Size: 0x30 bytes */

ID WCMYBIBCollectionView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 local_60;
  ID local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_18 = param_3.field1_0x10.field1_0x8;
  local_20 = param_3.field1_0x10.field0_0x0;
  local_28 = param_3.field0_0x0.field1_0x8;
  local_30 = param_3.field0_0x0.field0_0x0;
  local_38 = param_1;
  uVar2 = _objc_opt_new(&objc::class_t::WCMYBIBCollectionViewLayout);
  uVar3 = *(undefined8 *)(local_38 + (long)_layout);
  *(undefined8 *)(local_38 + (long)_layout) = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar3);
  IVar4 = local_38;
  puVar1 = (undefined8 *)(local_38 + (long)_layout);
  local_38 = 0;
  local_38 = _objc_msgSend_initWithFrame_collectionViewLayout_
                       (local_30,local_28,local_20,local_18,IVar4,local_60,*puVar1);
  IVar4 = (*(code *)PTR__objc_retain_00110460)();
  _objc_storeStrong(&local_38,0);
  return IVar4;
}

