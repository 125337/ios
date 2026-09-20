// selectQRCodeImage @ 01f347b4

/* Function Stack Size: 0x10 bytes */

void WCRefineUIBeautifyViewController::selectQRCodeImage(ID param_1,SEL param_2)

{
  ulong uVar1;
  ID IVar2;
  char *pcVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *local_50;
  ulong local_48;
  char *local_40;
  char *local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_availableQRCodeBeautifyFileNames_026c8708);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_count_0269cfe0);
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQNON_x);
    local_2c = 1;
  }
  else {
    pcVar3 = "WCUIActionSheet";
    _objc_getClass();
    local_38 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_b_NNS_u);
      local_2c = 1;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_48 = 0;
      local_40 = pcVar3;
      while( true ) {
        uVar1 = local_48;
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
        if (IVar2 <= uVar1) break;
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_selectQRCodeFile__lu_);
        _objc_retainAutoreleasedReturnValue();
        local_50 = puVar4;
        _NSSelectorFromString();
        IVar2 = local_18;
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_addDynamicQRCodeSelectMethodForS_026c8918,puVar4);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        pcVar3 = local_40;
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_addBtnTitle_target_sel__0269d278,IVar2,local_18,puVar4);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        _objc_storeStrong(&local_50,0);
        local_48 = local_48 + 1;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
      pcVar3 = local_40;
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showInView__0269d310);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      _objc_storeStrong(&local_40,0);
      local_2c = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

