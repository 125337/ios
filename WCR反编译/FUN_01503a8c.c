// FUN_01503a8c @ 01503a8c

void FUN_01503a8c(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  long local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  if ((param_1 == 0) || (param_2 < 8)) {
    local_18 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithBytes_length__026a1aa8,param_1,
               param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSPropertyListSerialization_026cece8;
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSPropertyListSerialization_026cece8,
               PTR_s_propertyListWithData_options_for_026aff48,puVar1,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    puVar1 = local_38;
    if (((ulong)puVar2 & 1) == 0) {
      puVar1 = local_30;
      FUN_01502c40();
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar1;
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

