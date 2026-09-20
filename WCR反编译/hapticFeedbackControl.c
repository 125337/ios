// hapticFeedbackControl @ 018cac80

/* Function Stack Size: 0x10 bytes */

ID WCRefineChatToolbarViewController::hapticFeedbackControl(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_98;
  undefined *local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  local_48 = param_2;
  local_40 = param_1;
  _objc_alloc();
  local_38 = &cf_e;
  local_30 = &cf___;
  local_28 = &cf__NI_;
  local_20 = &cf___p;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithItems__0269e9d8);
  local_50 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0x406b800000000000;
  uVar6 = 0x403e000000000000;
  FUN_018c86b0();
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,uVar3,uVar6,local_50,PTR_s_setFrame__026ca960);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_98 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((long)local_98 < 0) {
    local_98 = (undefined *)0x0;
  }
  if (3 < (long)local_98) {
    local_98 = (undefined *)((long)&MACH_HEADER.magic + 3);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setSelectedSegmentIndex__0269e9e0,local_98);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_40,
             PTR_s_hapticFeedbackChanged__026b7fc8,0x1000);
  puVar1 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

