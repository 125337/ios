// FUN_0177c0d8 @ 0177c0d8

void FUN_0177c0d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_68;
  bool local_39;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
  }
  else {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_isController);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar1 & 1) == 0) {
      puVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_storage);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      FUN_0176d4d8();
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_24 = 1;
    }
    else {
      puVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_controller);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      FUN_0176d368();
      _objc_retainAutoreleasedReturnValue();
      local_30 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (puVar2 == (undefined *)0x0) {
        local_68 = (undefined *)0x0;
      }
      else {
        local_68 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_controller___);
        _objc_retainAutoreleasedReturnValue();
        local_38 = local_68;
      }
      local_39 = puVar2 != (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_68;
      if (local_39) {
        (*(code *)PTR__objc_release_02578630)(local_38);
      }
      local_24 = 1;
      _objc_storeStrong(&local_30,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

