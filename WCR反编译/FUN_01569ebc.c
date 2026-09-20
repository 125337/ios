// FUN_01569ebc @ 01569ebc

byte FUN_01569ebc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *local_30;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  puVar1 = &local_28;
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong();
  FUN_01562e38();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  if (((puVar1 == (undefined8 *)0x0) || (local_20 == 0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_respondsToSelector__026ca818,local_20),
     ((ulong)puVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,local_20,0);
    local_11 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

