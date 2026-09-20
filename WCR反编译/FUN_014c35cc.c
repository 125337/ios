// FUN_014c35cc @ 014c35cc

void FUN_014c35cc(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x30;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_loadedPluginClassSet_026af5f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_loadPluginsOneByOne_atIndex__026af580,*(undefined8 *)(param_1 + 0x28),
               *(long *)(param_1 + 0x38) + 1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

