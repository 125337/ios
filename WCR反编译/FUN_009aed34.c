// FUN_009aed34 @ 009aed34

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_009aed34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = &cf_category;
  local_40 = &cf__J___;
  local_50 = &cf_name;
  local_38 = &cf_pR__;
  local_48 = &cf_prompt;
  local_30 = &cf__O_f;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_40,&local_58);
  _objc_retainAutoreleasedReturnValue();
  local_88 = &cf_category;
  local_70 = &cf__J___;
  local_80 = &cf_name;
  local_68 = &cf_lbJT;
  local_78 = &cf_prompt;
  local_60 = &cf_b_Qv_JQ____bY_Nv_JbJTcekz_Q<h(u__<Ofp_o_uvl_kPN0k*NMRhl_SQ[S__O(u;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_70,&local_88,3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_20 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = DAT_028e27c8;
  DAT_028e27c8 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

