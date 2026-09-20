// FUN_005d1bc4 @ 005d1bc4

ulong FUN_005d1bc4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *local_20;
  undefined8 local_18;
  
  puVar1 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_005a906c();
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_containsObject__0269cbb8,local_18);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return (ulong)puVar1 & 0xffffffff;
}

