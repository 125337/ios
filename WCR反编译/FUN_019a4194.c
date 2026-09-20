// FUN_019a4194 @ 019a4194

void FUN_019a4194(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_searchGeneration_026b9d38);
  if (lVar2 == lVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_addObjectsFromArray__0269d540,
               *(undefined8 *)(param_1 + 0x30));
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_applyFilter_026ae510);
  }
  return;
}

