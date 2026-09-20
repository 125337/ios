// FUN_01744c44 @ 01744c44

void FUN_01744c44(long param_1)

{
  cfstringStruct *local_18;
  
  FUN_0173835c();
  if (param_1 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_TP;
  }
  else if (param_1 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_OT;
  }
  else if (param_1 == 3) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_ST;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_TB;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

