// FUN_001a4dfc @ 001a4dfc

void FUN_001a4dfc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long local_50;
  long local_48 [3];
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  FUN_00185074();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_avatarPath);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_00184b18();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeObjectForKey__0269d700,&cf_avatarPath);
  FUN_00185270(*(undefined8 *)(param_1 + 0x20),local_28);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    lVar1 = local_30;
    FUN_00184e18(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar2 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0);
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    _objc_storeStrong(local_48,0);
  }
  FUN_00184324(&cf__b_Y_);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  local_50 = param_1;
  if (param_1 != 0) {
    FUN_001a4694(param_1);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

