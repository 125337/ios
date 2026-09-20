// FUN_0154bd18 @ 0154bd18

void FUN_0154bd18(int param_1)

{
  long lVar1;
  long local_38;
  undefined4 local_2c;
  long local_28;
  int local_1c;
  long local_18;
  
  local_28 = 0;
  local_1c = param_1;
  if (param_1 == 1) {
    _objc_storeStrong(0,&local_28,&cf_icons_filled_colorful_man);
  }
  else if (param_1 == 2) {
    _objc_storeStrong(0,&local_28,&cf_icons_filled_colorful_female);
  }
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = 0;
    local_2c = 1;
  }
  else {
    lVar1 = local_28;
    FUN_015830fc();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar1;
    if (lVar1 == 0) {
      local_18 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_imageWithRenderingMode__026ca690,1);
      _objc_retainAutoreleasedReturnValue();
      local_18 = lVar1;
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

