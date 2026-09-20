// FUN_0056c9e0 @ 0056c9e0

void FUN_0056c9e0(long param_1)

{
  long lVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_026ca800);
  lVar1 = *(long *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  }
  return;
}

