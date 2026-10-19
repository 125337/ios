// initWithFrame:collectionViewLayout: @0x8c428

/* Function Stack Size: 0x38 bytes */

ID WCMYBIBCollectionView::initWithFrame_collectionViewLayout_
             (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_70;
  ID local_58;
  class_t *local_50;
  undefined8 local_48;
  SEL local_40;
  ID local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_18 = param_3.field1_0x10.field1_0x8;
  local_20 = param_3.field1_0x10.field0_0x0;
  local_28 = param_3.field0_0x0.field1_0x8;
  local_30 = param_3.field0_0x0.field0_0x0;
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_4);
  local_58 = local_38;
  local_38 = 0;
  local_50 = &objc::class_t::WCMYBIBCollectionView;
  local_38 = _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_58,
                                 "initWithFrame:collectionViewLayout:",local_48);
  _objc_storeStrong(&local_38);
  if (local_38 != 0) {
    _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_70);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBackgroundColor_(local_38,local_70);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_setPagingEnabled_(local_38,local_70,1);
    _objc_msgSend_setShowsHorizontalScrollIndicator_(local_38,local_70,0);
    _objc_msgSend_setShowsVerticalScrollIndicator_(local_38,local_70,0);
    _objc_msgSend_setAlwaysBounceVertical_(local_38,local_70,0);
    _objc_msgSend_setAlwaysBounceHorizontal_(local_38,local_70,0);
    _objc_msgSend_setDecelerationRate_
              (*(undefined8 *)PTR__UIScrollViewDecelerationRateFast_00110128,local_38,local_70);
    _objc_msgSend_setContentInsetAdjustmentBehavior_(local_38,local_70,2);
    _objc_msgSend_set(&_OBJC_CLASS___NSMutableSet,local_70);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(local_38 + (long)_reuseSet);
    *(undefined8 *)(local_38 + (long)_reuseSet) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  IVar3 = (*(code *)PTR__objc_retain_00110460)(local_38);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return IVar3;
}

