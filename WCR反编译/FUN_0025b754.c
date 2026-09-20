// FUN_0025b754 @ 0025b754

void FUN_0025b754(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined **local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = &cf_title;
  local_28 = &cf_eQn_u;
  local_30 = &cf_handler;
  ppuVar1 = &PTR___NSConcreteGlobalBlock_0257b018;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_20 = ppuVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_28,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar2);
  return;
}

