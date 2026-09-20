// FUN_0056d68c @ 0056d68c

void FUN_0056d68c(long param_1)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  long local_20;
  long local_18;
  
  dVar2 = DAT_023241d8;
  local_20 = param_1;
  local_18 = param_1;
  _CGAffineTransformMakeScale(DAT_023241d8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _memcpy(auStack_80,auStack_50,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTransform__026caad0,auStack_80);
  uVar1 = 0;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__026ca860);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_center_026ca560);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_center_026ca560);
  dVar2 = dVar2 - 50.0;
  FUN_0056d460();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,dVar2,*(undefined8 *)(param_1 + 0x20),PTR_s_setCenter__026ca8c0);
  return;
}

