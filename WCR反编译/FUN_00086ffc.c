// FUN_00086ffc @ 00086ffc

void FUN_00086ffc(byte param_1,byte param_2,byte param_3)

{
  cfstringStruct *local_28;
  cfstringStruct *local_18;
  
  if ((param_1 & 1) == 0) {
    if ((param_2 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_list;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_my_page;
    }
  }
  else {
    if ((DAT_028c7e7b & 1) == 0) {
      local_28 = &cf_chat_unified;
    }
    else {
      local_28 = &cf_chat_self;
      if ((param_3 & 1) == 0) {
        local_28 = &cf_chat_other;
      }
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_28;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

