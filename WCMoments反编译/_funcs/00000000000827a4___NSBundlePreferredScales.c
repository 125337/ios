// __NSBundlePreferredScales @0x827a4

void __NSBundlePreferredScales(void)

{
  undefined8 local_20;
  long *local_18;
  
  local_18 = &__NSBundlePreferredScales_onceToken;
  local_20 = 0;
  _objc_storeStrong(&local_20,&___block_literal_global_101);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  _objc_retainAutoreleaseReturnValue(__NSBundlePreferredScales_scales);
  return;
}

