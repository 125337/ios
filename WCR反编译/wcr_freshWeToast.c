// wcr_freshWeToast @ 00f99c70

/* Function Stack Size: 0x10 bytes */

ID WCRefineHelper::wcr_freshWeToast(ID param_1,SEL param_2)

{
  char *local_18;
  
  local_18 = "WeToast";
  _objc_getClass();
  if (local_18 == (char *)0x0) {
    local_18 = (char *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_performSelector__026ca7b8,PTR_s_toast_026aca18);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

