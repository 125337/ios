// _WCRChatToolbarRefreshActions @ 00eeffc4

void _WCRChatToolbarRefreshActions(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  _objc_storeStrong(&DAT_028e2ae0,0);
  uVar1 = 1;
  FUN_00ef0034();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

