// FUN_003e4dbc @ 003e4dbc

void FUN_003e4dbc(long param_1)

{
  long lVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  FUN_003e517c();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  if (param_1 == 0) {
    FUN_003e5284();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_20;
    local_20 = param_1;
    (*(code *)PTR__objc_release_02578630)();
    lVar1 = local_20;
    if (local_20 == 0) {
      FUN_003e5380();
      _objc_retainAutoreleasedReturnValue();
      local_18 = lVar2;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = param_1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

