// FUN_00452a78 @ 00452a78

void FUN_00452a78(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  char *local_60;
  uint local_54;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (undefined *)0x0;
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_itemView);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_38;
  local_38 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_38;
  if (local_38 == (undefined *)0x0) {
    pcVar3 = "EmoticonTabItemView";
    _objc_getClass();
    puVar4 = local_30;
    local_60 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      puVar2 = local_30;
      if (((ulong)puVar4 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = puVar2;
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,puVar2)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_70 = puVar4;
        do {
          puVar4 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
          if (puVar4 == (undefined *)0x0) {
            local_28 = (undefined *)0x0;
            local_54 = 1;
            break;
          }
          puVar4 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          local_78 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_removeObjectAtIndex__0269d530,0);
          puVar5 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isKindOfClass__0269cd68,local_60);
          puVar2 = local_70;
          puVar4 = local_78;
          bVar1 = ((ulong)puVar5 & 1) == 0;
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
            (*(code *)PTR__objc_release_02578630)(puVar4);
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = puVar4;
          }
          local_54 = (uint)!bVar1;
          _objc_storeStrong(&local_78,0);
        } while (local_54 == 0);
        _objc_storeStrong(&local_70);
        _objc_storeStrong(&local_68,0);
        goto LAB_00452e84;
      }
    }
    local_28 = (undefined *)0x0;
    local_54 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar4;
    local_54 = 1;
  }
LAB_00452e84:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

