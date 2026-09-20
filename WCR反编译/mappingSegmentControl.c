// mappingSegmentControl @ 019eef94

/* Function Stack Size: 0x10 bytes */

ID WCRefineFontConvertViewController::mappingSegmentControl(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_48;
  SEL local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  local_40 = param_2;
  local_38 = (undefined *)param_1;
  _objc_alloc();
  local_30 = &cf__M;
  local_28 = &cf_Ry;
  local_20 = &cf_N6;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithItems__0269e9d8);
  local_48 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_mappingMode_026b1028);
  if (-1 < (long)puVar1) {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_mappingMode_026b1028);
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_numberOfSegments_026b5610);
    if (puVar1 < puVar2) {
      puVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_mappingMode_026b1028);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setSelectedSegmentIndex__0269e9e0,puVar1)
      ;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_38,
             PTR_s_mappingModeChanged__026bb290,0x1000);
  puVar1 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

