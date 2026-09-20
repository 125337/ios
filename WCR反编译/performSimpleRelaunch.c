// performSimpleRelaunch @ 014afecc

/* Function Stack Size: 0x10 bytes */

void WCRefineRestar::performSimpleRelaunch(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_flushConfigWriteSync_026a2e38);
    puVar1 = PTR__OBJC_CLASS___NSBundle_026ce418;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_respondsToSelector__026ca818,PTR_s_suspend_026af430);
    if (((ulong)puVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_performSelector__026ca7b8,PTR_s_suspend_026af430);
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_initWithBase64EncodedString_opti_026aaf38,
               &cf_TFNBcHBsaWNhdGlvbldvcmtzcGFjZQ__,0);
    puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_initWithBase64EncodedString_opti_026aaf38,&cf_ZGVmYXVsdFdvcmtzcGFjZQ__,0
              );
    puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_initWithBase64EncodedString_opti_026aaf38,
               &cf_b3BlbkFwcGxpY2F0aW9uV2l0aEJ1bmRsZUlEOg__,0);
    pcVar5 = (code *)PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_initWithData_encoding__026a3378,puVar1,4);
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithData_encoding__026a3378,puVar3,4);
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithData_encoding__026a3378,puVar4,4);
    _NSClassFromString();
    _NSSelectorFromString();
    pcVar6 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_respondsToSelector__026ca818,puVar1);
    if (((ulong)pcVar6 & 1) != 0) {
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_methodForSelector__0269e1d8,puVar1);
      (*pcVar6)(pcVar5,puVar1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(0);
      _NSSelectorFromString();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_respondsToSelector__026ca818,puVar3);
      if (((ulong)pcVar6 & 1) != 0) {
        pcVar6 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_methodForSelector__0269e1d8,puVar3);
        (*pcVar6)(pcVar5,puVar3,puVar2);
      }
    }
                    /* WARNING: Subroutine does not return */
    _exit(0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_immediateRestart_026af440);
  return;
}

