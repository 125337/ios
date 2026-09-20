// clearDataItemCacheFlag: @ 010c7994

/* Function Stack Size: 0x18 bytes */

void WCRefineMomentsMonitor::clearDataItemCacheFlag_(ID param_1,SEL param_2,ID param_3)

{
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 != 0) {
    _objc_setAssociatedObject(local_28,DAT_0280e1a0,0,1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

