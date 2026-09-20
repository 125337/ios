// pushToManager: @ 00f60190

/* Function Stack Size: 0x18 bytes */

void WCRefineFakeLocationEngine::pushToManager_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ID IVar3;
  ulong uVar4;
  undefined *puVar5;
  ID local_50;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  SEL local_30;
  ID local_28;
  ID local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  if (local_38 == 0) {
    local_3c = 1;
  }
  else {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    if (uVar2 == 0) {
      local_3c = 1;
    }
    else {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentLocation_026ac7d8);
      _objc_retainAutoreleasedReturnValue();
      local_50 = IVar3;
      if (IVar3 == 0) {
        local_3c = 1;
      }
      else {
        uVar4 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_respondsToSelector__026ca818,
                   PTR_s_locationManager_didUpdateLocatio_026ac7e0);
        uVar1 = local_38;
        uVar2 = local_48;
        if ((uVar4 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_respondsToSelector__026ca818,
                     PTR_s_locationManager_didUpdateToLocat_026ac7e8);
          if ((uVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_locationManager_didUpdateToLocat_026ac7e8,local_38,local_50,0)
            ;
          }
          local_3c = 0;
        }
        else {
          local_20 = local_50;
          puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_20,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_locationManager_didUpdateLocatio_026ac7e0,uVar1);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_3c = 1;
        }
      }
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

