// FUN_00312058 @ 00312058

byte FUN_00312058(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_50;
  ulong local_48;
  undefined *local_30;
  uint local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_20;
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar2 = local_30;
    if (lVar3 != 0) {
      lVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    local_48 = 0;
    do {
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
      if (puVar2 == (undefined *)0x0 || 0x1f < local_48) {
        local_11 = 0;
        local_24 = 1;
        break;
      }
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeObjectAtIndex__0269d530,0);
      local_48 = local_48 + 1;
      puVar5 = local_50;
      FUN_0031b590();
      puVar2 = local_30;
      bVar1 = ((ulong)puVar5 & 1) == 0;
      if (bVar1) {
        puVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      else {
        local_11 = 1;
      }
      local_24 = (uint)!bVar1;
      _objc_storeStrong(&local_50,0);
    } while (local_24 == 0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

