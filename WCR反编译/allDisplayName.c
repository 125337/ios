// allDisplayName @ 01086ab0

/* Function Stack Size: 0x10 bytes */

ID WCRefineLocalEmoticonStore::allDisplayName(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_28;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadUngroupedNameIfNeeded_026ae288);
  pcVar1 = DAT_028e3288;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3288,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_28 = &cf_hQ;
  }
  else {
    local_28 = DAT_028e3288;
  }
  _objc_retainAutoreleaseReturnValue();
  return (ID)local_28;
}

