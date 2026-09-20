// FUN_010bced8 @ 010bced8

void FUN_010bced8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined *local_50;
  long local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_20;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  puVar1 = local_28;
  if (lVar2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    local_2c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_20);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_28;
    local_38 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar1;
      local_2c = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,puVar3,0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_40 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
      puVar3 = local_28;
      puVar1 = local_40;
      if (((ulong)puVar4 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = puVar3;
        local_2c = 1;
      }
      else {
        local_70 = PTR___NSConcreteGlobalBlock_02578658;
        local_68 = 0xd0800000;
        local_64 = 0;
        local_60 = FUN_010cc464;
        local_58 = &DAT_02581060;
        (*(code *)PTR__objc_retain_02578638)();
        lVar2 = local_20;
        local_50 = puVar3;
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = lVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_70);
        puVar1 = local_28;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = puVar1;
        local_2c = 1;
        _objc_storeStrong(&local_48);
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

