// FUN_005512e0 @ 005512e0

void FUN_005512e0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38 [3];
  undefined4 local_1c;
  ulong local_18;
  
  FUN_00551994();
  _objc_retainAutoreleasedReturnValue();
  local_18 = param_1;
  if (param_1 == 0) {
    local_1c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_beginTimeline_026a4f10);
    if ((param_1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_beginTimeline_026a4f10);
    }
    local_38[0] = 0;
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_getTimelineMgr_026a4f18);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_timelineMgr_026a4f20);
      if ((uVar1 & 1) != 0) {
        uVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_timelineMgr_026a4f20);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_38[0];
        local_38[0] = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
    }
    else {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getTimelineMgr_026a4f18);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_38[0];
      local_38[0] = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_38[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38[0],PTR_s_respondsToSelector__026ca818,PTR_s_timelineDataList_026a48a8);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_timelineDataList_026a48a8);
      _objc_retainAutoreleasedReturnValue();
      FUN_00551b64();
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    _objc_storeStrong(local_38,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

