// FUN_002d20a8 @ 002d20a8

void FUN_002d20a8(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *local_60;
  undefined *local_48;
  undefined *local_38;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_002b13fc();
  bVar1 = (uVar2 & 1) == 0;
  local_60 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (0,DAT_02323f60,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_60;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,DAT_02323f88,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_60;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

