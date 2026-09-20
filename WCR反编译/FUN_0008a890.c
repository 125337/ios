// FUN_0008a890 @ 0008a890

byte FUN_0008a890(undefined8 param_1)

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
    FUN_0007ee68();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar1 == 0) {
      lVar1 = local_20;
      FUN_0007f148(local_20,&cf_SharePreConfirmHeadView,0xc);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar1 == 0) {
        lVar1 = local_20;
        FUN_0007f148(local_20,&cf_SharePreConfirmSheetView,0xe);
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
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

