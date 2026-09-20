// FUN_00861b58 @ 00861b58

/* WARNING: Removing unreachable block (ram,0x008620e8) */

void FUN_00861b58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_108;
  undefined *local_e0;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  byte local_89;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  local_61 = 0;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_profileFollowGlobalCornerEnabled_026a8ea0);
  local_e0 = local_30;
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_profileBackgroundColorLight_026a8f58);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_e0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_globalCornerBackgroundColorLight_026a2050);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_e0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_e0;
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  local_79 = 0;
  local_89 = 0;
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_profileFollowGlobalCornerEnabled_026a8ea0);
  local_108 = local_30;
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_profileBackgroundColorDark_026a8f60);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_88 = local_108;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_globalCornerBackgroundColorDark_026a2058);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = local_108;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_108;
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if (local_38 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_38;
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if (local_70 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fc0000000000000,0x3fc0000000000000,0x3fc0000000000000,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_70;
    local_70 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar2 = local_70;
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_c0 = PTR___NSConcreteStackBlock_02578660;
  local_b8 = 0xc2000000;
  local_b4 = 0;
  local_b0 = FUN_00862194;
  local_a8 = &DAT_0257add8;
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = puVar2;
  puVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_colorWithDynamicProvider__0269e538,&local_c0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

