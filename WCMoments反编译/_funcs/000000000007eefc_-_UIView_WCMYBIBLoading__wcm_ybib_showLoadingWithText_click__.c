// -[UIView(WCMYBIBLoading)_wcm_ybib_showLoadingWithText:click:] @0x7eefc

void __UIView_WCMYBIBLoading__wcm_ybib_showLoadingWithText_click__
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_58;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  _objc_msgSend_wcm_ybib_addLoadingView(local_18,local_58);
  _objc_msgSend_wcm_ybib_loading(local_18,local_58);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_showText_click_(uVar1,local_58,local_28,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

