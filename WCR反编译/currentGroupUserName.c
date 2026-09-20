// currentGroupUserName @ 009d9000

/* Function Stack Size: 0x10 bytes */

ID WCRefineAnonymousAtHelper::currentGroupUserName(ID param_1,SEL param_2)

{
  cfstringStruct *local_30;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_currentGroupUserName_026ab028);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (cfstringStruct *)param_1;
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    local_30 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue();
  return (ID)local_30;
}

