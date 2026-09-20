// FUN_000e59c8 @ 000e59c8

void FUN_000e59c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    _objc_setAssociatedObject(local_18,&DAT_028c8398,local_20,3);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

