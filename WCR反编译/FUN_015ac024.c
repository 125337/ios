// FUN_015ac024 @ 015ac024

void FUN_015ac024(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _WCRefineSendVoiceDataToChat
            (uVar1,*(undefined4 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),(byte)uVar1 & 1);
  }
  return;
}

