// FUN_003b5138 @ 003b5138

void FUN_003b5138(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_24;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  if (lVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSDictionary0___02578288;
    (*(code *)PTR__objc_retain_02578638)();
    local_24 = 1;
    local_18 = puVar2;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_dictionaryWithCapacity__026a1ad0,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_20;
    local_58 = PTR___NSConcreteGlobalBlock_02578658;
    local_50 = 0xd0800000;
    local_4c = 0;
    local_48 = FUN_003b7080;
    local_40 = &DAT_0257cb28;
    local_30 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_58);
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
    local_24 = 1;
    local_18 = puVar2;
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

