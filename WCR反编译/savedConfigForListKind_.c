// savedConfigForListKind: @ 0186da64

/* Function Stack Size: 0x18 bytes */

ID WCRefineBottomBarLongPressActionSelector::savedConfigForListKind_
             (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_118;
  undefined *local_108;
  undefined *local_f8;
  undefined *local_e0;
  undefined *local_c8;
  undefined *local_b0;
  undefined *local_98;
  undefined *local_80;
  long_long local_78;
  SEL local_70;
  ID local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_78 = param_3;
  local_70 = param_2;
  local_68 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar1;
  if (local_78 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatMoreActionListConfig_026b6c08);
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_98 = *(undefined **)PTR____NSDictionary0___02578288;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_98;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else if (local_78 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_messageGestureActionListConfig_026b6c10);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_b0 = *(undefined **)PTR____NSDictionary0___02578288;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_b0;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else if (local_78 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_homeLongPressActionListConfig_026b6c18);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_c8 = *(undefined **)PTR____NSDictionary0___02578288;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_c8;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else if (local_78 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_momentsDoubleTapActionListConfig_026b6c20);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_e0 = *(undefined **)PTR____NSDictionary0___02578288;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_e0;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    local_58 = &cf_order;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_actionMenuActionOrder_026b6c28);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_f8 = *(undefined **)PTR____NSArray0___02578280;
    }
    local_40 = local_f8;
    local_50 = &cf_hidden;
    puVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_actionMenuHiddenActions_026b6c30);
    _objc_retainAutoreleasedReturnValue();
    local_108 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_108 = *(undefined **)PTR____NSArray0___02578280;
    }
    local_38 = local_108;
    local_48 = &cf_titles;
    puVar3 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_actionMenuCustomTitles_026b6c38);
    _objc_retainAutoreleasedReturnValue();
    local_118 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_118 = *(undefined **)PTR____NSDictionary0___02578288;
    }
    local_30 = local_118;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_60;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

