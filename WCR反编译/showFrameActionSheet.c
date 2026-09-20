// showFrameActionSheet @ 01d652b4

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameLibraryViewController::showFrameActionSheet(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
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
  pcVar1 = &cf_WCActionSheet;
  local_38 = param_2;
  local_30 = param_1;
  _NSClassFromString();
  local_40 = pcVar1;
  if (pcVar1 != (cfstringStruct *)0x0) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar2 = &cf_WCActionSheetItem;
    local_48 = pcVar1;
    _NSClassFromString();
    local_50 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_54 = 1;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      pcVar1 = local_50;
      local_60 = pcVar2;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_28 = local_60;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_68 = pcVar1;
      local_20 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setValue_forKey__0269d300,puVar3,&cf_buttonTitleList);
      pcVar1 = local_48;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x5e9d);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_tag);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      pcVar1 = &cf_showInView_;
      _NSSelectorFromString();
      pcVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar1);
      pcVar2 = local_48;
      if (((ulong)pcVar4 & 1) != 0) {
        IVar5 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_performSelector_withObject__026ca7c0,pcVar1);
        (*(code *)PTR__objc_release_02578630)(IVar5);
      }
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      local_54 = 0;
    }
    _objc_storeStrong(&local_48,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

