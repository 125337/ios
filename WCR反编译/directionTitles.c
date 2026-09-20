// directionTitles @ 00f8b550

/* Function Stack Size: 0x10 bytes */

ID WCRefineGradientPalette::directionTitles(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = &cf__0RS;
  local_40 = &cf_S0R_;
  local_38 = &cf_N0RN;
  local_30 = &cf_N0RN;
  local_28 = &cf__N0RSN;
  local_20 = &cf_SN0R_N;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,6);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return (ID)puVar1;
}

