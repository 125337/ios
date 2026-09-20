// handleScaleCancel: @ 018237cc

/* Function Stack Size: 0x18 bytes */

void WCRefineAvatarCornerBeautifyViewController::handleScaleCancel_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_setAssociatedObject(local_18,"WCRefineScaleConfirmBlock",0,3);
  _objc_setAssociatedObject(local_18,"WCRefineScaleAlert",0,1);
  _objc_storeStrong(&local_28,0);
  return;
}

