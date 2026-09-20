// FUN_0100d29c @ 0100d29c

void FUN_0100d29c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_startProgressToast_026ad9d8);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323c90,*(undefined8 *)(param_1 + 0x38),PTR_s_updateProgressToast__026ad910);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_videoURL_026ad970);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_performSendParseResult_toUsr_pre_026adac0,uVar3,uVar4,uVar1,0,
             *(undefined8 *)(param_1 + 0x30));
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

