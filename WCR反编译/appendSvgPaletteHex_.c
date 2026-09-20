// appendSvgPaletteHex: @ 01f38578

/* Function Stack Size: 0x18 bytes */

void WCRefineUIBeautifyViewController::appendSvgPaletteHex_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *local_70;
  undefined1 *local_48;
  undefined1 *local_40;
  uint local_34;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_normalizedSvgPaletteHex__026c89b8,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    local_34 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      local_48 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_48;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_70;
    if (puVar5 == (undefined1 *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    bVar1 = puVar4 < (undefined1 *)((long)&MACH_HEADER.cputype + 3);
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObject__0269d180,local_30);
      puVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf___);
    }
    local_34 = (uint)!bVar1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

