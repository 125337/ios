// FUN_01689a20 @ 01689a20

void FUN_01689a20(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_40;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dataUsingEncoding__026a12e8,4);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_28 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_data_0269d850);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_28;
  }
  FUN_01689844();
  _objc_retainAutoreleasedReturnValue();
  local_18 = local_40;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

