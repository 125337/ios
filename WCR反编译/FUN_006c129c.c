// FUN_006c129c @ 006c129c

byte FUN_006c129c(undefined8 param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_006c1804();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 == 0) {
    local_11 = 0;
  }
  else {
    pcVar2 = &cf_MMInputMsgReferView;
    _NSClassFromString();
    lVar1 = local_28;
    FUN_006c19a8(local_28,pcVar2);
    local_11 = (byte)lVar1 & 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

