// updateBackgroundGradientColors @ 01eb3388

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListEditorViewController::updateBackgroundGradientColors(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  uVar2 = DAT_02323e40;
  uVar1 = DAT_02323da0;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if (IVar4 == 2) {
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c68,DAT_02323d40,DAT_02324058,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
    puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_38 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,uVar1,DAT_02323c90,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar6 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_CGColor_026ca470);
    puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_backgroundGradient_026b32f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02339790,DAT_02323d48,DAT_02339dd0,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
    puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_48 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,DAT_02323ec0,uVar2,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar6 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_CGColor_026ca470);
    puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_40 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_backgroundGradient_026b32f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

