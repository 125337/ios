// FUN_01967504 @ 01967504

void FUN_01967504(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_searchPanelVisible_026b9dd8);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988,
               *(undefined8 *)(param_1 + 0x20),PTR_s_refreshSearchMatches_026b9d30,0);
    lVar4 = *(long *)(param_1 + 0x20);
    lVar5 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_searchGeneration_026b9d38);
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_setSearchGeneration__026b9d40,lVar5 + 1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_searchField_026ad308);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_replaceField_026b9df8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar1 = PTR____NSArray0___02578280;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setSearchMatchRanges__026b9e00,
               *(undefined8 *)PTR____NSArray0___02578280);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setSearchHighlightRanges__026b9e08,
               *(undefined8 *)puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setSearchMatchIndex__026b9e10,
               0xffffffffffffffff);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setSearchMatchTotal__026b9e18,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setSearchMatchTruncated__026b9e20,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setKeyboardOverlap__026b9e28);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_updateEditorChromeInsets_026b9e30);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_recolorEditor_026b9e38);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_searchField_026ad308);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_refreshSearchMatches_026b9d30);
  }
  return;
}

