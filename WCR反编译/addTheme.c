// addTheme @ 0173c2ec

/* Function Stack Size: 0x10 bytes */

void ThemeBoxAirDropViewController::addTheme(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *local_c8;
  undefined *local_a8;
  undefined *local_a0;
  ID local_98;
  byte local_89;
  undefined *local_88;
  undefined *local_80;
  SEL local_78;
  ID local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = param_2;
  local_70 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_89 = 0;
  local_c8 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_c8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_88 = local_c8;
  }
  local_89 = puVar3 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_mutableCopy_0269d8a0);
  local_80 = local_c8;
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_currentStockRepository_026b3dd8);
  puVar1 = local_80;
  local_98 = IVar4;
  FUN_0173ad48(local_80,IVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_68 = &cf_name;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_a0 = puVar2 + 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__N_);
  _objc_retainAutoreleasedReturnValue();
  local_60 = &cf_codes;
  local_40 = &::cf___;
  local_58 = &cf_valid;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = &cf_provider;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_98);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_48,&local_68,4);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_insertObject_atIndex__0269eac0,local_a8);
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
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_reloadTableData_0269dca8);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_openThemeEditorAtIndex__026b3f10,0);
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

