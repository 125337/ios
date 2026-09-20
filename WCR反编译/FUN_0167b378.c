// FUN_0167b378 @ 0167b378

void FUN_0167b378(long param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_38;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  pcVar2 = *(cfstringStruct **)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_localizedDescription_0269ced0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_38 = &cf_cS1Y_;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_38);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  return;
}

