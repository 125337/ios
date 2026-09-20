// FUN_0018a5a4 @ 0018a5a4

void FUN_0018a5a4(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  byte local_19;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = local_18;
  local_19 = param_2;
  _objc_getAssociatedObject(local_18,&DAT_028c8975);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  if ((puVar1 == (undefined *)0x0) && ((local_19 & 1) != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_28;
    local_28 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_setAssociatedObject(local_18,&DAT_028c8975,local_28,1);
  }
  puVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

