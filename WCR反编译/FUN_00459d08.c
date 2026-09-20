// FUN_00459d08 @ 00459d08

byte FUN_00459d08(undefined8 param_1)

{
  long lVar1;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  _objc_getAssociatedObject(local_20,DAT_026e0398);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 == 0) {
    lVar1 = local_20;
    FUN_0045c0b8(local_20,PTR_s_searchEmoticonViewControllerH5_026a3e30,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar1 == 0) {
      lVar1 = local_20;
      FUN_0045c0b8(local_20,PTR_s_searchEmoticonViewControllerLite_026a3e38,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar1 == 0) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

