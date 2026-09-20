// FUN_0083907c @ 0083907c

void FUN_0083907c(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined *local_108;
  undefined *local_f8;
  undefined *local_e8;
  undefined *local_c8;
  undefined *local_b8;
  undefined *local_a8;
  undefined *local_80;
  undefined *local_70;
  undefined *local_60;
  undefined *local_50;
  ulong local_30;
  undefined *local_28;
  
  uVar3 = DAT_02324340;
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar5 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf__Sender);
  uVar4 = (uint)uVar5;
  FUN_0083a3a8();
  if ((uVar5 & 1) == 0) {
    bVar1 = false;
    bVar2 = false;
    if ((uVar4 & 1) == 0) {
      bVar2 = DAT_028cd038 == (undefined *)0x0;
      if (bVar2) {
        local_108 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,uVar3,0,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_108;
      }
      else {
        local_108 = DAT_028cd038;
      }
      local_f8 = local_108;
    }
    else {
      bVar1 = DAT_028cd040 == (undefined *)0x0;
      if (bVar1) {
        local_e8 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,uVar3,0,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        local_70 = local_e8;
      }
      else {
        local_e8 = DAT_028cd040;
      }
      local_f8 = local_e8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_f8;
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
  }
  else {
    bVar1 = false;
    bVar2 = false;
    if ((uVar4 & 1) == 0) {
      bVar2 = DAT_028cd028 == (undefined *)0x0;
      if (bVar2) {
        local_c8 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,uVar3,0,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_c8;
      }
      else {
        local_c8 = DAT_028cd028;
      }
      local_b8 = local_c8;
    }
    else {
      bVar1 = DAT_028cd030 == (undefined *)0x0;
      if (bVar1) {
        local_a8 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,uVar3,0,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_a8;
      }
      else {
        local_a8 = DAT_028cd030;
      }
      local_b8 = local_a8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_b8;
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

