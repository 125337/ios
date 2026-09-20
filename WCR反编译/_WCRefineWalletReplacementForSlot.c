// _WCRefineWalletReplacementForSlot @ 00f14148

void _WCRefineWalletReplacementForSlot(long param_1)

{
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_18;
  
  if (param_1 == 1) {
    if (DAT_0280e068 == (cfstringStruct *)0x0) {
      local_38 = &cf___;
    }
    else {
      local_38 = DAT_0280e068;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_38;
  }
  else if (param_1 == 2) {
    if (DAT_0280e070 == (cfstringStruct *)0x0) {
      local_50 = &cf___;
    }
    else {
      local_50 = DAT_0280e070;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_50;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

