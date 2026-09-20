// FUN_0074d160 @ 0074d160

void FUN_0074d160(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  uVar1 = param_1;
  local_20 = param_1;
  local_18 = param_1;
  FUN_0074a88c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  FUN_0074a6c8(*(undefined8 *)(param_1 + 0x20),uVar1);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  uVar1 = local_28;
  if (uVar2 < *(ulong *)(param_1 + 0x28)) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR__OBJC_CLASS___NSNumber_026ce038,
               PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    **(undefined1 **)(param_1 + 0x30) = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

