// _WCRefineCancelManualFakeEngagementForDataItem @ 00546644

void _WCRefineCancelManualFakeEngagementForDataItem(undefined8 param_1)

{
  long lVar1;
  long local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 == 0) || ((DAT_028cb368 & 1) != 0)) {
    local_1c = 1;
  }
  else {
    lVar1 = local_18;
    FUN_00546750();
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar1;
    FUN_00546a48(local_18,1);
    FUN_00546c4c(local_18);
    FUN_00546e94(local_18);
    FUN_00547070(local_18);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

