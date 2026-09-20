// chatPolishCommand @ 009ba8a4

/* Function Stack Size: 0x10 bytes */

ID WCRefineAIStore::chatPolishCommand(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_38;
  
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_38 = &cf__wcrrs;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_autoreleaseReturnValue();
  return (ID)local_38;
}

