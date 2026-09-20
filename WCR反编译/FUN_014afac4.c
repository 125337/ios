// FUN_014afac4 @ 014afac4

void FUN_014afac4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_initWithBase64EncodedString_opti_026aaf38,
             &cf_TFNBcHBsaWNhdGlvbldvcmtzcGFjZQ__,0);
  puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_initWithBase64EncodedString_opti_026aaf38,&cf_ZGVmYXVsdFdvcmtzcGFjZQ__,0);
  puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_initWithBase64EncodedString_opti_026aaf38,
             &cf_b3BlbkFwcGxpY2F0aW9uV2l0aEJ1bmRsZUlEOg__,0);
  pcVar4 = (code *)PTR__OBJC_CLASS___NSString_026cdfe8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_initWithData_encoding__026a3378,puVar1,4);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithData_encoding__026a3378,puVar2,4);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithData_encoding__026a3378,puVar3,4);
  _NSClassFromString();
  _NSSelectorFromString();
  pcVar5 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_respondsToSelector__026ca818,puVar1);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_methodForSelector__0269e1d8,puVar1);
    (*pcVar5)(pcVar4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(0);
    _NSSelectorFromString();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_respondsToSelector__026ca818,puVar2);
    if (((ulong)pcVar5 & 1) != 0) {
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_methodForSelector__0269e1d8,puVar2);
      (*pcVar5)(pcVar4,puVar2,*(undefined8 *)(param_1 + 0x20));
    }
  }
                    /* WARNING: Subroutine does not return */
  _exit(0);
}

