// FUN_00372850 @ 00372850

byte FUN_00372850(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long local_48;
  long local_38;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_11 = false;
  if (local_20 != 0) {
    local_28 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028ca140);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = true;
    local_11 = true;
    if (local_28 == 0) {
      local_38 = local_20;
      _objc_getAssociatedObject(local_20,&DAT_028ca141);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_11 = true;
      if (local_38 == 0) {
        local_48 = local_20;
        _objc_getAssociatedObject(local_20,&DAT_028ca142);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        local_11 = local_48 != 0;
      }
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

