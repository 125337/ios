// formatSegmentControl @ 019ef2e4

/* Function Stack Size: 0x10 bytes */

ID WCRefineFontConvertViewController::formatSegmentControl(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  local_38 = param_2;
  local_30 = param_1;
  _objc_alloc();
  local_28 = &cf_TTC;
  local_20 = &cf_TTF;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithItems__0269e9d8);
  local_40 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_outputFormat_026b1038);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setSelectedSegmentIndex__0269e9e0,IVar3 == 1)
  ;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_30,
             PTR_s_outputFormatChanged__026bb2a0,0x1000);
  puVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

