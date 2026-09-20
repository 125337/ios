// methodSignatureForSelector: @ 01fcd968

/* Function Stack Size: 0x18 bytes */

ID WCRefineConfig::methodSignatureForSelector_(ID param_1,SEL param_2,SEL param_3)

{
  char *pcVar1;
  SEL SVar2;
  undefined *puVar3;
  
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  SVar2 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_3);
  pcVar1 = "v@:@";
  if (SVar2 != 0) {
    pcVar1 = "@@:";
  }
  puVar3 = PTR__OBJC_CLASS___NSMethodSignature_026cf400;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMethodSignature_026cf400,PTR_s_signatureWithObjCTypes__026c0320,
             pcVar1);
  return (ID)puVar3;
}

