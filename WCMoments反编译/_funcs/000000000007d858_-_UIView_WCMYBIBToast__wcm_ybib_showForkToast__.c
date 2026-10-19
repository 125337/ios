// -[UIView(WCMYBIBToast)_wcm_ybib_showForkToast:] @0x7d858

void __UIView_WCMYBIBToast__wcm_ybib_showForkToast__
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_40;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_wcm_ybib_showToastWithText_type_hideAfterDelay_
            (0x3ffb333333333333,local_18,local_40,local_28,2);
  _objc_storeStrong(&local_28,0);
  return;
}

