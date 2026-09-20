// warmSidebarOnEnableIfNeeded @ 015ff04c

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatRuntime::warmSidebarOnEnableIfNeeded(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  uint local_d4;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [15];
  byte local_71;
  ID local_70;
  byte local_61;
  ID local_60;
  byte local_51;
  ID local_50;
  undefined *local_48;
  uint local_3c;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_quickChatEnabled_026b1660);
    if (((ulong)puVar2 & 1) == 0) {
      local_3c = 1;
    }
    else {
      puVar2 = PTR_WCRQuickChatRuntime_026ce698;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRQuickChatRuntime_026ce698,PTR_s_runtimeCloudAllowed_026ae210);
      if (((ulong)puVar2 & 1) == 0) {
        local_3c = 1;
      }
      else {
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar3);
        if ((IVar4 & 1) == 0) {
          puVar2 = local_38;
          FUN_015ff5ec();
          _objc_retainAutoreleasedReturnValue();
          IVar3 = local_28;
          local_48 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sidebarWarmed_026b1778);
          local_51 = 0;
          local_61 = 0;
          local_71 = 0;
          local_d4 = 0;
          if ((IVar3 & 1) != 0) {
            IVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
            _objc_retainAutoreleasedReturnValue();
            local_51 = 1;
            local_50 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_61 = 1;
            local_60 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_d4 = 0;
            if (IVar3 != 0) {
              IVar3 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sidebarWarmSignature_026b1780);
              _objc_retainAutoreleasedReturnValue();
              local_71 = 1;
              local_70 = IVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_d4 = (uint)IVar3;
            }
          }
          if ((local_71 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_70);
          }
          if ((local_61 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_60);
          }
          if ((local_51 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_50);
          }
          bVar1 = (local_d4 & 1) == 0;
          if (bVar1) {
            IVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar3);
            _objc_initWeak(auStack_80,local_28);
            IVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
            _objc_retainAutoreleasedReturnValue();
            local_b8 = PTR___NSConcreteStackBlock_02578660;
            local_b0 = 0xc2000000;
            local_ac = 0;
            local_a8 = FUN_015ff9a8;
            local_a0 = &DAT_0257be28;
            _objc_copyWeak(auStack_98,auStack_80);
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar3,PTR_s_wcr_runHiddenSidebarLayout__026b1798,&local_b8);
            (*(code *)PTR__objc_release_02578630)(IVar3);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_setSidebarWarmSignature__026b16a8,local_48);
            IVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
            _objc_retainAutoreleasedReturnValue();
            IVar4 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            IVar5 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_setSidebarWarmed__026b16a0,IVar5 != 0);
            (*(code *)PTR__objc_release_02578630)(IVar4);
            (*(code *)PTR__objc_release_02578630)(IVar3);
            _objc_destroyWeak(auStack_98);
            _objc_destroyWeak(auStack_80);
          }
          local_3c = (uint)!bVar1;
          _objc_storeStrong(&local_48,0);
        }
        else {
          local_3c = 1;
        }
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  return;
}

