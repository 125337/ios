// FUN_01cd25ec @ 01cd25ec

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_01cd25ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_88 = &cf__eN;
  local_90 = &cf_WCPayMainViewControllerV2;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_90);
  _objc_retainAutoreleasedReturnValue();
  local_80 = &cf_vd;
  local_98 = &cf_WCFinderLiveHomePageViewController;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_58 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_98,1);
  _objc_retainAutoreleasedReturnValue();
  local_78 = &cf_gSW;
  local_a0 = &cf_WCTimeLineViewController;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_a0,1);
  _objc_retainAutoreleasedReturnValue();
  local_70 = &cf_S;
  local_a8 = &cf_WCFinderTimelineTabViewController;
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_48 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_a8,1);
  _objc_retainAutoreleasedReturnValue();
  local_68 = &cf_6eN>k;
  local_b0 = &cf_KindaViewController;
  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_40 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b0,1);
  _objc_retainAutoreleasedReturnValue();
  local_60 = &cf_kb;
  local_b8 = &cf_CameraScanViewController;
  puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_38 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_58,&local_88,6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = DAT_028e46d8;
  DAT_028e46d8 = puVar8;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

