// alignedControl:width: @ 01e4b658

/* Function Stack Size: 0x20 bytes */

ID WCRefineTelegramGroupingViewController::alignedControl_width_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined *local_70;
  double local_68;
  undefined8 local_60;
  SEL local_58;
  ID local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  local_68 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar12 = 0;
  uVar11 = 0;
  uVar14 = 0x4040000000000000;
  dVar13 = local_68;
  FUN_01e4ba8c();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar11,uVar12,dVar13,uVar14,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_70 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addSubview__026ca4c0,local_60);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
  uVar11 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = local_60;
  local_48 = uVar12;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  (*(code *)PTR__objc_msgSend_02578628)(uVar14,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_60;
  local_40 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_centerYAnchor_0269ce10);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_centerYAnchor_0269ce10);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_constraintEqualToAnchor__0269ce08);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_60;
  local_38 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_heightAnchor_0269ce50);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_activateConstraints__0269ce58);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(uVar9);
  (*(code *)PTR__objc_release_02578630)(uVar8);
  (*(code *)PTR__objc_release_02578630)(uVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(uVar14);
  (*(code *)PTR__objc_release_02578630)(uVar12);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(uVar11);
  puVar1 = local_70;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

