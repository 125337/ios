// FUN_00327b1c @ 00327b1c

void FUN_00327b1c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48 [3];
  cfstringStruct *local_30;
  int local_24;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
  }
  else {
    pcVar1 = &cf_MMMainTableView;
    _NSClassFromString();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_50 = (undefined *)0x0;
    local_48[0] = puVar2;
    do {
      puVar3 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_count_0269cfe0);
      puVar2 = local_50;
      if (puVar3 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = puVar2;
        local_24 = 1;
        break;
      }
      puVar2 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_removeObjectAtIndex__0269d530,0);
      puVar2 = local_58;
      puVar3 = PTR__OBJC_CLASS___UITableView_026ce1a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)puVar2 & 1) == 0) {
LAB_00327d40:
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_48[0];
        if (puVar3 != (undefined *)0x0) {
          puVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        local_24 = 0;
      }
      else {
        if (local_50 == (undefined *)0x0) {
          _objc_storeStrong(&local_50,local_58);
        }
        if ((local_30 != (cfstringStruct *)0x0) &&
           (puVar2 = local_58,
           (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isKindOfClass__0269cd68,local_30),
           ((ulong)puVar2 & 1) == 0)) goto LAB_00327d40;
        puVar2 = local_58;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = puVar2;
        local_24 = 1;
      }
      _objc_storeStrong(&local_58,0);
    } while (local_24 == 0);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(local_48,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

