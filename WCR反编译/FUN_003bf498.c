// FUN_003bf498 @ 003bf498

void FUN_003bf498(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  dispatch_queue_t local_40;
  ulong local_38;
  undefined *local_30;
  undefined *local_28;
  uint local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    local_28 = PTR_s_m_workerThread_026a2f40;
    local_30 = PTR_s_setM_workerThread__026a2f48;
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_m_workerThread_026a2f40);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,local_30),
       (uVar2 & 1) == 0)) {
      local_1c = 1;
    }
    else {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar2;
      if (uVar2 == 0) {
        local_40 = _dispatch_queue_create("BSTimelineMsgMgr",(dispatch_queue_attr_t)0x0);
        bVar1 = local_40 != (dispatch_queue_t)0x0;
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,local_30,local_40);
          _NSLog(&
                 cf__wcr__grouping_BSTimelineMsgMgrm_workerThreadwasnil_lazy_createdbeforeexposereport
                );
        }
        local_1c = (uint)!bVar1;
        _objc_storeStrong(&local_40,0);
      }
      else {
        local_1c = 1;
      }
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

