// FUN_0085835c @ 0085835c

byte FUN_0085835c(undefined8 param_1)

{
  long lVar1;
  byte local_50;
  long local_30;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    _objc_getAssociatedObject(local_20,DAT_026f48e0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    if (lVar1 == 0) {
      lVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isHidden_026ca768);
      local_50 = (byte)lVar1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_boolValue_026ca540);
      local_50 = (byte)lVar1;
    }
    local_11 = local_50 & 1 ^ 1;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

