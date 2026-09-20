// inputToolViewFromGrowTextView: @ 00fe8cbc

/* Function Stack Size: 0x18 bytes */

ID WCRefineInputBoxGestureSupport::inputToolViewFromGrowTextView_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_48;
  long local_40;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar3;
  local_40 = 0;
  do {
    lVar2 = local_40;
    if (local_38 != 0) {
      local_40 = local_40 + 1;
    }
    if (local_38 == 0 || 0xb < lVar2) {
      local_18 = 0;
      break;
    }
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8,&cf_MMInputToolView)
    ;
    if (((uVar3 & 1) == 0) &&
       (uVar3 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_48,PTR_s_containsString__0269d0b0,&cf_MMInputToolView), (uVar3 & 1) == 0)) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_38;
      local_38 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      bVar1 = false;
    }
    else {
      uVar3 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar3;
      bVar1 = true;
    }
    _objc_storeStrong(&local_48,0);
  } while (!bVar1);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

