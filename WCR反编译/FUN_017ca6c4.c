// FUN_017ca6c4 @ 017ca6c4

void FUN_017ca6c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar1,PTR_s_wcrApplyPrompt_toField_name__026b4f40,uVar4,lVar3,
             *(undefined8 *)(param_1 + 0x28));
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

