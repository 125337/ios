// FUN_0009a4d8 @ 0009a4d8

byte FUN_0009a4d8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_48 [3];
  ulong local_30;
  int local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_nsToUsr);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_20;
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_nsFromUsr);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_48[0] = uVar2;
    FUN_00099ed4();
    if (((uVar1 & 1) == 0) && (uVar1 = local_48[0], FUN_00099ed4(), (uVar1 & 1) == 0)) {
      local_24 = 0;
    }
    else {
      local_11 = 1;
      local_24 = 1;
    }
    _objc_storeStrong(local_48);
    _objc_storeStrong(&local_30,0);
    if (local_24 == 0) {
      local_11 = 0;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

