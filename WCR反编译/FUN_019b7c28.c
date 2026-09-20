// FUN_019b7c28 @ 019b7c28

void FUN_019b7c28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  cfstringStruct *local_70;
  cfstringStruct *local_48;
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
    pcVar2 = (cfstringStruct *)PTR_WCRefineBottomBarLongPressActionSelector_026ce258;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineBottomBarLongPressActionSelector_026ce258,
               PTR_s_storedValueForPickerOptionTitle__0269e408,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    if ((pcVar2 != (cfstringStruct *)0x0) ||
       (uVar3 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_eR_O),
       (uVar3 & 1) != 0)) {
      if (local_48 == (cfstringStruct *)0x0) {
        local_70 = &cf___;
      }
      else {
        local_70 = local_48;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setStoredAction_forTabIndex__026ba990,local_70,local_28);
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

