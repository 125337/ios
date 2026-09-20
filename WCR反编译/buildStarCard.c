// buildStarCard @ 01eaa0d8

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoItemEditViewController::buildStarCard(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  ID IVar15;
  ID IVar16;
  ID IVar17;
  undefined *puVar18;
  ID local_70;
  ID local_68;
  SEL local_60;
  ID local_58;
  ID local_50;
  ID local_48;
  ID local_40;
  ID local_38;
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = param_2;
  local_58 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_makeCard_026c7528);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_58;
  local_68 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_makeRowTitle__026c7548,&cf__Ne8_);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UISwitch_026cea90;
  local_70 = IVar1;
  _objc_alloc_init();
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDailySwitch__026c75e8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_dailySwitch_026c75f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_editingDaily_026c75f8);
  IVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_dailySwitch_026c75f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_dailySwitch_026c75f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_addSubview__026ca4c0,local_70);
  IVar1 = local_68;
  IVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_dailySwitch_026c75f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
  IVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_heightAnchor_0269ce50);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(0x4048000000000000);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_70;
  local_50 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4030000000000000,IVar4,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = local_70;
  local_48 = IVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_centerYAnchor_0269ce10);
  _objc_retainAutoreleasedReturnValue();
  IVar8 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_centerYAnchor_0269ce10);
  _objc_retainAutoreleasedReturnValue();
  IVar9 = IVar7;
  (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  IVar10 = local_58;
  local_40 = IVar9;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_dailySwitch_026c75f0);
  _objc_retainAutoreleasedReturnValue();
  IVar11 = IVar10;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar12 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  IVar13 = IVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (0xc030000000000000,IVar11,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  IVar14 = local_58;
  local_38 = IVar13;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_dailySwitch_026c75f0);
  _objc_retainAutoreleasedReturnValue();
  IVar15 = IVar14;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar16 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_centerYAnchor_0269ce10);
  _objc_retainAutoreleasedReturnValue();
  IVar17 = IVar15;
  (*(code *)PTR__objc_msgSend_02578628)(IVar15,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = IVar17;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_activateConstraints__0269ce58);
  (*(code *)PTR__objc_release_02578630)(puVar18);
  (*(code *)PTR__objc_release_02578630)(IVar17);
  (*(code *)PTR__objc_release_02578630)(IVar16);
  (*(code *)PTR__objc_release_02578630)(IVar15);
  (*(code *)PTR__objc_release_02578630)(IVar14);
  (*(code *)PTR__objc_release_02578630)(IVar13);
  (*(code *)PTR__objc_release_02578630)(IVar12);
  (*(code *)PTR__objc_release_02578630)(IVar11);
  (*(code *)PTR__objc_release_02578630)(IVar10);
  (*(code *)PTR__objc_release_02578630)(IVar9);
  (*(code *)PTR__objc_release_02578630)(IVar8);
  (*(code *)PTR__objc_release_02578630)(IVar7);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_68;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return IVar1;
}

