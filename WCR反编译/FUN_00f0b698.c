// FUN_00f0b698 @ 00f0b698

void FUN_00f0b698(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,local_28,
             local_20);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

