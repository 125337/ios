// toggleZoomPanel @ 0195f234

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::toggleZoomPanel(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_zoomPanelVisible_026b9dc8);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setZoomPanelVisible__026b9dd0,(uint)param_1 ^ 1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_zoomPanelVisible_026b9dc8);
  if ((IVar2 & 1) != 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchPanelVisible_026b9dd8);
    if ((IVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSearchPanelVisible__026b9de0,0);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchPanel_026b9de8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchPanel_026b9de8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchPanelHeightConstraint_026b9df0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988
                 ,local_28,PTR_s_refreshSearchMatches_026b9d30,0);
      IVar2 = local_28;
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchGeneration_026b9d38);
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setSearchGeneration__026b9d40,IVar3 + 1);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchField_026ad308);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_replaceField_026b9df8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar1 = PTR____NSArray0___02578280;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setSearchMatchRanges__026b9e00,
                 *(undefined8 *)PTR____NSArray0___02578280);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setSearchHighlightRanges__026b9e08,*(undefined8 *)puVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setSearchMatchIndex__026b9e10,0xffffffffffffffff);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSearchMatchTotal__026b9e18,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSearchMatchTruncated__026b9e20,0);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_28,PTR_s_setKeyboardOverlap__026b9e28);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateEditorChromeInsets_026b9e30);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_recolorEditor_026b9e38);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_zoomPanelVisible_026b9dc8);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_zoomPanel_026b9e40);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_zoomPanelVisible_026b9dc8);
  if ((IVar2 & 1) != 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_zoomPanel_026b9e40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_bringSubviewToFront__026ca550);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_actionBar_026b9dc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_bringSubviewToFront__026ca550);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_0195f834;
  local_40 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323c70,puVar1,PTR_s_animateWithDuration_animations__026ca4e0,&local_58);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  _objc_storeStrong(&local_38,0);
  return;
}

