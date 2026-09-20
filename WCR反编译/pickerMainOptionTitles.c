// pickerMainOptionTitles @ 0186f320

/* Function Stack Size: 0x10 bytes */

ID WCRefineBottomBarLongPressActionSelector::pickerMainOptionTitles(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  ID local_60;
  ID local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_a8 = &cf__eN;
  local_a0 = &cf_vd;
  local_98 = &cf_gSW;
  local_90 = &::cf_S;
  local_88 = &cf_6eN>k;
  local_80 = &cf_kb;
  local_78 = &cf___;
  local_70 = &cf_Rbc_S;
  local_68 = &cf_cN6e_;
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_displayNameForStoredAction__026b6be8,&cf_WCRefineTogglePrivateFriend);
  _objc_retainAutoreleasedReturnValue();
  local_60 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_displayNameForStoredAction__026b6be8,&cf_WCRefineTogglePluginHub);
  _objc_retainAutoreleasedReturnValue();
  local_50 = &cf_d__cN;
  local_48 = &cf__ed__;
  local_40 = &cf_WCRefine;
  local_38 = &cf__nm_h;
  local_30 = &cf__NvP_;
  local_28 = &cf__vRKb;
  local_20 = &cf_bvN_x;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_58 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_a8,
             0x12);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar2;
}

