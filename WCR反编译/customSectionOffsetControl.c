// customSectionOffsetControl @ 01ebb26c

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoListSettingsViewController::customSectionOffsetControl(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  SEL local_70;
  ID local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_70 = param_2;
  local_68 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_78 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_toDoCardCustomSectionOffset_026a2578);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__ld);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  local_80 = puVar3;
  _objc_alloc();
  local_40 = &::cf__;
  local_38 = local_80;
  local_30 = &cf__;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithItems__0269e9d8);
  local_88 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0x4062c00000000000;
  uVar9 = 0x4040000000000000;
  FUN_01ebb220();
  local_d0 = uVar7;
  uStack_c8 = uVar8;
  local_c0 = uVar6;
  uStack_b8 = uVar9;
  local_a8 = uVar7;
  uStack_a0 = uVar8;
  local_98 = uVar6;
  uStack_90 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,uVar8,uVar6,uVar9,local_88,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setSelectedSegmentIndex__0269e9e0);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setWidth_forSegmentAtIndex__026b7160);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x404f000000000000,local_88,PTR_s_setWidth_forSegmentAtIndex__026b7160,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4046000000000000,local_88,PTR_s_setWidth_forSegmentAtIndex__026b7160,2);
  puVar1 = local_88;
  puVar2 = PTR__UIFontWeightRegular_02578158;
  puVar3 = PTR__NSFontAttributeName_02578068;
  local_50 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
  puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402e000000000000,*(undefined8 *)PTR__UIFontWeightRegular_02578158,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_48 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_48,&local_50,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setTitleTextAttributes_forState__0269e9f0,puVar5,0);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar1 = local_88;
  local_60 = *(undefined8 *)puVar3;
  puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402e000000000000,*(undefined8 *)puVar2,PTR__OBJC_CLASS___UIFont_026cdfc0,
             PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_58 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_58,&local_60,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setTitleTextAttributes_forState__0269e9f0,puVar2,4);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_88,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_68,
             PTR_s_customSectionOffsetSegmentChange_026c7848,0x1000);
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar7 = 0;
  uVar8 = 0x4062c00000000000;
  uVar9 = 0x4040000000000000;
  uVar6 = uVar7;
  FUN_01ebb220();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,uVar6,uVar8,uVar9,puVar3,PTR_s_initWithFrame__026ca6e8);
  local_d8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addSubview__026ca4c0,local_88);
  puVar3 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar3;
}

