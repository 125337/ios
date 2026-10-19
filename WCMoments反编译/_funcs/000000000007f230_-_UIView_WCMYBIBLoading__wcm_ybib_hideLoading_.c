// -[UIView(WCMYBIBLoading)_wcm_ybib_hideLoading] @0x7f230

void __UIView_WCMYBIBLoading__wcm_ybib_hideLoading_(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 local_40;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_wcm_ybib_loading(param_1);
  local_28 = _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (local_28 != 0) {
    _objc_msgSend_superview(local_28,local_40);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    (*(code *)PTR__objc_release_00110458)(lVar2);
  }
  if (bVar1) {
    _objc_msgSend_removeFromSuperview(local_28,local_40);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

