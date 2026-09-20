// FUN_00661c54 @ 00661c54

void FUN_00661c54(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  _objc_setAssociatedObject(uVar1,&DAT_028cbc5f,0,1);
  FUN_0064cd38();
  if ((uVar1 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    _objc_getAssociatedObject(uVar2,&DAT_028cbc1c);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar1 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      FUN_006512f4(uVar3,0);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      FUN_006512f4(uVar4,1);
      if ((int)uVar3 != 0 || (int)uVar4 != 0) {
        FUN_0064d900(*(undefined8 *)(param_1 + 0x20));
      }
    }
    else {
      _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),&DAT_028cbc1c,0,1);
      FUN_0064d900(*(undefined8 *)(param_1 + 0x20));
    }
  }
  return;
}

