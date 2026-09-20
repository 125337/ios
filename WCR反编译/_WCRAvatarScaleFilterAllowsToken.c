// _WCRAvatarScaleFilterAllowsToken @ 0093a218

byte _WCRAvatarScaleFilterAllowsToken(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (-1 < param_2) {
    param_2 = param_2 + -5;
  }
  lVar1 = local_20;
  _WCRAvatarScaleFilterModeFromString(param_2);
  if (lVar1 == 0) {
    local_11 = 1;
  }
  else {
    lVar2 = local_20;
    _WCRAvatarScaleFilterTokenSet();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (lVar1 == 2) {
      local_11 = ((byte)lVar3 ^ 1) & 1;
    }
    else {
      local_11 = (byte)lVar3 & 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

