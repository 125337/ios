// FUN_00207ce4 @ 00207ce4

byte FUN_00207ce4(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  byte local_40;
  long local_38;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_40 = 0;
  bVar1 = local_20 != 0;
  if (bVar1) {
    local_38 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028c8ad0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = (byte)lVar2;
  }
  local_11 = local_40 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

