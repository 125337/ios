// FUN_01f7ddfc @ 01f7ddfc

void FUN_01f7ddfc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_48;
  
  pcVar4 = &cf_privateHideToast;
  _NSSelectorFromString();
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,pcVar4);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_performSelector__026ca7b8,pcVar4);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (lVar3 == 0) {
    pcVar4 = *(cfstringStruct **)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_48 = &cf_SbS1Y_;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_48);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_wcr_presentFileShareOptionsAtPat_026b65a8,
               *(undefined8 *)(param_1 + 0x28),&cf_W,*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x28));
  }
  return;
}

