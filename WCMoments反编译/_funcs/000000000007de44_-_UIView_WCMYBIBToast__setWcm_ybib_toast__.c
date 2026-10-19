// -[UIView(WCMYBIBToast)_setWcm_ybib_toast:] @0x7de44

void __UIView_WCMYBIBToast__setWcm_ybib_toast__
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_setAssociatedObject(local_18,_WCMYBIBToastKey,local_28,1);
  _objc_storeStrong(&local_28,0);
  return;
}

