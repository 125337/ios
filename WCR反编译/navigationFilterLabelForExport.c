// navigationFilterLabelForExport @ 009135bc

/* Function Stack Size: 0x10 bytes */

ID LogViewerViewController::navigationFilterLabelForExport(ID param_1,SEL param_2)

{
  cfstringStruct *local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentFilter_026aa1d0);
  if (param_1 != 0) {
    if (param_1 == 1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_PUSH;
      goto LAB_009137bc;
    }
    if (param_1 == 2) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_POP;
      goto LAB_009137bc;
    }
    if (param_1 == 3) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_Present;
      goto LAB_009137bc;
    }
    if (param_1 == 4) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_Dismiss;
      goto LAB_009137bc;
    }
    if (param_1 == 5) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_Load;
      goto LAB_009137bc;
    }
    if (param_1 == 6) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_Appear;
      goto LAB_009137bc;
    }
    if (param_1 == 7) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_Disappear;
      goto LAB_009137bc;
    }
    if (param_1 == 8) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_Layout;
      goto LAB_009137bc;
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &cf_hQ;
LAB_009137bc:
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

