// FUN_01011978 @ 01011978

void FUN_01011978(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  long local_88;
  long local_80;
  
  local_80 = *(long *)(param_2 + 0x28);
  if (local_80 == 0) {
    local_80 = 1;
  }
  dVar1 = (double)NEON_ucvtf(local_80);
  local_88 = *(long *)(param_2 + 0x28);
  if (local_88 == 0) {
    local_88 = 1;
  }
  dVar2 = (double)NEON_ucvtf(local_88);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323c90 +
             DAT_0232c678 *
             ((double)(*(long *)(param_2 + 0x20) - 1) / dVar1 + (1.0 / dVar2) * param_1),
             *(undefined8 *)(param_2 + 0x30),PTR_s_updateProgressToast__026ad910);
  return;
}

