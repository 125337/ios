// contactOpenModeControl @ 018cafb8

/* Function Stack Size: 0x10 bytes */

ID WCRefineChatToolbarViewController::contactOpenModeControl(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  local_28 = &cf_hQO_;
  local_20 = &cf_JSO_;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithItems__0269e9d8);
  local_40 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0x405f800000000000;
  uVar7 = 0x403e000000000000;
  FUN_018c86b0();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar6,uVar4,uVar7,local_40,PTR_s_setFrame__026ca960);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_setSelectedSegmentIndex__0269e9e0,
             puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1));
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_30,
             PTR_s_contactOpenModeChanged__026b7fd8,0x1000);
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

