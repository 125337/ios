// poll @ 0106ed78

/* Function Stack Size: 0x10 bytes */

void WCRXHSWebExtractSession::poll(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
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
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_platform_026ad958);
  if (param_1 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pollDouyin_026ae158);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_platform_026ad958);
    if (IVar2 == 6) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pollInstagram_026ae160);
    }
    else {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_platform_026ad958);
      IVar2 = local_18;
      if (IVar3 == 5) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pollTikTok_026ae168);
      }
      else {
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pollCount_026ae170);
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setPollCount__026ae178,IVar3 + 1);
        IVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pollCount_026ae170);
        if ((long)IVar2 < 0xd) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cfstringStruct_025db040;
          IVar3 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
          _objc_retainAutoreleasedReturnValue();
          IVar2 = local_18;
          pcVar1 = local_28;
          local_50 = PTR___NSConcreteStackBlock_02578660;
          local_48 = 0xc2000000;
          local_44 = 0;
          local_40 = FUN_0106efc0;
          local_38 = &DAT_02584cd0;
          (*(code *)PTR__objc_retain_02578638)();
          local_30 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_evaluateJavaScript_completionHan_026a12f0,pcVar1,&local_50);
          (*(code *)PTR__objc_release_02578630)(IVar3);
          _objc_storeStrong(&local_30);
          _objc_storeStrong(&local_28,0);
        }
      }
    }
  }
  return;
}

