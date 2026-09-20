// presentFindUserPrompt @ 00f619d4

/* Function Stack Size: 0x10 bytes */

void WCRefineFindUserSupport::presentFindUserPrompt(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = &::cf___;
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (puVar2 != (undefined1 *)0x0) {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if ((puVar2 < &segment_command_00000020.vmsize || puVar2 + -0x40 == (undefined1 *)0x0) &&
       (((puVar4 = local_30, FUN_00f6157c(puVar2 + -0x40), ((ulong)puVar4 & 1) != 0 ||
         (puVar2 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__chatroom),
         ((ulong)puVar2 & 1) != 0)) || (puVar2 = local_30, FUN_00f61714(), ((ulong)puVar2 & 1) != 0)
        ))) {
      _objc_storeStrong(&local_28,local_30);
    }
  }
  pcVar5 = "WCRefineHelper";
  _objc_getClass();
  if ((pcVar5 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_respondsToSelector__026ca818,
                 PTR_s_presentPageSheetSingleLineInputW_026a46e0), ((ulong)pcVar5 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcr_presentFallbackPromptWithPre_026ac810,local_28);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (0,PTR_WCRefineHelper_026ce000,PTR_s_presentPageSheetSingleLineInputW_026a46e0,
               &cf_g_b_u7b,&cf_eQ_e,local_28,&PTR___NSConcreteGlobalBlock_02583418);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

