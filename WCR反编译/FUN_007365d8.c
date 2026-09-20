// FUN_007365d8 @ 007365d8

byte FUN_007365d8(undefined8 param_1)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  byte local_51;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  byte local_21;
  
  puVar2 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar2,param_1);
  FUN_00730914();
  if ((((ulong)puVar2 & 1) == 0) || (uVar3 = local_30, FUN_00730e70(), (uVar3 & 1) == 0)) {
    local_21 = 0;
    local_40 = 1;
  }
  else {
    uVar3 = local_30;
    FUN_00737948();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    if ((uVar3 == 0) ||
       (((*(code *)PTR__objc_msgSend_02578628)
                   (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionCount_026a0b70),
        (uVar3 & 1) == 0 ||
        (uVar3 = local_48,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionAt__026a0a78),
        (uVar3 & 1) == 0)))) {
      local_21 = 0;
      local_40 = 1;
    }
    else {
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getSectionCount_026a0b70);
      local_51 = 0;
      local_50 = uVar3;
      for (local_60 = 0; local_60 < local_50; local_60 = local_60 + 1) {
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getSectionAt__026a0a78,local_60);
        _objc_retainAutoreleasedReturnValue();
        local_70 = 0;
        local_68 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getCellCount_026a0b78);
        if ((uVar3 & 1) != 0) {
          uVar3 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getCellCount_026a0b78);
          local_70 = uVar3;
        }
        FUN_007300e4(local_68,local_48);
        FUN_00730570(local_68);
        local_78 = local_70;
        uVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_getCellCount_026a0b78);
        if ((uVar3 & 1) != 0) {
          uVar3 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getCellCount_026a0b78);
          local_78 = uVar3;
        }
        if (local_78 != local_70) {
          local_51 = 1;
        }
        _objc_storeStrong(local_78 != local_70,&local_68,0);
      }
      uVar3 = local_48;
      FUN_00737b04(local_60 - local_50);
      if ((uVar3 & 1) != 0) {
        local_51 = 1;
      }
      if ((local_51 & 1) == 0) {
        local_21 = 0;
        local_40 = 1;
      }
      else {
        local_80 = 0;
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getTableView_026a09c8);
        if ((uVar3 & 1) == 0) {
          uVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_tableView_0269e378);
          if ((uVar3 & 1) != 0) {
            uVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_tableView_0269e378);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_80;
            local_80 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
        }
        else {
          uVar4 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getTableView_026a09c8);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_80;
          local_80 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        uVar3 = local_80;
        puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
        if (local_80 == 0) {
          uVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_reloadTableView_0269dcb0);
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_reloadTableView_0269dcb0);
          }
        }
        else {
          local_a8 = PTR___NSConcreteGlobalBlock_02578658;
          local_a0 = 0xd0800000;
          local_9c = 0;
          local_98 = FUN_00738040;
          local_90 = &DAT_0257a9d0;
          (*(code *)PTR__objc_retain_02578638)();
          local_88 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_performWithoutAnimation__0269e7e0,&local_a8);
          _objc_storeStrong(&local_88,0);
        }
        local_21 = 1;
        local_40 = 1;
        _objc_storeStrong(&local_80,0);
      }
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

