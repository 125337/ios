// FUN_0007f50c @ 0007f50c

void FUN_0007f50c(undefined8 param_1)

{
  long lVar1;
  long local_48 [3];
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    FUN_0007f148(local_20,&cf_TextStateProfileTableView,0xc);
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    if ((lVar1 == 0) || (lVar1 == local_20)) {
      lVar1 = local_20;
      FUN_0007f980(0,local_20,&cf_TextStateProfile,0xc);
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = lVar1;
      if ((lVar1 == 0) || (lVar1 == local_20)) {
        local_18 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = lVar1;
      }
      local_24 = 1;
      _objc_storeStrong(local_48,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_24 = 1;
      local_18 = lVar1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

