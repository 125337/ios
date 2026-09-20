// FUN_007d3c04 @ 007d3c04

byte FUN_007d3c04(undefined8 param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  byte local_79;
  ulong local_78;
  undefined1 local_69;
  ulong local_68;
  byte local_59;
  ulong local_58 [3];
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    uVar3 = local_30;
    FUN_007d414c(local_30,"m_tableViewMgr");
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    if (((uVar3 == 0) ||
        ((*(code *)PTR__objc_msgSend_02578628)
                   (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionCount_026a0b70),
        (uVar3 & 1) == 0)) ||
       (uVar3 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionAt__026a0a78),
       (uVar3 & 1) == 0)) {
      local_21 = 0;
      local_34 = 1;
    }
    else {
      local_58[0] = 0;
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getTableView_026a09c8);
      if ((uVar3 & 1) != 0) {
        uVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getTableView_026a09c8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_58[0];
        local_58[0] = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      local_69 = 0;
      uVar1 = local_58[0] != 0;
      local_59 = false;
      if ((bool)uVar1) {
        uVar3 = local_58[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        local_69 = uVar1;
        local_68 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar1 = local_69;
        local_59 = uVar3 != 0;
      }
      local_69 = uVar1;
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getSectionCount_026a0b70);
      local_78 = uVar3;
      if (uVar3 == 0) {
        local_21 = 0;
      }
      else {
        local_79 = 0;
        for (local_88 = 0; uVar3 = local_58[0], puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8,
            local_88 < local_78; local_88 = local_88 + 1) {
          uVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getSectionAt__026a0a78,local_88);
          _objc_retainAutoreleasedReturnValue();
          local_90 = uVar3;
          FUN_007d42a0();
          if ((uVar3 & 1) != 0) {
            local_79 = 1;
          }
          _objc_storeStrong(&local_90,0);
        }
        if ((local_79 & 1) == 0) {
          local_21 = 0;
        }
        else {
          if ((local_58[0] == 0) || ((local_59 & 1) == 0)) {
            uVar3 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_reloadTableView_0269dcb0);
            if ((uVar3 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_reloadTableView_0269dcb0);
            }
          }
          else {
            local_b8 = PTR___NSConcreteGlobalBlock_02578658;
            local_b0 = 0xd0800000;
            local_ac = 0;
            local_a8 = FUN_007d4664;
            local_a0 = &DAT_0257a9d0;
            (*(code *)PTR__objc_retain_02578638)();
            local_98 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_performWithoutAnimation__0269e7e0,&local_b8);
            _objc_storeStrong(&local_98,0);
          }
          local_21 = 1;
        }
      }
      local_34 = 1;
      _objc_storeStrong(local_58,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

