// FUN_00fadde8 @ 00fadde8

void FUN_00fadde8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_40;
  undefined *local_38;
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_stringByAppendingPathComponent__026cab30,&cf_com_qimiao_WCRefine_plist
              );
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_30 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    lVar1 = local_30;
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_38 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_40 = (undefined *)0x0;
      do {
        puVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nextObject_026a2c88);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_40;
        local_40 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (puVar3 == (undefined *)0x0) {
          local_18 = 0;
          goto LAB_00fae030;
        }
        puVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        FUN_00fae07c();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      } while (((ulong)puVar3 & 1) == 0);
      lVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_stringByAppendingPathComponent__026cab30,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_18 = lVar1;
LAB_00fae030:
      local_24 = 1;
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar1;
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

