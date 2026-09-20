// FUN_004519d0 @ 004519d0

void FUN_004519d0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setEmoticonList__026a0e30);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setEmoticonList__026a0e30,
               *(undefined8 *)(param_1 + 0x28));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_00451aac();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_reloadData_0269e400);
  _objc_storeStrong(&local_28,0);
  return;
}

