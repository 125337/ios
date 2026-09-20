// FUN_018a2bc0 @ 018a2bc0

void FUN_018a2bc0(byte param_1,byte param_2)

{
  cfstringStruct *local_18;
  
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__gn_;
  }
  else {
    local_18 = &cf__;
    if ((param_2 & 1) == 0) {
      local_18 = &cf__n_;
    }
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

