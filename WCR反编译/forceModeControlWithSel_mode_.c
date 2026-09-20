// forceModeControlWithSel:mode: @ 01f4c174

/* Function Stack Size: 0x20 bytes */

ID WCRefineVersionController::forceModeControlWithSel_mode_
             (ID param_1,SEL param_2,SEL param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long_long local_60;
  undefined *local_58;
  long_long local_50;
  SEL local_48;
  SEL local_40;
  ID local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  local_50 = param_4;
  local_48 = param_3;
  local_40 = param_2;
  local_38 = param_1;
  _objc_alloc();
  local_30 = &::cf__;
  local_28 = &::cf___;
  local_20 = &cf_y_u;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithItems__0269e9d8);
  local_58 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_60 = local_50;
  if (((long)local_50 < 0) || (2 < (long)local_50)) {
    local_60 = 0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setSelectedSegmentIndex__0269e9e0,local_60);
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0x4060800000000000;
  uVar6 = 0x403c000000000000;
  FUN_01f4c380();
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,uVar3,uVar6,local_58,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_applyForceModeAppearanceToContro_026c9108,local_58,local_60);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_38,local_48,0x1000);
  puVar1 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

