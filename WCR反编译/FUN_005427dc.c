// FUN_005427dc @ 005427dc

void FUN_005427dc(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long local_88;
  long local_78;
  long local_68;
  long local_58;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  lVar6 = *(long *)(param_1 + 0x20);
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = lVar6;
  _objc_getAssociatedObject(lVar6,_kWCRefineDraftEditingIndexKey);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar6;
  if ((lVar6 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_integerValue_026ca750), lVar6 < 0)) {
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    lVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_textView_0269d0f8);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    if (lVar6 != 0) {
      local_58 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_textView_0269d0f8);
      _objc_retainAutoreleasedReturnValue();
      bVar5 = true;
      local_68 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar4 = true;
      bVar1 = false;
      if (local_68 != 0) {
        local_78 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_textView_0269d0f8);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = true;
        local_88 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        lVar7 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = lVar7 != 0;
      }
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if (bVar4) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if (bVar5) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(lVar6);
    if (bVar1) {
      lVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_textView_0269d0f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar6);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

