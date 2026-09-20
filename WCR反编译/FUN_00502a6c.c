// FUN_00502a6c @ 00502a6c

void FUN_00502a6c(undefined8 param_1)

{
  ulong uVar1;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_004fe524();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_24 = 1;
  }
  else {
    FUN_00500394();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_removeObject__0269d678,local_20);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,local_20);
    while( true ) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
      if (uVar1 < 0x3c || uVar1 - 0x3c == 0) break;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeObjectAtIndex__0269d530,0);
    }
    _objc_storeStrong(uVar1 - 0x3c,&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

