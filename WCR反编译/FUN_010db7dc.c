// FUN_010db7dc @ 010db7dc

void FUN_010db7dc(long param_1)

{
  cfstringStruct *local_18;
  
  if (param_1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_home;
  }
  else if (param_1 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_chat;
  }
  else if (param_1 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_contacts;
  }
  else if (param_1 == 3) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_moments;
  }
  else if (param_1 == 4) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_chatTop;
  }
  else if (param_1 == 5) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_homeOnline;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

