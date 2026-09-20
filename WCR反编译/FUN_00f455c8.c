// FUN_00f455c8 @ 00f455c8

void FUN_00f455c8(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    _NSLog(&cf__wcr__emoticon_videoofficialconverttimeoutpath___);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  return;
}

