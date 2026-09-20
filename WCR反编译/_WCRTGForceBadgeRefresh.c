// _WCRTGForceBadgeRefresh @ 007acf78

void _WCRTGForceBadgeRefresh(undefined8 param_1)

{
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    _objc_setAssociatedObject(local_18,DAT_026f4648,0,1);
    _objc_setAssociatedObject(local_18,DAT_026f4650,0,1);
    FUN_007ad034(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

