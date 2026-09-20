// FUN_00676178 @ 00676178

byte FUN_00676178(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined *local_48;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionAt__026a0a78),
     (uVar1 & 1) == 0)) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getSectionAt__026a0a78,0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    if ((uVar1 == 0) ||
       ((((*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getCellCount_026a0b78),
         (uVar1 & 1) == 0 ||
         (uVar1 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getCellAt__026a0b80),
         (uVar1 & 1) == 0)) ||
        (uVar1 = local_38,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_removeCellAt__026a0b88),
        (uVar1 & 1) == 0)))) {
      local_11 = 0;
      local_30 = 1;
    }
    else {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getCellCount_026a0b78);
      local_40 = uVar1;
      if (uVar1 == 0) {
        local_11 = 0;
        local_30 = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_026ce398;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableIndexSet_026ce398,PTR_s_indexSet_0269fc90);
        _objc_retainAutoreleasedReturnValue();
        local_48 = puVar2;
        for (local_50 = 0; local_50 < local_40; local_50 = local_50 + 1) {
          uVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getCellAt__026a0b80,local_50);
          _objc_retainAutoreleasedReturnValue();
          local_58 = uVar1;
          FUN_00676718();
          if ((uVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addIndex__0269fc98,local_50);
          }
          _objc_storeStrong(&local_58,0);
        }
        puVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
        uVar1 = local_38;
        puVar2 = local_48;
        if (puVar3 == (undefined *)0x0) {
          local_11 = 0;
          local_30 = 1;
        }
        else {
          local_80 = PTR___NSConcreteGlobalBlock_02578658;
          local_78 = 0xd0800000;
          local_74 = 0;
          local_70 = FUN_006767ec;
          local_68 = &DAT_0257e808;
          (*(code *)PTR__objc_retain_02578638)();
          local_60 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_enumerateIndexesWithOptions_usin_026a5d28,2,&local_80);
          local_11 = 1;
          local_30 = 1;
          _objc_storeStrong(&local_60,0);
        }
        _objc_storeStrong(&local_48,0);
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

