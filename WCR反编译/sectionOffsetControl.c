// sectionOffsetControl @ 01ae14f8

/* Function Stack Size: 0x10 bytes */

ID WCRefineHomeAvatarStripSettingsViewController::sectionOffsetControl(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined *local_58;
  SEL local_50;
  ID local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__ld);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  _objc_alloc();
  local_40 = &::cf__;
  local_38 = local_58;
  local_30 = &cf__;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithItems__0269e9d8);
  local_60 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0x4062c00000000000;
  uVar6 = 0x4040000000000000;
  FUN_01ae107c();
  local_a0 = uVar4;
  uStack_98 = uVar5;
  local_90 = uVar3;
  uStack_88 = uVar6;
  local_80 = uVar4;
  uStack_78 = uVar5;
  local_70 = uVar3;
  uStack_68 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,uVar3,uVar6,local_60,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setSelectedSegmentIndex__0269e9e0);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setWidth_forSegmentAtIndex__026b7160,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x404f000000000000,local_60,PTR_s_setWidth_forSegmentAtIndex__026b7160,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4046000000000000,local_60,PTR_s_setWidth_forSegmentAtIndex__026b7160,2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_48,
             PTR_s_sectionOffsetChanged__026be250,0x1000);
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar4 = 0;
  uVar5 = 0x4062c00000000000;
  uVar6 = 0x4040000000000000;
  uVar3 = uVar4;
  FUN_01ae107c();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar3,uVar5,uVar6,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_a8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addSubview__026ca4c0,local_60);
  puVar2 = local_a8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar2;
}

