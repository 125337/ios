// FUN_000f8828 @ 000f8828

void FUN_000f8828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint local_a4;
  ulong local_80;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_80 = 0;
  }
  else {
    local_80 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_accessibilityIdentifier_0269ec20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_a4 = 0;
  if ((uVar2 & 1) == 0) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a4 = (uint)uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  (*(code *)PTR__objc_release_02578630)(local_80);
  if ((local_a4 & 1) != 0) {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_30 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  FUN_00102c2c(local_18,local_30);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

