// FUN_01728acc @ 01728acc

void FUN_01728acc(long param_1)

{
  cfstringStruct *local_18;
  
  FUN_01728a88();
  if (param_1 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_ThemePro;
  }
  else if (param_1 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_SUTU;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_ThemeBox;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

