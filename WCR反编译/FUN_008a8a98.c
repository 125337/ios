// FUN_008a8a98 @ 008a8a98

byte FUN_008a8a98(undefined8 param_1)

{
  long lVar1;
  long lVar2;
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
    local_30 = 0;
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_refMessageWrap_026a98e8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_30;
    local_30 = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = local_30;
    FUN_008a7f40();
    local_11 = (byte)lVar2 & 1;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

