// FUN_0079ec98 @ 0079ec98

byte FUN_0079ec98(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_20 == local_28) {
    local_11 = 1;
  }
  else if ((local_20 == 0) || (local_28 == 0)) {
    local_11 = 0;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqual__0269e9a8,local_28);
    local_11 = (byte)lVar1 & 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

