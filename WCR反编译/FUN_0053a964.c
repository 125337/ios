// FUN_0053a964 @ 0053a964

void FUN_0053a964(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
    FUN_0053a9d0();
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  }
  return;
}

