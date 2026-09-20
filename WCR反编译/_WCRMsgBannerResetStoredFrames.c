// _WCRMsgBannerResetStoredFrames @ 001b8b30

void _WCRMsgBannerResetStoredFrames(undefined8 param_1)

{
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    _objc_setAssociatedObject(local_18,&DAT_028c8ad1,0,1);
    _objc_setAssociatedObject(local_18,&DAT_028c8ad2,0,1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

