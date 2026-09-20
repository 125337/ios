// FUN_00314c88 @ 00314c88

void FUN_00314c88(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_58;
  ulong local_50;
  undefined *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  byte local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_28 = param_1;
  local_19 = param_3;
  if (local_18 == 0) {
    local_2c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_18;
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar1 = local_38;
    if (lVar2 != 0) {
      lVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    local_50 = 0;
    while (puVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0),
          puVar1 != (undefined *)0x0 && local_50 < 0x20) {
      puVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObjectAtIndex__0269d530,0);
      local_50 = local_50 + 1;
      puVar1 = local_58;
      FUN_0031b590();
      if (((ulong)puVar1 & 1) != 0) {
        FUN_00320588(local_28,local_58,local_19 & 1);
      }
      puVar1 = local_38;
      puVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_58,0);
    }
    if ((local_19 & 1) != 0) {
      FUN_00320914(local_18);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

