// FUN_0075c144 @ 0075c144

void FUN_0075c144(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint local_30;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  FUN_0075ee98(local_18,param_2,DAT_028cc838);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  local_30 = 0;
  if ((uVar2 & 1) != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_accessibilityIdentifier_0269ec20);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = (uint)uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if ((local_30 & 1) != 0) {
    _WCRGroupingNotifyInlineFoldBarDidLayout(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

