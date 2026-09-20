// _WCRiFontEmbeddedTemplatesJS @ 015decf0

void _WCRiFontEmbeddedTemplatesJS(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3ba8;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025874f8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(DAT_028e3ba0);
  return;
}

