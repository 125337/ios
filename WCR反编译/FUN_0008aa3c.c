// FUN_0008aa3c @ 0008aa3c

void FUN_0008aa3c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long local_48;
  long local_40 [3];
  long local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    lVar1 = local_18;
    FUN_0007f148(local_18,&cf_SharePreConfirmHeadView,0xc);
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar1;
    if (lVar1 == 0) {
      lVar2 = local_18;
      FUN_0007f148(local_18,&cf_SharePreConfirmSheetView,0xe);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_28;
      local_28 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    if (local_28 == 0) {
      lVar2 = local_18;
      FUN_0007ee68();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_28;
      local_28 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    lVar1 = local_18;
    if (local_28 == 0) {
      local_1c = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_40[0] = lVar1;
      for (local_48 = 0; bVar3 = local_40[0] != 0 && local_48 < 0xe,
          local_40[0] != 0 && local_48 < 0xe; local_48 = local_48 + 1) {
        FUN_0008baac(local_40[0]);
        if (local_40[0] == local_28) {
          bVar3 = false;
          break;
        }
        lVar2 = local_40[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_40[0];
        local_40[0] = lVar2;
        (*(code *)PTR__objc_release_02578630)(lVar1);
      }
      _objc_storeStrong(bVar3,local_40,0);
      local_1c = 0;
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

