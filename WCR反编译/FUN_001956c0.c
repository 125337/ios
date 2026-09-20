// FUN_001956c0 @ 001956c0

void FUN_001956c0(undefined8 param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  int local_40;
  long local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 == 0) {
    local_28 = (undefined *)0x0;
    local_40 = 1;
  }
  else {
    pcVar2 = &cf_MMMainTableView;
    _NSClassFromString();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    lVar1 = local_30;
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithObject__0269d538);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    local_58 = (undefined *)0x0;
    do {
      puVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
      puVar3 = local_58;
      if (puVar4 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar3;
        local_40 = 1;
        break;
      }
      puVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeObjectAtIndex__0269d530,0);
      puVar3 = local_60;
      puVar4 = PTR__OBJC_CLASS___UITableView_026ce1a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((ulong)puVar3 & 1) == 0) {
LAB_00195994:
        puVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_50;
        if (puVar4 != (undefined *)0x0) {
          puVar4 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObjectsFromArray__0269d540);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        local_40 = 0;
      }
      else {
        if (local_58 == (undefined *)0x0) {
          _objc_storeStrong(&local_58,local_60);
        }
        if ((local_48 != (cfstringStruct *)0x0) &&
           (puVar3 = local_60,
           (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isKindOfClass__0269cd68,local_48),
           ((ulong)puVar3 & 1) == 0)) goto LAB_00195994;
        puVar3 = local_60;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar3;
        local_40 = 1;
      }
      _objc_storeStrong(&local_60,0);
    } while (local_40 == 0);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

