// FUN_017379bc @ 017379bc

void FUN_017379bc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long local_38;
  long local_30;
  undefined1 *local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  local_30 = param_1;
  local_28 = param_3;
  FUN_01725ed0();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28,local_38);
    *local_28 = 1;
  }
  _objc_storeStrong(lVar1 != 0,&local_38);
  _objc_storeStrong(&local_20,0);
  return;
}

