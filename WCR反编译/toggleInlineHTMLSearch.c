// toggleInlineHTMLSearch @ 01efd518

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListWebSettingsViewController::toggleInlineHTMLSearch(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlPreviewVisible_026c80d0);
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHtmlPreviewVisible__026c80d8,0);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlPreviewWebView_026c7f38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlTextView_026c7f70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlLineNumberView_026c80a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlPreviewButton_026c8028);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlSearchPanelVisible_026c80f8);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setHtmlSearchPanelVisible__026c8100,(uint)IVar2 ^ 1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlSearchPanelVisible_026c80f8);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlSearchPanel_026c8108);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlSearchPanelVisible_026c80f8);
  uVar3 = 0x405b000000000000;
  if ((IVar2 & 1) == 0) {
    uVar3 = 0;
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlSearchPanelHeightConstraint_026c8110);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlSearchPanelVisible_026c80f8);
  if ((IVar2 & 1) == 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlSearchField_026c8040);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlReplaceField_026c8058);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setHtmlSearchMatchRanges__026c8120,
               *(undefined8 *)PTR____NSArray0___02578280);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setHtmlSearchMatchIndex__026c8128,0xffffffffffffffff);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlSearchCountLabel_026c8068);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_applyInlineHTMLHighlightPreservi_026c7fa8);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlSearchField_026c8040);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshInlineHTMLSearchMatches_026c8118);
  }
  IVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_48 = PTR___NSConcreteStackBlock_02578660;
  local_40 = 0xc2000000;
  local_3c = 0;
  local_38 = FUN_01efda58;
  local_30 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323c70,puVar1,PTR_s_animateWithDuration_animations__026ca4e0,&local_48);
  _objc_storeStrong(&local_28,0);
  return;
}

