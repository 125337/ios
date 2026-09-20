// displayColumnsTapped @ 01b67b98

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::displayColumnsTapped(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  ID IVar7;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = &cf_WCActionSheet;
  local_48 = param_2;
  local_40 = param_1;
  _NSClassFromString();
  pcVar2 = &cf_WCActionSheetItem;
  local_50 = pcVar1;
  _NSClassFromString();
  local_58 = pcVar2;
  if ((local_50 != (cfstringStruct *)0x0) && (pcVar2 != (cfstringStruct *)0x0)) {
    pcVar1 = local_50;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar2 = local_58;
    local_60 = pcVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar3 = local_58;
    local_38 = pcVar2;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar4 = local_58;
    local_30 = pcVar3;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar5 = local_58;
    local_28 = pcVar4;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_20 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,4
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_setValue_forKey__0269d300,puVar6,&cf_buttonTitleList);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar1 = local_60;
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0x24f763);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setValue_forKey__0269d300,puVar6,&cf_tag);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    pcVar1 = local_60;
    IVar7 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar7);
    _objc_storeStrong(&local_60,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

