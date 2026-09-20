// FUN_0094692c @ 0094692c

void FUN_0094692c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_28;
  ulong local_20;
  undefined *local_18;
  
  uVar3 = DAT_02323f60;
  uVar2 = DAT_02323da8;
  uVar1 = DAT_02323c70;
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar4 = local_20;
  FUN_009463a8();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqualToString__0269ccc8,&cf_image);
  if ((uVar4 & 1) == 0) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_file);
    if ((uVar4 & 1) == 0) {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_message);
      if ((uVar4 & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323ec8,uVar3,DAT_02323c78,0x3ff0000000000000,
                   PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_18 = puVar5;
      }
      else {
        uVar4 = local_20;
        FUN_00961580();
        if (uVar4 == 0x22) {
          puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,DAT_02323f38,DAT_023243c0,0x3ff0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_18 = puVar5;
        }
        else {
          if (uVar4 != 0x2b) {
            if (uVar4 == 0x2f) {
              puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (DAT_02324020,0x3fd6666666666666,DAT_02323d98,0x3ff0000000000000,
                         PTR__OBJC_CLASS___UIColor_026cdf78,
                         PTR_s_colorWithRed_green_blue_alpha__0269cc48);
              _objc_retainAutoreleasedReturnValue();
              local_18 = puVar5;
              goto LAB_00946c5c;
            }
            if (uVar4 != 0x3e) {
              puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (DAT_02323c68,0x3fd0000000000000,uVar2,0x3ff0000000000000,
                         PTR__OBJC_CLASS___UIColor_026cdf78,
                         PTR_s_colorWithRed_green_blue_alpha__0269cc48);
              _objc_retainAutoreleasedReturnValue();
              local_18 = puVar5;
              goto LAB_00946c5c;
            }
          }
          puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_02323c98,DAT_02323d40,DAT_02323d58,0x3ff0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_18 = puVar5;
        }
      }
    }
    else {
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,DAT_02323f80,DAT_02323f88,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar5;
    }
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fee666666666666,uVar3,uVar1,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar5;
  }
LAB_00946c5c:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

