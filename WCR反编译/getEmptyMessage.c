// getEmptyMessage @ 00912b3c

/* Function Stack Size: 0x10 bytes */

ID LogViewerViewController::getEmptyMessage(ID param_1,SEL param_2)

{
  cfstringStruct *local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_logType_026aa0f8);
  if (param_1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_fe__e_;
  }
  else if (param_1 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__Oe_R;
  }
  else if (param_1 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_cNe_R;
  }
  else if (param_1 == 3) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_feN;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

