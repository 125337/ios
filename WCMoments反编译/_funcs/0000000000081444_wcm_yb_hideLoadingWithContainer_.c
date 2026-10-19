// wcm_yb_hideLoadingWithContainer: @0x81444

/* Function Stack Size: 0x18 bytes */

void WCMYBIBAuxiliaryViewHandler::wcm_yb_hideLoadingWithContainer_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 local_40;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_wcm_ybib_hideLoading(local_28,local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

