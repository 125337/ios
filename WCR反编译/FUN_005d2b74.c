// FUN_005d2b74 @ 005d2b74

byte FUN_005d2b74(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  _object_getClass();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_Seperator);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_Separator),
     (uVar1 & 1) == 0)) {
    uVar1 = local_28;
    FUN_005d3070();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_005d2a28();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_005d3070();
      local_11 = (byte)uVar2 & 1;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    else {
      local_11 = 1;
    }
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

