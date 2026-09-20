// uploadConfirmMessage @ 00f01eec

/* Function Stack Size: 0x10 bytes */

ID WCRefineCloudBackupService::uploadConfirmMessage(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_supportsVersionHistory_026aba88);
  local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_OvNzT;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_retainCount_026aba90);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stringWithFormat__0269cca8,&cf_OeX);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

