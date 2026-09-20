// FUN_00325f8c @ 00325f8c

void FUN_00325f8c(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *local_58 [3];
  undefined *local_40;
  int local_34;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = param_1;
  if (local_28 == 0) {
    local_18 = (undefined *)0x0;
    local_34 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar1;
    do {
      puVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
      if (puVar1 == (undefined *)0x0) {
        local_18 = (undefined *)0x0;
        local_34 = 1;
        break;
      }
      puVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_58[0] = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeObjectAtIndex__0269d530,0);
      puVar1 = local_58[0];
      pcVar2 = &cf_ContactsItemView;
      _NSClassFromString();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,pcVar2);
      if (((ulong)puVar1 & 1) == 0) {
        puVar1 = local_58[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = local_40;
        if (puVar3 != (undefined *)0x0) {
          puVar3 = local_58[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        local_34 = 0;
      }
      else {
        puVar1 = local_58[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58[0],PTR_s_valueForKey__0269d128,&cf_accessibilityLabel);
        _objc_retainAutoreleasedReturnValue();
        local_34 = 1;
        local_18 = puVar1;
      }
      _objc_storeStrong(local_58,0);
    } while (local_34 == 0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

