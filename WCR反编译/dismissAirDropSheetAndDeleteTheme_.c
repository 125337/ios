// dismissAirDropSheetAndDeleteTheme: @ 01743dfc

/* Function Stack Size: 0x14 bytes */

void ThemeBoxAirDropViewController::dismissAirDropSheetAndDeleteTheme_
               (ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined1 local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (undefined1)param_3;
  local_20 = param_2;
  local_18 = param_1;
  if ((param_3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_dismissAirDropSheetAnimated__026b3fc8,1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editingThemeIndex_026b3fd0);
    local_30 = (undefined *)param_1;
    if ((long)param_1 < 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dismissAirDropSheetAnimated__026b3fc8,1);
    }
    else {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_68 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_40 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_40;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_mutableCopy_0269d8a0);
      local_38 = local_68;
      if (puVar3 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_30;
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      if (puVar1 < puVar2) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObjectAtIndex__0269d530,local_30)
        ;
        puVar1 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setEditingThemeIndex__026b3db8,0xffffffffffffffff);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dismissAirDropSheetAnimated__026b3fc8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
      _objc_storeStrong(&local_38,0);
    }
  }
  return;
}

