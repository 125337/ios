// FUN_00595478 @ 00595478

void FUN_00595478(undefined8 param_1,byte param_2)

{
  long lVar1;
  long local_68;
  long local_28;
  byte local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  local_19 = param_2;
  FUN_00594210();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 != 0) {
    if ((local_19 & 1) == 0) {
      local_68 = 0;
    }
    else {
      local_68 = local_18;
    }
    _objc_setAssociatedObject(lVar1,PTR_s_wcr_momentsCommitBuildToken_026a5538,local_68,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

