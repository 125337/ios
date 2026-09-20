// FUN_01dad9f8 @ 01dad9f8

void FUN_01dad9f8(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **local_138;
  ulong local_130;
  undefined *local_88 [12];
  undefined *local_28;
  
  uVar3 = DAT_02324040;
  uVar2 = DAT_02323f60;
  uVar1 = DAT_02323da8;
  local_28 = *(undefined **)PTR____stack_chk_guard_02578670;
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323da8,DAT_02323f80,DAT_02324040,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_88[0] = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fee666666666666,DAT_02324280,DAT_0233a320,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_88[1] = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323c68,DAT_02339af8,DAT_02339da8,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_88[2] = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323e40,DAT_02323d60,DAT_02323f68,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_88[3] = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_0232c670,DAT_02332e48,uVar3,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_88[4] = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fee666666666666,DAT_02323f38,DAT_02323c70,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_88[5] = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323cc0,DAT_02323db8,DAT_02323c60,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_88[6] = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323ec8,uVar2,0x3fd6666666666666,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_88[7] = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323f88,DAT_02323d58,DAT_02323f78,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_88[8] = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,DAT_02323d90,uVar2,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_88[9] = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02324258,DAT_02324048,0x3fc3333333333333,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_88[10] = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323c78,DAT_02324050,0x3fe3333333333333,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  local_88[0xb] = puVar4;
  local_130 = param_1;
  if (0xb < param_1) {
    local_130 = 0xb;
  }
  puVar5 = local_88[local_130];
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = &local_28;
  do {
    local_138 = local_138 + -1;
    _objc_storeStrong(local_138,0);
  } while (local_138 != local_88);
  if (*(undefined **)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

