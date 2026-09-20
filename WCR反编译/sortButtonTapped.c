// sortButtonTapped @ 01fa7508

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::sortButtonTapped(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ID IVar5;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = &cf_WCActionSheet;
  local_38 = param_2;
  local_30 = param_1;
  _NSClassFromString();
  pcVar2 = &cf_WCActionSheetItem;
  local_40 = pcVar1;
  _NSClassFromString();
  local_48 = pcVar2;
  if ((local_40 != (cfstringStruct *)0x0) && (pcVar2 != (cfstringStruct *)0x0)) {
    pcVar1 = local_40;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar2 = local_48;
    local_50 = pcVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar3 = local_48;
    local_28 = pcVar2;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_20 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_setValue_forKey__0269d300,puVar4,&cf_buttonTitleList);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar1 = local_50;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x5f05);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setValue_forKey__0269d300,puVar4,&cf_tag);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
    pcVar1 = local_50;
    puVar4 = PTR_s_showInView__0269d310;
    if (((ulong)pcVar2 & 1) != 0) {
      IVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_performSelector_withObject__026ca7c0,puVar4);
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    _objc_storeStrong(&local_50,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

