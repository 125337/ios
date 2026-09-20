// FUN_0026cd04 @ 0026cd04

void FUN_0026cd04(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,
               PTR_s_WCRefineFavoritesLP_finishLongPr_026a1380);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_WCRefineFavoritesLP_finishLongPr_026a1380,
                 *(undefined8 *)(param_1 + 0x28));
    }
  }
  return;
}

