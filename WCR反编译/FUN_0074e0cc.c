// FUN_0074e0cc @ 0074e0cc

void FUN_0074e0cc(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  if (DAT_028cc758 <= *(double *)(param_1 + 0x20)) {
    if (0.0 < DAT_028cc758) {
      DAT_028cc758 = 0.0;
    }
    uVar1 = param_1;
    local_20 = param_1;
    local_18 = param_1;
    FUN_0074a654();
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    FUN_0074a6c8(*(undefined8 *)(param_1 + 0x20),uVar1);
    uVar1 = local_28;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR__OBJC_CLASS___NSNumber_026ce038,
               PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
    if (*(ulong *)(param_1 + 0x28) <= uVar1) {
      DAT_028cc758 = *(double *)(param_1 + 0x20) + 10.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeAllObjects_0269d508);
    }
    _objc_storeStrong(&local_28,0);
  }
  else {
    **(undefined1 **)(param_1 + 0x30) = 0;
  }
  return;
}

