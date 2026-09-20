// wcrAvatarRefreshServiceCenter @ 01a6a554

/* Function Stack Size: 0x10 bytes */

ID WCRefineGeneralFunctionViewController::wcrAvatarRefreshServiceCenter(ID param_1,SEL param_2)

{
  char *pcVar1;
  char *local_18;
  
  local_18 = "MMServiceCenter";
  _objc_getClass();
  if ((local_18 == (char *)0x0) ||
     (pcVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
     ((ulong)pcVar1 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

