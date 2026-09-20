// _WCRAvatarFindAncestorByClassName @ 009387ec

void _WCRAvatarFindAncestorByClassName(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long local_48;
  ulong local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = param_3;
  if ((local_20 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     uVar2 = local_20, lVar1 == 0)) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar2;
    for (local_48 = 0; local_40 != 0 && local_48 < local_30; local_48 = local_48 + 1) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_18 = local_40;
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        goto LAB_009389b0;
      }
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_40;
      local_40 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_18 = 0;
LAB_009389b0:
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

