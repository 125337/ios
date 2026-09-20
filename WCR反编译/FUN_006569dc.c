// FUN_006569dc @ 006569dc

void FUN_006569dc(undefined *param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_40;
  byte local_29;
  long local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  lVar1 = local_28;
  local_29 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (undefined *)0x0;
    local_40 = 1;
    goto LAB_00656cd8;
  }
  puVar2 = local_20;
  FUN_00656d70(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  FUN_00656968();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_sync_enter();
  FUN_00656968();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_50;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    if ((local_29 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_50;
      local_50 = puVar3;
      (*(code *)PTR__objc_release_02578630)();
      FUN_00656968();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      goto LAB_00656c40;
    }
    local_18 = (undefined *)0x0;
  }
  else {
LAB_00656c40:
    puVar3 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar3;
  }
  local_40 = 1;
  _objc_storeStrong(&local_50);
  _objc_sync_exit(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_48,0);
LAB_00656cd8:
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

