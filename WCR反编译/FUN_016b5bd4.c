// FUN_016b5bd4 @ 016b5bd4

void FUN_016b5bd4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = 0;
  uVar2 = 0;
  FUN_01696f30();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,uVar3,uVar4,uVar5,uVar1,PTR_s_drawInRect__026ca610);
  _objc_storeStrong(&local_20,0);
  return;
}

