// FUN_01ace518 @ 01ace518

void FUN_01ace518(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  local_28 = param_1;
  FUN_01a9b024();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__0269d180,local_30);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return;
}

