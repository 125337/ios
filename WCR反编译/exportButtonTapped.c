// exportButtonTapped @ 01fb1594

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::exportButtonTapped(ID param_1,SEL param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  lVar1 = *(long *)(param_1 + (long)_watermarkPaths);
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_4lpS__Nzz);
  }
  else if ((*(byte *)(local_30 + (long)_isExportSelectMode) & 1) == 0) {
    pcVar2 = &cf_WCActionSheet;
    _NSClassFromString();
    local_40 = pcVar2;
    if (pcVar2 != (cfstringStruct *)0x0) {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      pcVar3 = &cf_WCActionSheetItem;
      local_48 = pcVar2;
      _NSClassFromString();
      local_50 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_54 = 1;
      }
      else {
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        pcVar2 = local_50;
        local_60 = pcVar3;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_28 = local_60;
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_68 = pcVar2;
        local_20 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_28,2);
        _objc_retainAutoreleasedReturnValue();
        local_70 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setValue_forKey__0269d300,puVar4,&cf_buttonTitleList);
        pcVar2 = local_48;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x5f04);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setValue_forKey__0269d300,puVar4,&cf_tag)
        ;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        pcVar2 = &cf_showInView_;
        _NSSelectorFromString();
        pcVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar2);
        pcVar3 = local_48;
        if (((ulong)pcVar5 & 1) != 0) {
          IVar6 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_performSelector_withObject__026ca7c0,pcVar2);
          (*(code *)PTR__objc_release_02578630)(IVar6);
        }
        _objc_storeStrong(&local_70);
        _objc_storeStrong(&local_68,0);
        _objc_storeStrong(&local_60,0);
        local_54 = 0;
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  else {
    lVar1 = *(long *)(local_30 + (long)_selectedWatermarksForExport);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
    if (lVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__b);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_exportSelectedWatermarks_026c9e18);
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

