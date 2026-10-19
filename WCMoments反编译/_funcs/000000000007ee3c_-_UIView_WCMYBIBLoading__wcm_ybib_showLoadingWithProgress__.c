// -[UIView(WCMYBIBLoading)_wcm_ybib_showLoadingWithProgress:] @0x7ee3c

void __UIView_WCMYBIBLoading__wcm_ybib_showLoadingWithProgress__
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  _objc_msgSend_wcm_ybib_addLoadingView(param_2);
  _objc_msgSend_wcm_ybib_loading(param_2,local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_showProgress_(param_1,uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

