// FUN_00020848 @ 00020848

void FUN_00020848(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *local_40;
  undefined *local_38 [3];
  undefined *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_2);
  puVar1 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAIStore_026ce048,PTR_s_plainTextByStrippingMarkdown__0269d258,local_20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_20;
  local_20 = puVar1;
  (*(code *)PTR__objc_release_02578630)();
  FUN_00020bdc();
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setText__026caa88,local_20);
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__J);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_initWithTitle_message__0269d260,puVar1,local_20);
  local_40 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_40 == (char *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_Y6R);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_sQ,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y6R,local_38[0],
               PTR_s_copyText_0269d270);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

