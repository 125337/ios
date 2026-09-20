// FUN_0080c790 @ 0080c790

void FUN_0080c790(undefined8 param_1)

{
  ulong uVar1;
  ulong local_30 [3];
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  while( true ) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
    if (uVar1 < 0x78 || uVar1 - 0x78 == 0) break;
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_30[0] = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_removeFromSuperview_026ca800);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeObjectAtIndex__0269d530,0);
    _objc_storeStrong(local_30,0);
  }
  _objc_storeStrong(uVar1 - 0x78,&local_18,0);
  return;
}

