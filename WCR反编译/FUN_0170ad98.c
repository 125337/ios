// FUN_0170ad98 @ 0170ad98

void FUN_0170ad98(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  if (param_1 == 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UISwitch_026cea90;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UISwitch_026cea90,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((param_1 & 1) == 0) {
    return;
  }
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_st_switchThemes_026a80b0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  if (uVar2 != 0) {
    FUN_0170b0f0();
    uVar3 = local_28;
    puVar1 = PTR_SwitchThemesDayNight_026cef18;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_SwitchThemesDayNight_026cef18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 == 1) == (bool)((byte)uVar3 & 1)) goto LAB_0170b0d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_st_removeThemeSwitch_026a80b8);
  }
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_st_addThemeSwitch_026b3878);
  uVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_st_switchThemes_026a80b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (uVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setOn__0269dc80,(byte)uVar2 & 1);
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_st_switchThemes_026a80b0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((uint)uVar4 != ((byte)uVar2 & 1)) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_st_switchThemes_026a80b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_st_switchThemes_026a80b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_st_switchThemes_026a80b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
  }
LAB_0170b0d8:
  _objc_storeStrong(&local_28,0);
  return;
}

