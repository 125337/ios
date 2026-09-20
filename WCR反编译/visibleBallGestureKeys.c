// visibleBallGestureKeys @ 01614854

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatProfileStore::visibleBallGestureKeys(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_f0;
  undefined *local_e8;
  ID local_e0;
  byte local_d1;
  undefined *local_d0;
  byte local_c1;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ballAppearance_026b18a0);
  if (param_1 == 0) {
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_menuOpenTrigger_026b1960);
    local_c1 = 0;
    local_d1 = 0;
    local_f0 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    if (IVar1 == 0) {
      local_30 = &cf_doubleTap;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_c1 = 1;
      local_c0 = local_f0;
    }
    else {
      local_40 = &cf_tap;
      local_38 = &cf_doubleTap;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_d1 = 1;
      local_d0 = local_f0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = local_f0;
    if ((local_d1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
    }
    if ((local_c1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c0);
    }
  }
  else {
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_menuOpenTrigger_026b1960);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_e0 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar2;
    if (local_e0 == 1) {
      local_70 = &cf_tap;
      local_68 = &cf_doubleTap;
      local_60 = &cf_swipeUp;
      local_58 = &cf_swipeDown;
      local_50 = &cf_swipeLeft;
      local_48 = &cf_swipeRight;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70
                 ,6);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else if (local_e0 == 2) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180,&cf_tap);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,&cf_doubleTap);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,&cf_swipeUp);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,&cf_swipeDown);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,&cf_swipeLeft);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,&cf_swipeRight);
    }
    else {
      local_a0 = &cf_longPress;
      local_98 = &cf_doubleTap;
      local_90 = &cf_swipeUp;
      local_88 = &cf_swipeDown;
      local_80 = &cf_swipeLeft;
      local_78 = &cf_swipeRight;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_a0
                 ,6);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar2 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_copy_0269d150);
    local_a8 = puVar2;
    _objc_storeStrong(&local_e8,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_a8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

