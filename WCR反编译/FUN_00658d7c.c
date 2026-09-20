// FUN_00658d7c @ 00658d7c

void FUN_00658d7c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined *local_a0;
  long local_98;
  ulong local_90;
  byte local_88;
  byte local_87;
  long local_80;
  byte local_72;
  byte local_71;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_50;
  undefined *local_40;
  ulong local_38;
  ulong local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_38 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_38;
  local_40 = puVar2;
  FUN_0064d8b4();
  puVar2 = local_40;
  if ((uVar3 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
    local_50 = 1;
  }
  else {
    uVar3 = local_30;
    FUN_006555fc();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
    puVar2 = local_40;
    if (uVar3 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_50 = 1;
    }
    else {
      uVar3 = local_30;
      FUN_00655d64(local_30,"m_firstUnReadMsg");
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_30;
      local_60 = uVar3;
      FUN_006564b8(local_30,"m_unreadCount");
      local_68 = uVar4;
      if (uVar4 == 0) {
        uVar3 = local_30;
        FUN_006564b8(local_30,"m_uiEnterRoomUnreadCount");
        local_68 = uVar3;
      }
      uVar3 = local_30;
      FUN_0065b498();
      _objc_retainAutoreleasedReturnValue();
      local_71 = local_60 != 0;
      local_72 = false;
      local_70 = uVar3;
      if (!(bool)local_71) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
        local_72 = uVar3 != 0;
      }
      puVar2 = local_40;
      if ((((local_71 & 1) == 0) && ((bool)local_72 == false)) && (local_68 == 0)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar2;
        local_50 = 1;
      }
      else {
        local_80 = 0;
        if ((((local_71 & 1) == 0) && ((bool)local_72 == false)) && (local_68 != 0)) {
          uVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
          if (local_68 + 5 < uVar3) {
            uVar3 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
            local_80 = (uVar3 - local_68) + -5;
          }
        }
        uVar1 = local_58;
        uVar4 = local_60;
        local_d0 = PTR___NSConcreteGlobalBlock_02578658;
        local_c8 = 0xd0800000;
        local_c4 = 0;
        local_c0 = FUN_0065b8d0;
        local_b8 = &DAT_0257e768;
        local_88 = local_71 & 1;
        (*(code *)PTR__objc_retain_02578638)();
        uVar3 = local_70;
        local_b0 = uVar4;
        local_87 = local_72 & 1;
        (*(code *)PTR__objc_retain_02578638)();
        puVar2 = local_40;
        local_a8 = uVar3;
        local_98 = local_80;
        local_90 = local_38;
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_d0);
        puVar2 = local_40;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar2;
        local_50 = 1;
        _objc_storeStrong(&local_a0);
        _objc_storeStrong(&local_a8,0);
        _objc_storeStrong(&local_b0,0);
      }
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

