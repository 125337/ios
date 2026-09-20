// _WCRAvatarAncestorClassContains @ 009389ec

byte _WCRAvatarAncestorClassContains(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_50;
  long local_48;
  ulong local_40;
  uint local_34;
  long local_30;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = param_3;
  if ((local_20 == 0) ||
     (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     uVar3 = local_20, lVar2 == 0)) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar3;
    for (local_48 = 0; local_40 != 0 && local_48 < local_30; local_48 = local_48 + 1) {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_containsString__0269d0b0,local_28);
      bVar1 = (uVar3 & 1) == 0;
      if (bVar1) {
        uVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_40;
        local_40 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      else {
        local_11 = 1;
      }
      local_34 = (uint)!bVar1;
      _objc_storeStrong(&local_50,0);
      if (local_34 != 0) goto LAB_00938bc0;
    }
    local_11 = 0;
    local_34 = 1;
LAB_00938bc0:
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

