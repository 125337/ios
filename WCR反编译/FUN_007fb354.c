// FUN_007fb354 @ 007fb354

void FUN_007fb354(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSIndexSet_026ce378;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSIndexSet_026ce378,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0),
     puVar2 == (undefined *)0x0)) {
    puVar2 = local_20;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_2c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableIndexSet_026ce398;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableIndexSet_026ce398,PTR_s_indexSet_0269fc90);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_20;
    local_68 = PTR___NSConcreteGlobalBlock_02578658;
    local_60 = 0xd0800000;
    local_5c = 0;
    local_58 = FUN_00802adc;
    local_50 = &DAT_025804b0;
    local_40 = local_28;
    local_38 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_enumerateIndexesUsingBlock__026a2090,&local_68);
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
    local_2c = 1;
    local_18 = puVar2;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

