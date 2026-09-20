// FUN_01968f58 @ 01968f58

void FUN_01968f58(long param_1)

{
  bool bVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  cfstringStruct *local_70;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  pcVar3 = (cfstringStruct *)(param_1 + 0x30);
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  bVar1 = false;
  bVar2 = true;
  local_28 = pcVar3;
  if (pcVar3 != (cfstringStruct *)0x0) {
    pcVar5 = *(cfstringStruct **)(param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_searchGeneration_026b9d38);
    bVar2 = true;
    if (pcVar5 == pcVar3) {
      local_30 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      bVar2 = local_30 == (cfstringStruct *)0x0;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if (!bVar2) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_70 = &cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    if (((ulong)local_70 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setSearchMatchRanges__026b9e00,*(undefined8 *)(param_1 + 0x28));
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setSearchMatchTotal__026b9e18,*(undefined8 *)(param_1 + 0x40));
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setSearchMatchTruncated__026b9e20,*(byte *)(param_1 + 0x48) & 1);
      lVar4 = *(long *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setSearchMatchIndex__026b9e10,(long)(int)-(uint)(lVar4 == 0));
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_searchCountText_026ba0b8);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchCountLabel_026ba0a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_28;
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      pcVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchMatchIndex_026ba080);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_wcr_replaceSearchHighlightOverla_026ba0b0,uVar6,pcVar5);
      pcVar3 = local_28;
      pcVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchMatchIndex_026ba080);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_scrollToSearchMatchAtIndex_anima_026ba0c0,pcVar5,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

