// FUN_01cf9200 @ 01cf9200

void FUN_01cf9200(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_loadToken_026c3ac8);
  if ((lVar1 == *(long *)(param_1 + 0x30)) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_showImage__026c3af8,
                 *(undefined8 *)(param_1 + 0x28)), *(long *)(param_1 + 0x28) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_emptyLabel_026a2668);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  return;
}

