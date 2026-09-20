// FUN_01ac0fe0 @ 01ac0fe0

void FUN_01ac0fe0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  cfstringStruct *local_50;
  cfstringStruct *local_28;
  
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (lVar2 == 0) {
      local_50 = &cf_bbXT;
    }
    else {
      local_50 = *(cfstringStruct **)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_name_0269d828);
      _objc_retainAutoreleasedReturnValue();
      local_28 = local_50;
    }
    FUN_01a9c680(uVar3,&cf_title,local_50);
    if (lVar2 != 0) {
      (*(code *)PTR__objc_release_02578630)(local_28);
    }
    (*(code *)PTR__objc_release_02578630)(lVar1);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

