// showToView: @0x63d28

/* Function Stack Size: 0x18 bytes */

void WCMYBImageBrowser::showToView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_68;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  uVar1 = local_28;
  _objc_msgSend_bounds(local_28,local_68);
  _objc_msgSend_showToView_containerSize_(in_d2,in_d3,IVar2,local_68,uVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

