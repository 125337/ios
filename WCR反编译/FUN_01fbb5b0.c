// FUN_01fbb5b0 @ 01fbb5b0

void FUN_01fbb5b0(long param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_128;
  double local_120;
  double local_110;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_128 = *(double *)(param_1 + 0x28);
  local_110 = local_128;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_size_026cab00);
  if (local_110 < 1.0) {
    local_110 = 1.0;
  }
  local_128 = local_128 / local_110;
  dVar2 = *(double *)(param_1 + 0x30);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_size_026cab00);
  local_120 = local_110;
  if (local_110 < 1.0) {
    local_120 = 1.0;
  }
  dVar2 = dVar2 / local_120;
  if (local_128 < dVar2) {
    local_128 = dVar2;
  }
  dVar2 = local_128;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_size_026cab00);
  dVar2 = dVar2 * local_128;
  dVar4 = local_128;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_size_026cab00);
  dVar4 = dVar4 * local_128;
  FUN_01fb648c();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  dVar3 = (*(double *)(param_1 + 0x28) - dVar2) / 2.0;
  dVar5 = (*(double *)(param_1 + 0x30) - dVar4) / 2.0;
  FUN_01fb73a4();
  (*(code *)PTR__objc_msgSend_02578628)(dVar3,dVar5,dVar2,dVar4,uVar1,PTR_s_drawInRect__026ca610);
  _objc_storeStrong(&local_30,0);
  return;
}

