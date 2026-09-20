// FUN_0041102c @ 0041102c

void FUN_0041102c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_3);
  lVar1 = local_18;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
  if (lVar1 == 0) {
    local_38 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_18;
    local_78 = PTR___NSConcreteGlobalBlock_02578658;
    local_70 = 0xd0800000;
    local_6c = 0;
    local_68 = FUN_00411800;
    local_60 = &DAT_0257d1e8;
    local_50 = local_20;
    local_48 = local_28;
    local_40 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_78);
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    if (puVar2 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeObjectsForKeys__026a35f0,local_40);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

