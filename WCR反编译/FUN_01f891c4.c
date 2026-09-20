// FUN_01f891c4 @ 01f891c4

void FUN_01f891c4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_40;
  
  lVar3 = *(long *)(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_reloadGeneration_026a2ab0);
  if (lVar3 == lVar1) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_viewVisible_026c9808);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_setLoadingItems__026c9b58,0);
      local_40 = *(long *)(param_1 + 0x28);
      if (local_40 == 0) {
        local_40 = *(long *)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_setItems__026a17a8,local_40);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_rebuildListSections_026ba410);
    }
  }
  return;
}

