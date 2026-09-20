// wcrFollowGlobalTitle @ 017c5cf8

/* Function Stack Size: 0x10 bytes */

ID WCRefineAIPersonaLibraryViewController::wcrFollowGlobalTitle(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrIsGroupAnalysisLibrary_026b4df8);
  pcVar1 = &cf____;
  if ((param_1 & 1) == 0) {
    pcVar1 = &::cf__;
  }
  _objc_retainAutoreleaseReturnValue();
  return (ID)pcVar1;
}

