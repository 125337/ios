// FUN_00f21478 @ 00f21478

void FUN_00f21478(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = &cf_fge;
  local_48 = &cf_fg;
  local_40 = &cf_fgN;
  local_38 = &cf_fgN;
  local_30 = &cf_fgV;
  local_28 = &cf_fgN;
  local_20 = &cf_fgmQ;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e2c58;
  DAT_028e2c58 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

