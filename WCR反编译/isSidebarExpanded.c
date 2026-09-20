// isSidebarExpanded @ 016024e4

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatRuntime::isSidebarExpanded(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ID IVar4;
  ID IVar5;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_30;
  
  IVar4 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_58 = 0;
  if (IVar4 != 0) {
    local_30 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = true;
    IVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = 0;
    if ((IVar5 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_50 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      IVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_58 = (byte)IVar5 ^ 1;
      local_40 = param_1;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  return (uint)(local_58 & 1);
}

