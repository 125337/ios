// FUN_015f411c @ 015f411c

void FUN_015f411c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *local_80;
  undefined *local_58;
  undefined *local_48;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  bVar1 = param_3 != *(long *)(param_1 + 0x20);
  local_80 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_80;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fc3333333333333,0x3fe8000000000000,0x3fd6666666666666,DAT_02323ec8,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_80;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setBackgroundColor__026ca888,local_80);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

