// FUN_000dc670 @ 000dc670

void FUN_000dc670(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_58;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c8378);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UISegmentedControl_026ce290,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
    local_58 = 0;
  }
  else {
    local_58 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_58);
  return;
}

