// FUN_0085ec00 @ 0085ec00

void FUN_0085ec00(undefined8 param_1,byte param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *local_40;
  undefined4 local_38;
  ulong local_28;
  byte local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  local_19 = param_2;
  FUN_008571ec();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar2 & 1) == 0) {
    local_38 = 1;
  }
  else {
    pcVar1 = &
             cf_document_querySelectorAll__video_audio___forEach_function_el__try_el_muted_el_muted_el_play___catch_e_____
    ;
    if ((local_19 & 1) == 0) {
      pcVar1 = &
               cf_document_querySelectorAll__video_audio___forEach_function_el__try_el_pause___catch_e_____
      ;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_evaluateJavaScript_completionHan_026a12f0,pcVar1,0);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

