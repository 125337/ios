// FUN_002caba4 @ 002caba4

void FUN_002caba4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong local_40;
  long local_38 [3];
  undefined *local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_18;
  local_20 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38[0] = lVar2;
  for (local_40 = 0; puVar1 = local_20, local_38[0] != 0 && local_40 < 5; local_40 = local_40 + 1) {
    lVar2 = local_38[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar3 = local_38[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_38[0];
    local_38[0] = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_componentsJoinedByString__0269d140,&cf_<_);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

