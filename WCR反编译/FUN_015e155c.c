// FUN_015e155c @ 015e155c

void FUN_015e155c(byte param_1)

{
  bool bVar1;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  
  bVar1 = (param_1 & 1) == 0;
  local_48 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323da8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_48;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c60,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  _objc_autoreleaseReturnValue(local_48);
  return;
}

