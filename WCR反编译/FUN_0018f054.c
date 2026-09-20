// FUN_0018f054 @ 0018f054

void FUN_0018f054(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  long local_50 [3];
  long local_38;
  undefined4 local_2c;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    lVar3 = local_28;
    FUN_0018a9d0(local_28,1);
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_removeAllObjects_0269d508);
    uVar2 = (uint)lVar3;
    FUN_0018b0b8();
    if ((uVar2 & 1) == 0) {
      local_2c = 1;
    }
    else {
      lVar4 = local_28;
      FUN_0018a440(local_28,0);
      _objc_retainAutoreleasedReturnValue();
      local_50[0] = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_count_0269cfe0);
      lVar1 = local_28;
      lVar3 = local_50[0];
      if (lVar4 != 0) {
        local_80 = PTR___NSConcreteGlobalBlock_02578658;
        local_78 = 0xd0800000;
        local_74 = 0;
        local_70 = FUN_0018f434;
        local_68 = &DAT_0257aa50;
        (*(code *)PTR__objc_retain_02578638)();
        lVar4 = local_38;
        local_60 = lVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar3,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_80);
        _objc_storeStrong(&local_58);
        _objc_storeStrong(&local_60,0);
      }
      lVar4 = local_28;
      FUN_0018a86c(local_28,0);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_38;
      local_b8 = PTR___NSConcreteGlobalBlock_02578658;
      local_b0 = 0xd0800000;
      local_ac = 0;
      local_a8 = FUN_0018f540;
      local_a0 = &DAT_0257aa70;
      local_88 = lVar4;
      (*(code *)PTR__objc_retain_02578638)();
      lVar1 = local_28;
      local_98 = lVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar4,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_b8);
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(local_50,0);
      local_2c = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

