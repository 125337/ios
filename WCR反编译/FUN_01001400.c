// FUN_01001400 @ 01001400

void FUN_01001400(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  long local_88;
  long local_80;
  
  dVar1 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 0x28));
  local_80 = *(long *)(param_2 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
  if (local_80 == 0) {
    local_80 = 1;
  }
  dVar2 = (double)NEON_ucvtf(local_80);
  local_88 = *(long *)(param_2 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
  if (local_88 == 0) {
    local_88 = 1;
  }
  dVar3 = (double)NEON_ucvtf(local_88);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323c90 + DAT_0232c678 * (dVar1 / dVar2 + (1.0 / dVar3) * param_1),
             *(undefined8 *)(param_2 + 0x30),PTR_s_updateProgressToast__026ad910);
  return;
}

