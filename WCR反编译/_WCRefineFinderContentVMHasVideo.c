// _WCRefineFinderContentVMHasVideo @ 002776fc

byte _WCRefineFinderContentVMHasVideo(undefined8 param_1)

{
  long lVar1;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    lVar1 = local_20;
    FUN_00276030();
    _objc_retainAutoreleasedReturnValue();
    local_11 = lVar1 != 0;
    (*(code *)PTR__objc_release_02578630)();
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

