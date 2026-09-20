// extraButtonOffsetValueButtonTapped: @ 019b5988

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineFloatingTabBarButtonActionViewController::extraButtonOffsetValueButtonTapped_
          (WCRefineFloatingTabBarButtonActionViewController *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  char *pcVar7;
  cfstringStruct *local_100;
  char *local_c8;
  undefined4 local_bc;
  char *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  ID local_90;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  long local_68;
  long local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  IVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hapticGenerator_026b5f48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  lVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_tag_026cab98);
  IVar1 = local_50;
  local_68 = lVar2 + -0x1964;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(IVar1,&DAT_028e4428,puVar3,1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = &cf_c4ls_OPy;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = &::cf_eQ;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_floatingTabBarExtraButtonOffsetX_026a1a20);
  if (local_68 == 0x1f6) {
    _objc_storeStrong(0,&local_70,&cf_cWvOPy);
    _objc_storeStrong(&local_78,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_floatingTabBarExtraButtonOffsetY_026a1a28);
  }
  else if (local_68 == 0x1f7) {
    _objc_storeStrong(0,&local_70,&cf_c_Y_);
    _objc_storeStrong(&local_78,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_floatingTabBarExtraButtonSizeAdj_026a1a30);
  }
  else {
    IVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_isExtraButtonIconSizeSliderTag__026ba8c8,local_68);
    if ((IVar1 & 1) != 0) {
      IVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_tabIndexForExtraButtonIconSizeSl_026ba8e8,local_68);
      local_48 = &cf__O;
      local_40 = &cf_U_;
      local_38 = &cf_Ss;
      local_30 = &::cf_b;
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_90 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_90;
      local_a9 = 0;
      local_98 = pcVar4;
      if (((long)local_90 < 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_count_0269cfe0),
         (long)pcVar4 <= (long)IVar1)) {
        local_100 = &cf_S_MRub;
      }
      else {
        local_100 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_objectAtIndexedSubscript__0269cc78,local_90);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 1;
        local_a8 = local_100;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_100;
      if ((local_a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_70;
      local_70 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      _objc_storeStrong(&local_78,&::cf_eQ);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_extraButtonIconSizeForTabIndex_c_026ba888,local_90,local_80);
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_98,0);
    }
  }
  pcVar6 = "WCUIAlertView";
  _objc_getClass();
  local_b8 = pcVar6;
  if (pcVar6 == (char *)0x0) {
    local_bc = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c8 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_showTextFieldWithMaxLen__0269e5e0,5);
    pcVar7 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
    pcVar6 = local_c8;
    if (((ulong)pcVar7 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_setTextFieldDefaultText__0269fd98);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_50,
               PTR_s_cancelExtraButtonOffsetInput__026ba918);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_50,
               PTR_s_confirmExtraButtonOffsetInput__026ba920);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setWcr_metricAlert__026ba928,local_c8);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_show_0269d280);
    _objc_storeStrong(&local_c8,0);
    local_bc = 0;
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

