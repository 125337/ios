// wcm_yb_preload @0x7b314

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageData::wcm_yb_preload(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 local_30;
  
  _objc_msgSend_delegate(param_1);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 == 0) {
    _objc_msgSend_loadData(param_1,local_30);
  }
  return;
}

