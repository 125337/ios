// FUN_00279828 @ 00279828

long FUN_00279828(undefined8 param_1)

{
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = local_18;
  FUN_0027ac10(local_18,&cf_bitRate);
  if (local_20 == 0) {
    local_20 = local_18;
    FUN_0027ac10(local_18,&cf_videoBitrate);
  }
  _objc_storeStrong(&local_18,0);
  return local_20;
}

