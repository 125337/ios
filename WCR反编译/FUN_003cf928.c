// FUN_003cf928 @ 003cf928

byte FUN_003cf928(undefined8 param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_003612b8(local_20,&cf_menuItem);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 == 0) {
    local_11 = 1;
  }
  else {
    FUN_003612b8(lVar1,&cf_confirmMenuItem);
    _objc_retainAutoreleasedReturnValue();
    local_11 = lVar1 != 0;
    (*(code *)PTR__objc_release_02578630)();
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

