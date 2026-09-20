// FUN_014db298 @ 014db298

void FUN_014db298(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_20;
  
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_respondsToSelector__026ca818,
             PTR_s_systemGreenColor_026cab70);
  bVar1 = ((ulong)puVar2 & 1) == 0;
  local_40 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323d80,DAT_02324258,0x3fd6666666666666,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_40;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
    _objc_retainAutoreleasedReturnValue();
    local_20 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_20);
  }
  _objc_autoreleaseReturnValue(local_40);
  return;
}

