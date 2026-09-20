// FUN_01d91efc @ 01d91efc

void FUN_01d91efc(ulong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_30;
  undefined8 local_20;
  
  uVar2 = DAT_02324040;
  FUN_01d9cfc4();
  bVar1 = (param_1 & 1) == 0;
  local_48 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,uVar2,DAT_02323ff8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_48;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c68,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_20 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_20);
  }
  _objc_autoreleaseReturnValue(local_48);
  return;
}

