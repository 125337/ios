// FUN_00876ff0 @ 00876ff0

void FUN_00876ff0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = &cf_star_3_line_regular;
  local_50 = &cf_ai_filled;
  local_48 = &cf_xiaowei_filled;
  local_40 = &cf_icons_outlined_addoutline;
  local_38 = &cf_icons_outlined_search;
  local_30 = &cf_icons_filled_search;
  local_28 = &cf_arrow_left_regular;
  local_20 = &cf_dot_3_regular;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028cd878;
  DAT_028cd878 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

