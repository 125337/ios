// FUN_009008f4 @ 009008f4

void FUN_009008f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  uVar1 = DAT_028ce338;
  DAT_028ce338 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

