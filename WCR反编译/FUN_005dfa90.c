// FUN_005dfa90 @ 005dfa90

void FUN_005dfa90(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  ulong local_c0;
  undefined *local_b8;
  undefined *local_b0;
  byte local_a1;
  ulong local_a0;
  ulong local_98;
  undefined *local_90;
  ulong local_88;
  undefined *local_80;
  code *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  byte local_45;
  byte local_31;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar1 = local_30;
  FUN_005dffb8();
  local_31 = (byte)uVar1;
  uVar1 = local_30;
  FUN_005e0368();
  local_45 = (byte)uVar1;
  if ((local_28 == 0) || (((local_31 & 1) == 0 && ((uVar1 & 1) == 0)))) {
    local_4c = 1;
  }
  else {
    local_58 = PTR_s_getCellCount_026a0b78;
    local_60 = PTR_s_getCellAt__026a0b80;
    local_68 = PTR_s_removeCellAt__026a0b88;
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getCellCount_026a0b78);
    if (((uVar1 & 1) == 0) ||
       ((uVar1 = local_28,
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,local_60),
        (uVar1 & 1) == 0 ||
        (uVar1 = local_28,
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,local_68),
        (uVar1 & 1) == 0)))) {
      local_4c = 1;
    }
    else {
      local_70 = PTR__objc_msgSend_02578628;
      local_78 = (code *)PTR__objc_msgSend_02578628;
      local_80 = PTR__objc_msgSend_02578628;
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,local_58);
      local_88 = uVar1;
      if (uVar1 == 0) {
        local_4c = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_026ce398;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableIndexSet_026ce398,PTR_s_indexSet_0269fc90);
        _objc_retainAutoreleasedReturnValue();
        local_90 = puVar2;
        for (local_98 = 0; uVar1 = local_28, puVar2 = local_90, local_98 < local_88;
            local_98 = local_98 + 1) {
          (*local_78)(local_28,local_60,local_98);
          _objc_retainAutoreleasedReturnValue();
          local_a1 = 0;
          local_a0 = uVar1;
          if ((local_31 & 1) != 0) {
            FUN_005e0718(uVar1,0,0);
            local_a1 = (byte)uVar1;
          }
          if (((local_a1 & 1) == 0) && ((local_45 & 1) != 0)) {
            uVar1 = local_a0;
            FUN_005e11dc();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar1;
            FUN_005e0bf0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_a1 = uVar4 != 0;
            (*(code *)PTR__objc_release_02578630)(uVar3);
            (*(code *)PTR__objc_release_02578630)(uVar1);
          }
          if ((local_a1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_addIndex__0269fc98,local_98);
          }
          _objc_storeStrong(&local_a0,0);
        }
        local_e0 = PTR___NSConcreteGlobalBlock_02578658;
        local_d8 = 0xd0800000;
        local_d4 = 0;
        local_d0 = FUN_005e1568;
        local_c8 = &DAT_0257e458;
        local_b8 = local_80;
        (*(code *)PTR__objc_retain_02578638)();
        local_c0 = uVar1;
        local_b0 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_enumerateIndexesWithOptions_usin_026a5d28,2,&local_e0);
        _objc_storeStrong(&local_c0);
        _objc_storeStrong(&local_90,0);
        local_4c = 0;
      }
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

