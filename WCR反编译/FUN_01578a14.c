// FUN_01578a14 @ 01578a14

void FUN_01578a14(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = &cf_WCTimeLineViewController;
  local_38 = &cf_WCFinderTimelineTabViewController;
  local_30 = &cf_WCFinderLiveHomePageViewController;
  local_28 = &cf_KindaViewController;
  local_20 = &cf_CameraScanViewController;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,5);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e3a10;
  DAT_028e3a10 = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

