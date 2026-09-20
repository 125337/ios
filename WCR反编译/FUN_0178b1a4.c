// FUN_0178b1a4 @ 0178b1a4

void FUN_0178b1a4(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  bVar1 = *(byte *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_identifier_026a4a88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_setPluginHidden_forPluginIdentif_026b4758,(bVar1 ^ 1) & 1);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

