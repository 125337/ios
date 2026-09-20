// FUN_017a359c @ 017a359c

void FUN_017a359c(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  pcVar1 = &cf_WCRefineMessageBannerBeautifyViewController;
  local_20 = param_2;
  local_18 = param_1;
  _NSClassFromString();
  if (pcVar1 != (cfstringStruct *)0x0) {
    local_28 = pcVar1;
    _objc_alloc_init();
    local_30 = pcVar1;
    FUN_017af804(DAT_02324330,pcVar1);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

