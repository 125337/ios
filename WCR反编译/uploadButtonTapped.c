// uploadButtonTapped @ 01d65584

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameLibraryViewController::uploadButtonTapped(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined4 local_5c;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  SEL local_40;
  ID local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = &cf_WCActionSheet;
  local_40 = param_2;
  local_38 = param_1;
  _NSClassFromString();
  local_48 = pcVar1;
  if (pcVar1 != (cfstringStruct *)0x0) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar2 = &cf_WCActionSheetItem;
    local_50 = pcVar1;
    _NSClassFromString();
    local_58 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_5c = 1;
    }
    else {
      _objc_alloc_init();
      local_68 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setValue_forKey__0269d300,&cf_NvQb);
      pcVar1 = local_58;
      _objc_alloc_init();
      local_70 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_setValue_forKey__0269d300,&cf_NeNb,&cf_title);
      pcVar1 = local_58;
      _objc_alloc_init();
      local_78 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setValue_forKey__0269d300,&cf_NZ,&cf_title)
      ;
      local_30 = local_68;
      local_28 = local_70;
      local_20 = local_78;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setValue_forKey__0269d300,puVar3,&cf_buttonTitleList);
      pcVar1 = local_50;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x5e9f);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_tag);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      pcVar1 = &cf_showInView_;
      _NSSelectorFromString();
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar1);
      pcVar2 = local_50;
      if (((ulong)pcVar4 & 1) != 0) {
        IVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_performSelector_withObject__026ca7c0,pcVar1);
        (*(code *)PTR__objc_release_02578630)(IVar5);
      }
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      local_5c = 0;
    }
    _objc_storeStrong(&local_50,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

