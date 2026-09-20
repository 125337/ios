// _WCRefineEnhancedAdBlockInstallRuntimeSupport @ 00f55ed4

void _WCRefineEnhancedAdBlockInstallRuntimeSupport(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e2d90;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02583138);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

