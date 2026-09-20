// FUN_0163f320 @ 0163f320

void FUN_0163f320(void)

{
  undefined8 uVar1;
  u_int32_t uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  uVar1 = DAT_02323e00;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323d60,DAT_02324280,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323ec8,DAT_02323d00,0x3fd3333333333333,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_38 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fee666666666666,uVar1,uVar1,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_30 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,DAT_0232c678,DAT_02323d80,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_28 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,DAT_02323c98,DAT_02323c68,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_20 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,5);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar8;
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_48;
  puVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
  uVar2 = _arc4random_uniform((u_int32_t)puVar4);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectAtIndexedSubscript__0269cc78,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar3);
  return;
}

