// permissionStatusTextGranted:hasSource: @ 0168eb50

/* Function Stack Size: 0x18 bytes */

ID AccountDetailViewController::permissionStatusTextGranted_hasSource_
             (ID param_1,SEL param_2,bool param_3,bool param_4)

{
  cfstringStruct *local_18;
  
  if ((param_4 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__ghKm0RCgPOo_;
  }
  else {
    local_18 = &cf_CgPck8_;
    if ((param_3 & 1) == 0) {
      local_18 = &cf_eCgP;
    }
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

