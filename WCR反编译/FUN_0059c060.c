// FUN_0059c060 @ 0059c060

void FUN_0059c060(long param_1)

{
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setProgressToast__026a5600,0);
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),*(byte *)(param_1 + 0x38) & 1,
               *(undefined8 *)(param_1 + 0x28));
  }
  return;
}

