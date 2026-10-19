// -[NSObject(WCMYBImageBrowser)_wcm_ybib_originAlpha] @0x8ebd4

undefined1  [16]
__NSObject_WCMYBImageBrowser__wcm_ybib_originAlpha_(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 local_38;
  float local_2c;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_getAssociatedObject(param_1,_WCMYBIBOriginAlphaKey);
  local_28 = _objc_retainAutoreleasedReturnValue();
  if (local_28 == 0) {
    local_2c = 1.0;
  }
  else {
    local_2c = (float)_objc_msgSend_floatValue(local_28,local_38);
  }
  auVar1._0_8_ = (double)local_2c;
  _objc_storeStrong(&local_28,0);
  auVar1._8_8_ = 0;
  return auVar1;
}

