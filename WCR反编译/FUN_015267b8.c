// FUN_015267b8 @ 015267b8

uint FUN_015267b8(undefined8 param_1,undefined8 param_2)

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
  _NSSelectorFromString();
  local_2c = 0;
  if (lVar1 != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,lVar1);
    local_2c = (uint)uVar2;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_2c & 1;
}

