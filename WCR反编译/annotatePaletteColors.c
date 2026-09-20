// annotatePaletteColors @ 0164d304

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatCropViewController::annotatePaletteColors(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  uVar1 = DAT_02323da8;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fee666666666666,DAT_02323e00,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_58 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,DAT_02323e10,0,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,DAT_0232c678,DAT_02323d80,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_48 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,DAT_02324258,0x3fd6666666666666,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_40 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,0x3fe3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_38 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02339798,DAT_02324280,DAT_02339790,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_30 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_28 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_20 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar10;
}

