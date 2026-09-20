// scrollToSearchMatchAtIndex:animated: @ 01969e98

/* Function Stack Size: 0x1c bytes */

void WCRefineFileManagerPreviewViewController::scrollToSearchMatchAtIndex_animated_
               (ID param_1,SEL param_2,long_long param_3,bool param_4)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ID local_98;
  ID local_90;
  undefined *puStack_88;
  ID local_80;
  undefined *puStack_78;
  ID local_70;
  undefined *puStack_68;
  byte local_59;
  ID local_58;
  byte local_49;
  ID local_48;
  undefined1 local_39;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_39 = (undefined1)param_4;
  local_49 = 0;
  local_59 = 0;
  bVar1 = true;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if (-1 < (long)param_3) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchMatchRanges_026ba070);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = true;
    if (param_3 < param_1) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      bVar1 = IVar2 == 0;
      local_58 = IVar2;
    }
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (!bVar1) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchMatchRanges_026ba070);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    puVar5 = PTR_s_rangeValue_026ba098;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = IVar4;
    puStack_68 = puVar5;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puStack_78 = puStack_68;
    local_80 = local_70;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = puStack_78;
    local_90 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_WCRFileEditorTextView_026cf1b0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileEditorTextView_026cf1b0,PTR_s_class_0269cd60);
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((IVar3 & 1) == 0) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    else {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
      _objc_retainAutoreleasedReturnValue();
      local_98 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setWcrSuppressAutoScroll__026ba0c8,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_scrollRangeToVisible__026aa0d8,local_70,puStack_68);
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setWcrSuppressAutoScroll__026ba0c8,1);
      _objc_storeStrong(&local_98,0);
    }
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_searchCountText_026ba0b8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchCountLabel_026ba0a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  return;
}

