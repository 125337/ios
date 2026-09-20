// FUN_0075f444 @ 0075f444

uint FUN_0075f444(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint local_2c;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_20;
  _NSClassFromString();
  local_2c = 0;
  if (lVar1 != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isKindOfClass__0269cd68,lVar1);
    local_2c = (uint)uVar2;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_2c & 1;
}

