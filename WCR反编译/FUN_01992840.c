// FUN_01992840 @ 01992840

void FUN_01992840(long param_1)

{
  undefined *puVar1;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRFileManagerState_026cf1c8;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_isFavorite__026ba508,*(undefined8 *)(param_1 + 0x20));
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_addFavorite__026ba518,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_removeFavorite__026ba510,*(undefined8 *)(param_1 + 0x20));
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_28,0);
  return;
}

