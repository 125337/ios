// FUN_019c1aa8 @ 019c1aa8

void FUN_019c1aa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_48;
  int local_3c;
  long local_38;
  long local_30;
  undefined8 local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x20;
  local_30 = param_1;
  local_28 = param_3;
  _objc_loadWeakRetained();
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_3c = 1;
  }
  else {
    puVar2 = PTR_WCRefineBottomBarLongPressActionSelector_026ce258;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineBottomBarLongPressActionSelector_026ce258,
               PTR_s_storedValueForPickerOptionTitle__0269e408,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    if ((puVar2 != (undefined *)0x0) ||
       (uVar3 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_eR_O),
       (uVar3 & 1) != 0)) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_floatingNotifyInjected_026babd0);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_reloadTableData_0269dca8);
    }
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  if (local_3c == 0) {
    local_3c = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

