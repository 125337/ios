// FUN_0019e8b0 @ 0019e8b0

void FUN_0019e8b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined *local_58 [3];
  undefined *local_40;
  int local_34;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (undefined *)0x0) {
    local_28 = (undefined *)0x0;
    local_34 = 1;
  }
  else {
    local_40 = (undefined *)0x0;
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_contactsItemView_0269fcf0);
    if (((ulong)puVar1 & 1) != 0) {
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contactsItemView_0269fcf0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_40;
      local_40 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar1 = local_40;
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar2 = local_40;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_30;
      local_58[0] = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_30;
      puVar1 = local_58[0];
      if (((ulong)puVar3 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        if (((ulong)puVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_addObject__0269d180,local_30);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentView_026ca5a8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      do {
        puVar1 = local_58[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_count_0269cfe0);
        if (puVar1 == (undefined *)0x0) {
          local_28 = (undefined *)0x0;
          local_34 = 1;
          break;
        }
        puVar1 = local_58[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_60 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_removeObjectAtIndex__0269d530,0);
        puVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = local_60;
        if (((ulong)puVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar1);
          puVar1 = local_58[0];
          if (puVar2 != (undefined *)0x0) {
            puVar2 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          local_34 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = puVar1;
          local_34 = 1;
        }
        _objc_storeStrong(&local_60,0);
      } while (local_34 == 0);
      _objc_storeStrong(local_58,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_34 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

