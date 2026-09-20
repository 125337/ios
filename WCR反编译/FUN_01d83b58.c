// FUN_01d83b58 @ 01d83b58

void FUN_01d83b58(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  double dVar1;
  undefined8 uVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_4 + 0x20),PTR_s_frame_026ca640);
  uVar2 = 0x4034000000000000;
  dVar1 = param_3 / 2.0 + 20.0;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_4 + 0x20),PTR_s_center_026ca560);
  FUN_01d83b2c();
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar1,uVar2,*(undefined8 *)(param_4 + 0x20),PTR_s_setCenter__026ca8c0);
  return;
}

