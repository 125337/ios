// toggleSidebar @ 01601fa4

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatRuntime::toggleSidebar(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined4 local_a4;
  undefined1 local_11;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = true;
  if (((ulong)puVar3 & 1) != 0) {
    IVar4 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar4 == 0;
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (bVar1) {
    local_11 = 0;
  }
  else {
    puVar2 = PTR_WCRQuickChatRuntime_026ce698;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRQuickChatRuntime_026ce698,PTR_s_runtimeCloudAllowed_026ae210);
    if (((ulong)puVar2 & 1) == 0) {
      local_11 = 0;
    }
    else {
      IVar4 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      if ((IVar5 & 1) != 0) {
        IVar4 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
        IVar4 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
        IVar4 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        IVar4 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar5);
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      IVar4 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_a4 = 0;
      if (((ulong)puVar3 & 1) != 0) {
        IVar4 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_a4 = (uint)IVar5 ^ 1;
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if ((local_a4 & 1) != 0) {
        IVar4 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(param_1);
      }
      local_11 = 1;
    }
  }
  return (uint)local_11;
}

