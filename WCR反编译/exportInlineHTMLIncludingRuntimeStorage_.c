// exportInlineHTMLIncludingRuntimeStorage: @ 01f010c4

/* Function Stack Size: 0x14 bytes */

void WCRefineToDoListWebSettingsViewController::exportInlineHTMLIncludingRuntimeStorage_
               (ID param_1,SEL param_2,bool param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *local_70;
  undefined *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  byte local_31;
  SEL local_30;
  cfstringStruct *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_31 = (byte)param_3;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlTextView_026c7f70);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_70 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_70;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((local_31 & 1) != 0) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_htmlByEmbeddingRuntimeStorageInt_026c8168,local_40);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_40;
    local_40 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = &cf_WCRefineToDoHTML_WithConfig_html;
  if ((local_31 & 1) == 0) {
    pcVar1 = &cf_WCRefineToDoHTML_html;
  }
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = pcVar1;
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_writeToFile_atomically_encoding__026a33a8,local_50,1,4);
  puVar3 = PTR__OBJC_CLASS___UIActivityViewController_026cea70;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_50);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_20 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_initWithActivityItems_applicatio_026aa228,puVar5,0);
  local_58 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_58,1,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

