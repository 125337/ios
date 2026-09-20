// autoReplyCountModeCellWithTitle:mode:action: @ 01a1b904

/* Function Stack Size: 0x28 bytes */

ID WCRefineGeneralFunctionViewController::autoReplyCountModeCellWithTitle_mode_action_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,SEL param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *local_58;
  SEL local_50;
  long_long local_48;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  puVar1 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  local_50 = param_5;
  local_48 = param_4;
  _objc_alloc();
  local_28 = &cf_USag;
  local_20 = &cf_Yag;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithItems__0269e9d8);
  local_58 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_setSelectedSegmentIndex__0269e9e0,local_48 == 1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_30,local_50,0x1000);
  pcVar3 = "WCTableViewCellManager";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)pcVar3;
}

