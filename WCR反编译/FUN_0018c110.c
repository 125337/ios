// FUN_0018c110 @ 0018c110

void FUN_0018c110(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined *local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68 [3];
  long local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_40 = 0;
  local_38 = param_3;
  local_30 = param_2;
  _objc_storeStrong(&local_40,param_4);
  if ((((local_28 == 0) || (local_40 == 0)) || (local_30 < 0)) || (local_38 < 1)) {
    local_44 = 1;
  }
  else {
    lVar1 = local_28;
    FUN_0018c7f8(local_38,local_28,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_40;
    local_50 = lVar1;
    if (lVar1 == 0) {
      lVar2 = local_28;
      FUN_0018a86c(local_28,0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_68[0] = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      local_70 = lVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      lVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
      if (lVar2 == 0) {
        local_44 = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_026ce398;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableIndexSet_026ce398,PTR_s_indexSet_0269fc90);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = local_70;
        local_a8 = PTR___NSConcreteGlobalBlock_02578658;
        local_a0 = 0xd0800000;
        local_9c = 0;
        local_98 = FUN_0018cb98;
        local_90 = &DAT_0257a9f0;
        local_80 = local_38;
        local_78 = puVar3;
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar2,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_a8);
        puVar3 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
        if (puVar3 == (undefined *)0x0) {
          local_44 = 1;
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_b0 = puVar3;
          for (local_b8 = 0; lVar2 = local_40, puVar3 = local_b0, local_b8 < local_38;
              local_b8 = local_b8 + 1) {
            puVar4 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_containsIndex__0269fca0,local_b8);
            puVar3 = local_b0;
            if (((ulong)puVar4 & 1) == 0) {
              puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                         local_b8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar4);
            }
          }
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_30)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar2,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          _objc_storeStrong(&local_b0,0);
          local_44 = 0;
        }
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_78,0);
      }
      _objc_storeStrong(&local_70);
      _objc_storeStrong(local_68,0);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_setObject_forKeyedSubscript__0269d248,lVar1)
      ;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_44 = 1;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

