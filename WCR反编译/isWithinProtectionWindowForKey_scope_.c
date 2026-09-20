// isWithinProtectionWindowForKey:scope: @ 010f0384

/* Function Stack Size: 0x20 bytes */

bool __thiscall
WCRefinePageLockGuard::isWithinProtectionWindowForKey_scope_
          (WCRefinePageLockGuard *this,ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  ID IVar2;
  double in_d0;
  double dVar3;
  ID local_58;
  double local_50;
  undefined4 local_44;
  ID local_40;
  long_long local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_normalizedKey__026aeb88,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  if (IVar1 == 0) {
    local_11 = false;
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_protectionIntervalForScope__026aeb90,local_38);
    if (0.0 < in_d0) {
      IVar1 = local_20;
      local_50 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lastUnlockByKey_026aeb98);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_58 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      if (local_58 == 0) {
        local_11 = false;
      }
      else {
        _CFAbsoluteTimeGetCurrent();
        dVar3 = in_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_doubleValue_026ca608);
        local_11 = in_d0 - dVar3 <= local_50;
      }
      local_44 = 1;
      _objc_storeStrong(&local_58,0);
    }
    else {
      local_11 = false;
      local_44 = 1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

