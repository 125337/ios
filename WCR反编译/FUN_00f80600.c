// FUN_00f80600 @ 00f80600

void FUN_00f80600(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_60;
  undefined *local_30;
  undefined *local_28;
  undefined4 local_1c;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == (undefined *)0x0) {
    local_1c = 1;
  }
  else {
    FUN_00f86c84(local_18);
    puVar1 = local_18;
    FUN_00f870f0();
    _objc_retainAutoreleasedReturnValue();
    FUN_00f86f00();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    FUN_00f872a0(local_18);
    puVar1 = local_18;
    FUN_00f876ec();
    _objc_retainAutoreleasedReturnValue();
    FUN_00f872a0();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_18;
    FUN_00f870f0();
    _objc_retainAutoreleasedReturnValue();
    FUN_00f872a0();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_setContainerBackgroundColor__026acc18);
    if (((ulong)puVar1 & 1) != 0) {
      puVar1 = local_18;
      _objc_getAssociatedObject(local_18,&DAT_028e2e7d);
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar1;
      if (puVar1 != (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        if (puVar1 == puVar2) {
          local_60 = (undefined *)0x0;
        }
        else {
          local_60 = local_28;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_30 = local_60;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_setContainerBackgroundColor__026acc18,local_30);
        _objc_setAssociatedObject(local_18,&DAT_028e2e7d,0,1);
        _objc_storeStrong(&local_30,0);
      }
      _objc_storeStrong(&local_28,0);
    }
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

