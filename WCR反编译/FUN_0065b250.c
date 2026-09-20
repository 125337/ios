// FUN_0065b250 @ 0065b250

void FUN_0065b250(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38 [3];
  undefined *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_20 = puVar1;
  FUN_006555fc();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_20;
  local_60 = PTR___NSConcreteGlobalBlock_02578658;
  local_58 = 0xd0800000;
  local_54 = 0;
  local_50 = FUN_0065eda8;
  local_48 = &DAT_0257aa90;
  local_38[0] = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_60);
  puVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

