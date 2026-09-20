// FUN_0032901c @ 0032901c

void FUN_0032901c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined *local_58 [3];
  cfstringStruct *local_40;
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
    pcVar1 = &cf_ContactsItemView;
    _NSClassFromString();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_58[0] = puVar2;
    do {
      puVar2 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_count_0269cfe0);
      if (puVar2 == (undefined *)0x0) {
        local_18 = (undefined *)0x0;
        local_34 = 1;
        break;
      }
      puVar2 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_removeObjectAtIndex__0269d530,0);
      if ((local_40 == (cfstringStruct *)0x0) ||
         (puVar2 = local_60,
         (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isKindOfClass__0269cd68,local_40),
         ((ulong)puVar2 & 1) == 0)) {
        puVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_58[0];
        if (puVar3 != (undefined *)0x0) {
          puVar3 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        local_34 = 0;
      }
      else {
        puVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_valueForKey__0269d128,&cf_accessibilityLabel);
        _objc_retainAutoreleasedReturnValue();
        local_34 = 1;
        local_18 = puVar2;
      }
      _objc_storeStrong(&local_60,0);
    } while (local_34 == 0);
    _objc_storeStrong(local_58,0);
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

