// FUN_001a22a0 @ 001a22a0

void FUN_001a22a0(long param_1)

{
  long lVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_beginUpdates_0269fd58)
  ;
  lVar1 = *(long *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_insertRowsAtIndexPaths_withRowAn_0269fd60,
               *(undefined8 *)(param_1 + 0x28),5);
  }
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_endUpdates_0269fd68);
  return;
}

