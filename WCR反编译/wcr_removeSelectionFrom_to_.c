// wcr_removeSelectionFrom:to: @ 016977b4

/* Function Stack Size: 0x20 bytes */

void WCRWordSegPickerController::wcr_removeSelectionFrom_to_
               (ID param_1,SEL param_2,long_long param_3,long_long param_4)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  long_long local_e0;
  
  if ((param_3 != 0x7fffffffffffffff) && (param_4 != 0x7fffffffffffffff)) {
    local_e0 = param_3;
    if ((long)param_3 < (long)param_4) {
      local_e0 = param_4;
      param_4 = param_3;
    }
    bVar1 = true;
    if (-1 < (long)param_4) {
      IVar2 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tokens_026b29d8);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = (long)IVar3 <= (long)local_e0;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    if (!bVar1) {
      IVar2 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedIndexes_026b2a08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_removeIndexesInRange__026b2a20,param_4,(local_e0 - param_4) + 1);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_refreshChipColors_026b29f0);
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_refreshPreview_026b2a18);
    }
  }
  return;
}

