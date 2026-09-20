// FUN_00661570 @ 00661570

void FUN_00661570(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  _objc_getAssociatedObject(uVar1,&DAT_028cbc5e);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR__OBJC_CLASS___NSNumber_026ce038,
             PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_removeObject__0269d678);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  FUN_0064d900(*(undefined8 *)(param_1 + 0x20));
  _objc_storeStrong(&local_28,0);
  return;
}

