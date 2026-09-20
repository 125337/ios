// FUN_01f082cc @ 01f082cc

void FUN_01f082cc(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_20;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar1 = local_20;
  puVar2 = local_28;
  if ((uVar4 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_2c = 1;
  }
  else {
    local_58 = PTR___NSConcreteGlobalBlock_02578658;
    local_50 = 0xd0800000;
    local_4c = 0;
    local_48 = FUN_01f10514;
    local_40 = &DAT_02579a30;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_58);
    puVar2 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

