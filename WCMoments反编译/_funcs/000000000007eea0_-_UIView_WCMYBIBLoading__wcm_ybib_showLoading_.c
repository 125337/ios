// -[UIView(WCMYBIBLoading)_wcm_ybib_showLoading] @0x7eea0

void __UIView_WCMYBIBLoading__wcm_ybib_showLoading_(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  _objc_msgSend_wcm_ybib_addLoadingView(param_1);
  _objc_msgSend_wcm_ybib_loading(param_1,local_30);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_show(uVar1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

