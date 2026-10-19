// setWcm_yb_cellData: @0x6b8c4

/* Function Stack Size: 0x18 bytes */

void WCMYBIBImageCell::setWcm_yb_cellData_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 local_40;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_storeStrong(local_18 + (long)_wcm_yb_cellData,local_28);
  _objc_msgSend_setDelegate_(local_28,local_40,local_18);
  _objc_storeStrong(&local_28,0);
  return;
}

