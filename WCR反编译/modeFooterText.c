// modeFooterText @ 0184c24c

/* Function Stack Size: 0x10 bytes */

ID WCRefineAvatarScaleSceneFilterViewController::modeFooterText(ID param_1,SEL param_2)

{
  cfstringStruct *local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mode_026ab488);
  if (param_1 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__vTUSS_Sb;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_TUSSb;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

