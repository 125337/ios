// FUN_0051b0e0 @ 0051b0e0

void FUN_0051b0e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long local_58;
  ulong local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_delegate_0269e808);
  if ((uVar2 & 1) != 0) {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_28 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if ((local_28 != 0) &&
     (uVar3 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_respondsToSelector__026ca818,
                PTR_s_onTimelineDataChangedWithAdded_a_026a48b8), uVar2 = local_28,
     puVar1 = PTR_s_onTimelineDataChangedWithAdded_a_026a48b8, (uVar3 & 1) != 0)) {
    lVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
    if (lVar4 == 0) {
      local_58 = 0;
    }
    else {
      local_58 = local_20;
    }
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,puVar1,local_58,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

