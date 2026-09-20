// altGradientColorsForDarkMode: @ 01b09a20

/* Function Stack Size: 0x14 bytes */

ID WCRefineKeywordAlertHistoryCardViewController::altGradientColorsForDarkMode_
             (ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  uVar4 = DAT_02332e20;
  uVar3 = DAT_02323ff8;
  uVar2 = DAT_02323d48;
  uVar1 = DAT_02323c68;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  if ((param_3 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02339848,DAT_0232c6d8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
    puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_68 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c60,uVar3,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar6 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_CGColor_026ca470);
    puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_60 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,uVar3,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar6 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_CGColor_026ca470);
    puVar9 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_58 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02339790,uVar2,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar6 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_CGColor_026ca470);
    local_70 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_50 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,4
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c68,DAT_02323da8,DAT_02332e20,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
    puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_48 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fc3333333333333,uVar4,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar6 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_CGColor_026ca470);
    puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_40 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c90,DAT_02323c70,DAT_02323f10,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar6 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_CGColor_026ca470);
    puVar9 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_38 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,DAT_02324058,DAT_02323cc0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78
               ,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar6 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_CGColor_026ca470);
    local_70 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_70;
}

