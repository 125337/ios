// FUN_00730570 @ 00730570

void FUN_00730570(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined *local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((((local_18 == 0) ||
       (uVar1 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_getCellCount_026a0b78),
       (uVar1 & 1) == 0)) ||
      (uVar1 = local_18,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_getCellAt__026a0b80),
      (uVar1 & 1) == 0)) ||
     (uVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_removeCellAt__026a0b88),
     (uVar1 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getCellCount_026a0b78);
    local_30 = uVar1;
    if (uVar1 == 0) {
      local_28 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_026ce398;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableIndexSet_026ce398,PTR_s_indexSet_0269fc90);
      _objc_retainAutoreleasedReturnValue();
      local_38 = puVar2;
      for (local_40 = 0; uVar1 = local_18, puVar2 = local_38, local_40 < local_30;
          local_40 = local_40 + 1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getCellAt__026a0b80,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar1;
        FUN_007312a4();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (uVar3 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addIndex__0269fc98,local_40);
        }
        _objc_storeStrong(&local_48,0);
      }
      local_70 = PTR___NSConcreteGlobalBlock_02578658;
      local_68 = 0xd0800000;
      local_64 = 0;
      local_60 = FUN_00732918;
      local_58 = &DAT_0257e808;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_enumerateIndexesWithOptions_usin_026a5d28,2,&local_70);
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_38,0);
      local_28 = 0;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

