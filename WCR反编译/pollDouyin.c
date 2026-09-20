// pollDouyin @ 0107205c

/* Function Stack Size: 0x10 bytes */

void WCRXHSWebExtractSession::pollDouyin(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_finished_026a15b0);
  if ((param_1 & 1) == 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    IVar6 = local_18;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (IVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pollCount_026ae170);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_poll__ldwebView_nil);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLastDiag__026ae180);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pollCount_026ae170);
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_setPollCount__026ae178,IVar2 + 1);
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pollCount_026ae170);
      IVar6 = local_18;
      if ((long)IVar2 < 0x29) {
        IVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_reloadDouyinIfStuckOnBlank__026ae1a0);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        if ((IVar6 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf__;
          IVar2 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
          _objc_retainAutoreleasedReturnValue();
          IVar6 = local_18;
          pcVar1 = local_28;
          local_50 = PTR___NSConcreteStackBlock_02578660;
          local_48 = 0xc2000000;
          local_44 = 0;
          local_40 = FUN_010723a0;
          local_38 = &DAT_02584cd0;
          (*(code *)PTR__objc_retain_02578638)();
          local_30 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_evaluateJavaScript_completionHan_026a12f0,pcVar1,&local_50);
          (*(code *)PTR__objc_release_02578630)(IVar2);
          _objc_storeStrong(&local_30);
          _objc_storeStrong(&local_28,0);
        }
      }
    }
  }
  return;
}

