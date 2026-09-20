// FUN_01729b1c @ 01729b1c

void FUN_01729b1c(long param_1)

{
  cfstringStruct *local_18;
  
  FUN_01729a9c();
  if (param_1 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_ThemePro;
  }
  else if (param_1 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_vQN;
  }
  else if (param_1 == 3) {
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

