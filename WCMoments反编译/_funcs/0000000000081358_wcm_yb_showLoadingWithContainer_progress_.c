// wcm_yb_showLoadingWithContainer:progress: @0x81358

/* Function Stack Size: 0x20 bytes */

void WCMYBIBAuxiliaryViewHandler::wcm_yb_showLoadingWithContainer_progress_
               (ID param_1,SEL param_2,ID param_3,double param_4)

{
  undefined8 local_48;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_wcm_ybib_showLoadingWithProgress_(param_4,local_28,local_48);
  _objc_storeStrong(&local_28,0);
  return;
}

