// FUN_0157bc74 @ 0157bc74

void FUN_0157bc74(long param_1)

{
  bool bVar1;
  undefined8 local_48;
  undefined8 local_28;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_becomeFirstResponder_0269d108);
  local_48 = *(long *)(param_1 + 0x28);
  bVar1 = local_48 == 0;
  if (bVar1) {
    FUN_01562e38();
    _objc_retainAutoreleasedReturnValue();
    local_48 = param_1;
    local_28 = param_1;
  }
  FUN_01562d20(local_48,1);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  return;
}

