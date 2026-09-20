// FUN_010490e0 @ 010490e0

long FUN_010490e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_38 = 0;
  local_30 = param_1;
  _objc_storeStrong(&local_38);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_url_026a5a28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_cleanMediaScoreForURL__026add48);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_url_026a5a28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_cleanMediaScoreForURL__026add48);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (lVar2 == lVar3) {
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_height_026a12d8);
    lVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_height_026a12d8);
    if (lVar1 == lVar2) {
      lVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dataSize_026adaa8);
      lVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_dataSize_026adaa8);
      if (lVar1 == lVar2) {
        lVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_label_026adba8);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_label_026adba8);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_compare__0269cd10);
        local_28 = lVar3;
        (*(code *)PTR__objc_release_02578630)(lVar2);
        (*(code *)PTR__objc_release_02578630)(lVar1);
      }
      else {
        lVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dataSize_026adaa8);
        lVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_dataSize_026adaa8);
        local_28 = -1;
        if (lVar1 < lVar2) {
          local_28 = 1;
        }
      }
    }
    else {
      lVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_height_026a12d8);
      lVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_height_026a12d8);
      local_28 = -1;
      if (lVar1 < lVar2) {
        local_28 = 1;
      }
    }
  }
  else {
    local_28 = -1;
    if (lVar2 < lVar3) {
      local_28 = 1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return local_28;
}

