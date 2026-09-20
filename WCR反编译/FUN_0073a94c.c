// FUN_0073a94c @ 0073a94c

void FUN_0073a94c(ulong param_1)

{
  undefined8 local_18;
  
  _WCRSideloadShareFixIsGroupRemapExtensionProcess();
  if ((param_1 & 1) == 0) {
    _WCRSideloadShareFixResolvedGroupID();
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else {
    local_18 = 0;
    FUN_007393fc();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

