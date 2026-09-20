// FUN_0069841c @ 0069841c

void FUN_0069841c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_1b0;
  ulong local_180;
  ulong local_178;
  ulong local_158;
  ulong local_128;
  bool local_e1;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined8 local_b0;
  ulong local_a8;
  ulong local_a0;
  byte local_91;
  ulong local_90;
  ulong local_88;
  byte local_79;
  ulong local_78;
  byte local_6a;
  byte local_69;
  ulong local_68;
  ulong local_60;
  byte local_55;
  ulong local_48;
  undefined8 local_40;
  int local_34;
  undefined *local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar1 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_containerEnabled_026a6540);
  if (((ulong)puVar1 & 1) == 0) {
    local_34 = 1;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    uVar2 = local_28;
    local_40 = param_1;
    FUN_00699d70();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    if (uVar2 == 0) {
      local_34 = 1;
    }
    else {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (((ulong)puVar3 & 1) == 0) {
        uVar2 = local_48;
        FUN_0069a934(local_48,1);
        local_6a = (byte)uVar2;
        uVar2 = local_48;
        FUN_0069ac5c();
        _objc_retainAutoreleasedReturnValue();
        local_78 = uVar2;
        if (uVar2 == 0) {
          uVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionCount_026a0b70);
          if ((uVar2 & 1) == 0) {
            local_178 = 0;
          }
          else {
            local_178 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getSectionCount_026a0b70);
          }
          local_a0 = local_178;
          if (local_178 == 0) {
            local_34 = 1;
          }
          else {
            local_b0 = 2;
            local_b8 = local_178 - 1;
            local_180 = local_b8;
            if (2 < local_b8) {
              local_180 = 2;
            }
            local_c0 = local_180;
            local_a8 = local_180;
            uVar2 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getSectionAt__026a0a78,local_180);
            _objc_retainAutoreleasedReturnValue();
            local_c8 = uVar2;
            if ((uVar2 == 0) || (FUN_0069b884(), (uVar2 & 1) != 0)) {
              local_34 = 1;
            }
            else {
              uVar2 = local_28;
              FUN_0069bb20();
              _objc_retainAutoreleasedReturnValue();
              local_d0 = uVar2;
              if ((uVar2 == 0) ||
                 (uVar2 = local_c8,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_addCell__0269e3f8),
                 (uVar2 & 1) == 0)) {
                local_34 = 1;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addCell__0269e3f8,local_d0);
                uVar2 = local_48;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getTableView_026a09c8);
                local_e1 = (uVar2 & 1) == 0;
                if (local_e1) {
                  local_1b0 = 0;
                }
                else {
                  local_1b0 = local_48;
                  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getTableView_026a09c8);
                  _objc_retainAutoreleasedReturnValue();
                  local_e0 = local_1b0;
                }
                local_e1 = !local_e1;
                (*(code *)PTR__objc_retain_02578638)();
                local_d8 = local_1b0;
                if (local_e1) {
                  (*(code *)PTR__objc_release_02578630)(local_e0);
                }
                uVar2 = local_d8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d8,PTR_s_respondsToSelector__026ca818,PTR_s_reloadData_0269e400);
                if ((uVar2 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_reloadData_0269e400);
                }
                _objc_storeStrong(&local_d8,0);
                local_34 = 0;
              }
              _objc_storeStrong(&local_d0,0);
            }
            _objc_storeStrong(&local_c8,0);
          }
        }
        else {
          FUN_0069aed4();
          local_79 = (byte)uVar2;
          local_91 = 0;
          uVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getTableView_026a09c8);
          if ((uVar2 & 1) == 0) {
            local_158 = 0;
          }
          else {
            local_158 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getTableView_026a09c8);
            _objc_retainAutoreleasedReturnValue();
            local_91 = 1;
            local_90 = local_158;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_88 = local_158;
          if ((local_91 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_90);
          }
          if ((((local_6a & 1) != 0) || ((local_79 & 1) != 0)) &&
             (uVar2 = local_88,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_reloadData_0269e400),
             (uVar2 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_reloadData_0269e400);
          }
          local_34 = 1;
          _objc_storeStrong(&local_88,0);
        }
        _objc_storeStrong(&local_78,0);
      }
      else {
        uVar2 = local_48;
        FUN_0069a66c();
        local_55 = (byte)uVar2;
        local_69 = 0;
        uVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getTableView_026a09c8);
        if ((uVar2 & 1) == 0) {
          local_128 = 0;
        }
        else {
          local_128 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getTableView_026a09c8);
          _objc_retainAutoreleasedReturnValue();
          local_69 = 1;
          local_68 = local_128;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = local_128;
        if ((local_69 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_68);
        }
        if (((local_55 & 1) != 0) &&
           (uVar2 = local_60,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_reloadData_0269e400),
           (uVar2 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_reloadData_0269e400);
        }
        local_34 = 1;
        _objc_storeStrong(&local_60,0);
      }
    }
    _objc_storeStrong(&local_48,0);
    if (local_34 == 0) {
      local_34 = 0;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

