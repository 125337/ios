// FUN_01c7e068 @ 01c7e068

void FUN_01c7e068(long param_1)

{
  cfstringStruct *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  bVar2 = *(byte *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_identifier_026a4a88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,PTR_s_setPluginHidden_forPluginIdentif_026b4758,(bVar2 ^ 1) & 1);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  lVar4 = param_1 + 0x30;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar4);
  pcVar1 = &cf__Sm;
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    pcVar1 = &cf__6e_eQS;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  return;
}

