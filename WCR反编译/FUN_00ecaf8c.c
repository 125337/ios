// FUN_00ecaf8c @ 00ecaf8c

void FUN_00ecaf8c(void)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_b8;
  char *local_a8;
  char *local_a0;
  char *local_78;
  char *local_68;
  char *local_60;
  byte local_51;
  char *local_50;
  byte local_41;
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  local_a0 = "UIColor";
  _objc_getClass();
  if (local_a0 == (char *)0x0) {
    local_a0 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
  }
  local_20 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_blackColor_026ca538);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_20;
  local_28 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_whiteColor_026cabe8);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_28;
  local_30 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_Alpha0_7_026ab530);
  local_41 = 0;
  local_51 = 0;
  local_a8 = local_28;
  if (((ulong)pcVar4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fe6666666666666,local_28,PTR_s_colorWithAlphaComponent__026ca578);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_a8;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_Alpha0_7_026ab530);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = local_a8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_a8;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_Alpha0_7_026ab530);
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  local_b8 = local_30;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fe6666666666666,local_30,PTR_s_colorWithAlphaComponent__026ca578);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_b8;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_Alpha0_7_026ab530);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_b8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_b8;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  puVar2 = PTR_s_colorInLightMode_DarkMode__026a3d00;
  pcVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_colorInLightMode_DarkMode__026a3d00);
  local_18 = local_38;
  if (((ulong)pcVar3 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
  }
  else {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar2,local_38,local_60);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar3;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

