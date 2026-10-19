// forwardInvocation: @0x9caa0

/* Function Stack Size: 0x18 bytes */

void _YYImageWeakProxy::forwardInvocation_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 local_48;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_msgSend_setReturnValue_(local_28,local_48,&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

