// FUN_0031a880 @ 0031a880

byte FUN_0031a880(undefined8 param_1)

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
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_38;
    FUN_0031afdc();
    local_40 = (byte)lVar2;
  }
  local_11 = local_40 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

