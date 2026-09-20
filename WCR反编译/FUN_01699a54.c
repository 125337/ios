// FUN_01699a54 @ 01699a54

void FUN_01699a54(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,*(undefined8 *)(param_1 + 0x30));
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x28));
  }
  return;
}

