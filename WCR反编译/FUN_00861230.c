// FUN_00861230 @ 00861230

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00861230(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *local_1b0;
  undefined **local_198;
  undefined1 *local_170;
  undefined *local_138;
  undefined *local_110;
  undefined *local_e0;
  undefined1 *local_d0;
  undefined1 *local_c0;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  undefined *local_50 [3];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined1 *)0x0;
  _objc_storeStrong(&local_30,param_1);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_59 = 0;
  local_69 = 0;
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_profileFollowGlobalCornerEnabled_026a8ea0);
  local_110 = local_38;
  if (((ulong)puVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_profileStrokeColorLight_026a8f48);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_110;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_globalCornerStrokeColorLight_026a2078);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = local_110;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50[0] = local_110;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  local_81 = 0;
  local_91 = 0;
  puVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_profileFollowGlobalCornerEnabled_026a8ea0);
  local_138 = local_38;
  if (((ulong)puVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_profileStrokeColorDark_026a8f50);
    _objc_retainAutoreleasedReturnValue();
    local_91 = 1;
    local_90 = local_138;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_globalCornerStrokeColorDark_026a2080);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = local_138;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_138;
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if (local_50[0] == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,0,0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_50[0];
    local_50[0] = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  if (local_78 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_78;
    local_78 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar3 = local_50[0];
  (*(code *)PTR__objc_retain_02578638)();
  bVar1 = local_30 == (undefined1 *)0x0;
  local_a0 = puVar3;
  if (bVar1) {
    local_c0 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    local_170 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = local_170;
  }
  else {
    local_170 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_traitCollection_026caba8);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = local_170;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = local_170;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  puVar4 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_userInterfaceStyle_026cabc8);
  if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    local_198 = &local_78;
  }
  else {
    local_198 = local_50;
  }
  _objc_storeStrong(&local_a0,*local_198);
  puVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a0,PTR_s_resolvedColorWithTraitCollection_0269fc58,local_a8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_a0;
  local_a0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_a8,0);
  bVar1 = local_a0 == (undefined *)0x0;
  if (bVar1) {
    local_1b0 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,0,0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = local_1b0;
  }
  else {
    local_1b0 = local_a0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_1b0;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

