// FUN_015ba5ec @ 015ba5ec

void FUN_015ba5ec(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong local_28;
  long local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x20));
  if ((uVar1 & 1) == 0) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_hasPrefix__0269d320,*(undefined8 *)(param_1 + 0x30));
    uVar1 = local_28;
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringFromIndex__0269d120,uVar2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByAppendingString__0269d398);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

