// FUN_0064166c @ 0064166c

byte FUN_0064166c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  byte local_5c;
  long local_48 [3];
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
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewWithTag__026cabe0,1999);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_20;
    local_30 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewWithTag__026cabe0,0x7cd);
    _objc_retainAutoreleasedReturnValue();
    local_5c = 0;
    local_48[0] = lVar2;
    if ((local_30 != 0) && (local_5c = 0, lVar2 != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_isHidden_026ca768);
      local_5c = (byte)lVar2 ^ 1;
    }
    local_11 = local_5c & 1;
    local_24 = 1;
    _objc_storeStrong(local_48);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

