// FUN_0095e50c @ 0095e50c

void FUN_0095e50c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_60;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 local_30;
  undefined1 local_2a;
  byte local_29;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mutableCopy_0269d8a0);
  local_29 = 0;
  local_60 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_60 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_60;
  }
  local_29 = puVar1 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_60;
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_50 = PTR___NSConcreteGlobalBlock_02578658;
  local_48 = 0xd0800000;
  local_44 = 0;
  local_40 = FUN_00961aa8;
  local_38 = &DAT_02581390;
  local_30 = puVar2 == (undefined *)0x0;
  local_2a = puVar2 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sortUsingComparator__0269d168,&local_50);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

