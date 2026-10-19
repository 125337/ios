// init @0x8cc58

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBCollectionViewLayout::init(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 local_80;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  long local_18;
  
  local_18 = 0;
  local_28 = &objc::class_t::WCMYBIBCollectionViewLayout;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = _objc_msgSendSuper2(&local_30,"init");
  _objc_storeStrong(&local_18);
  if (local_18 != 0) {
    _objc_msgSend_setMinimumLineSpacing_(local_18,local_80);
    _objc_msgSend_setMinimumInteritemSpacing_(0,local_18,local_80);
    _objc_msgSend_setSectionInset_
              (*(undefined8 *)PTR__UIEdgeInsetsZero_001100b0,
               *(undefined8 *)(PTR__UIEdgeInsetsZero_001100b0 + 8),
               *(undefined8 *)(PTR__UIEdgeInsetsZero_001100b0 + 0x10),
               *(undefined8 *)(PTR__UIEdgeInsetsZero_001100b0 + 0x18),local_18,local_80);
    _objc_msgSend_setScrollDirection_(local_18,local_80,1);
    *(undefined8 *)(local_18 + _distanceBetweenPages) = 0x4034000000000000;
  }
  IVar1 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_storeStrong(&local_18,0);
  return IVar1;
}

