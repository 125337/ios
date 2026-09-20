// FUN_002f8be8 @ 002f8be8

void FUN_002f8be8(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_80;
  undefined *local_68;
  undefined *local_58;
  undefined *local_48;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_20;
  local_28 = puVar2;
  FUN_002fa5e0();
  bVar1 = (uVar3 & 1) == 0;
  local_68 = local_28;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_glassBeautifyColorLight_026a1f90);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_68;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_glassBeautifyColorDark_026a1f88);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_68;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  bVar1 = local_30 == (undefined *)0x0;
  if (bVar1) {
    local_80 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323ff8,DAT_02323c98,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_80;
  }
  else {
    local_80 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_80;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

