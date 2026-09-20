// themeSwipeActionSpecsForName: @ 01fbec04

/* Function Stack Size: 0x18 bytes */

ID WCRefineWechatThemeManagerViewController::themeSwipeActionSpecsForName_
             (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *local_118;
  undefined4 local_10c;
  ulong local_108;
  SEL local_100;
  ID local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined *local_98;
  undefined *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_108 = 0;
  local_100 = param_2;
  local_f8 = param_1;
  _objc_storeStrong(&local_108,param_3);
  uVar1 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_10c = 1;
    local_f0 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_58 = &cf_title;
    local_40 = &::cf_Sb;
    local_50 = &cf_color;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_118 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGrayColor_026a9fa8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = &cf_sel;
    puVar4 = PTR_s_openThemeNamed__026ca050;
    local_38 = puVar3;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar6 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_isThemePinned__026ca058,local_108);
    puVar2 = local_118;
    local_88 = &cf_title;
    local_70 = &cf_Smn_v;
    if ((IVar6 & 1) == 0) {
      local_70 = &cf_n_v;
    }
    local_80 = &cf_color;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemPurpleColor_026cab90);
    _objc_retainAutoreleasedReturnValue();
    local_78 = &cf_sel;
    puVar4 = PTR_s_togglePinThemeNamed__026ca060;
    local_68 = puVar3;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_60 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_70,&local_88,3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar1 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_isEqualToString__0269ccc8,&cf__e_N);
    puVar2 = local_118;
    if ((uVar1 & 1) == 0) {
      local_b8 = &cf_title;
      local_a0 = &cf__TT;
      local_b0 = &cf_color;
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBlueColor_026cab58);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = &cf_sel;
      puVar4 = PTR_s_promptRenameThemeNamed__026ca068;
      local_98 = puVar3;
      _NSStringFromSelector();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_90 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_a0,&local_b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar2 = local_118;
      local_e8 = &cf_title;
      local_d0 = &cf_Rd;
      local_e0 = &cf_color;
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = &cf_sel;
      puVar4 = PTR_s_confirmDeleteThemeNamed__026ca070;
      local_c8 = puVar3;
      _NSStringFromSelector();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_c0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d0,&local_e8,3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar2 = local_118;
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = puVar2;
    local_10c = 1;
    _objc_storeStrong(&local_118,0);
  }
  _objc_storeStrong(&local_108,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_f0;
}

