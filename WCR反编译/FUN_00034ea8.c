// FUN_00034ea8 @ 00034ea8

void FUN_00034ea8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38 [3];
  undefined *local_20;
  undefined8 local_18;
  
  FUN_00035dd4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_20 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_18;
  local_38[0] = puVar4;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(uVar1);
  uVar2 = local_18;
  puVar3 = local_38[0];
  local_68 = PTR___NSConcreteGlobalBlock_02578658;
  local_60 = 0xd0800000;
  local_5c = 0;
  local_58 = FUN_00035e48;
  local_50 = &DAT_02579290;
  (*(code *)PTR__objc_retain_02578638)();
  puVar4 = local_20;
  local_48 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_68);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_48,0);
  _objc_sync_exit(uVar1);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar3 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

