// -[UIView(WCMYBIBToast)_wcm_ybib_toast] @0x7dea8

void __UIView_WCMYBIBToast__wcm_ybib_toast_(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_getAssociatedObject(param_1,_WCMYBIBToastKey);
  local_28 = _objc_retainAutoreleasedReturnValue();
  if (local_28 == 0) {
    lVar2 = _objc_opt_new(&objc::class_t::WCMYBIBToastView);
    lVar1 = local_28;
    local_28 = lVar2;
    (*(code *)PTR__objc_release_00110458)(lVar1);
    _objc_msgSend_setWcm_ybib_toast_(local_18,local_30,local_28);
  }
  uVar3 = (*(code *)PTR__objc_retain_00110460)(local_28);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar3);
  return;
}

