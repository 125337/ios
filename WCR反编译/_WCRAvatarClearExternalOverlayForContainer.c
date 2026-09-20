// _WCRAvatarClearExternalOverlayForContainer @ 0093b0e4

void _WCRAvatarClearExternalOverlayForContainer(undefined8 param_1)

{
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    _objc_setAssociatedObject(local_18,DAT_026f4c40,0,1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

