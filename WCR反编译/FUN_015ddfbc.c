// FUN_015ddfbc @ 015ddfbc

void FUN_015ddfbc(long param_1)

{
  cfstringStruct *local_18;
  
  if (param_1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_single;
  }
  else if (param_1 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_dual;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_triple;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

