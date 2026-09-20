// FUN_01ddb1f0 @ 01ddb1f0

void FUN_01ddb1f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_40;
  long local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x38;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar2;
  if (lVar2 == 0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_setAiRequest__026c56d8,0);
    lVar1 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    lVar2 = local_28;
    if (lVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
      if (lVar2 == 0) {
        lVar1 = *(long *)(param_1 + 0x30);
        (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_localizedDescription_0269ced0);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (lVar2 != 0) {
          local_40 = *(undefined8 *)(param_1 + 0x30);
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_localizedDescription_0269ced0);
          _objc_retainAutoreleasedReturnValue();
        }
        lVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sessionResult_026c5440);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar3);
        if (lVar2 != 0) {
          (*(code *)PTR__objc_release_02578630)(local_40);
        }
        (*(code *)PTR__objc_release_02578630)(lVar1);
      }
      else {
        lVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sessionResult_026c5440);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
    }
    else {
      lVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcr_replaceIdsInSummary__026c56e0,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_wcr_finishSummary__026c5698);
      _objc_retainAutoreleasedReturnValue();
      local_38 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sessionResult_026c5440);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      _objc_storeStrong(&local_38,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadBoard_026c54f8);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

