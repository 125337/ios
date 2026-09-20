// FUN_010e91e8 @ 010e91e8

byte FUN_010e91e8(undefined8 param_1)

{
  long lVar1;
  byte local_34;
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
    FUN_010e8de4(local_20,PTR_s_messageWrap_0269d070,"m_messageWrap");
    _objc_retainAutoreleasedReturnValue();
    local_34 = 0;
    local_30 = lVar1;
    if (lVar1 != 0) {
      _WCRefineClownYinYangShouldPreserveIdentity();
      local_34 = (byte)lVar1;
    }
    local_11 = local_34 & 1;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

