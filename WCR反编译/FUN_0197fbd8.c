// FUN_0197fbd8 @ 0197fbd8

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0197fbd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  u_int32_t uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  uVar2 = DAT_02323f88;
  uVar1 = DAT_02323da8;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fee666666666666,DAT_023243c8,DAT_02323c70,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_48 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,DAT_02323db8,DAT_02323f38,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_40 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,DAT_02323f80,uVar2,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_38 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323f78,DAT_02323e80,DAT_0232c678,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_30 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,DAT_02323f18,DAT_02323e08,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_28 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323cc0,DAT_02339da8,DAT_02323f60,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_20 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,6);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar10;
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar5 = local_50;
  puVar4 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
  uVar3 = _arc4random_uniform((u_int32_t)puVar4);
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_objectAtIndexedSubscript__0269cc78,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = DAT_028e4398;
  DAT_028e4398 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

