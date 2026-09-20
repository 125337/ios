// FUN_01bd2f44 @ 01bd2f44

void FUN_01bd2f44(long param_1)

{
  long lVar1;
  long lVar2;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if ((lVar1 != 0) &&
     (lVar2 = *(long *)(param_1 + 0x30),
     (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_loadGeneration_026c0728), lVar2 == lVar1)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setIndexComplete__026c07c0,*(byte *)(param_1 + 0x38) & 1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_applyLoadedItems_generation_fini_026c07c8,
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
               *(byte *)(param_1 + 0x38) & 1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

