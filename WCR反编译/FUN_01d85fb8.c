// FUN_01d85fb8 @ 01d85fb8

void FUN_01d85fb8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  if (-1 < *(long *)(param_1 + 0x28)) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    uVar1 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
    if (uVar3 < uVar1) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_objectAtIndexedSubscript__0269cc78,*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x30),PTR_s_saveViewControllerClassName__026c4c70,uVar2);
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_30,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

