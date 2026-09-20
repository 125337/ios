// FUN_016b4730 @ 016b4730

void FUN_016b4730(byte param_1,byte param_2)

{
  cfstringStruct *local_18;
  
  if ((param_1 & 1) == 0) {
    local_18 = &cf_Other_Dark;
    if ((param_2 & 1) == 0) {
      local_18 = &cf_Other_Light;
    }
    (*(code *)PTR__objc_retain_02578638)();
  }
  else {
    local_18 = &cf_Me_Dark;
    if ((param_2 & 1) == 0) {
      local_18 = &cf_Me_Light;
    }
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

