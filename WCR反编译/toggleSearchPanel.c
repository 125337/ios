// toggleSearchPanel @ 01967110

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::toggleSearchPanel(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ID local_60;
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
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchPanelVisible_026b9dd8);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setSearchPanelVisible__026b9de0,(uint)param_1 ^ 1);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchPanelVisible_026b9dd8);
  if ((IVar4 & 1) != 0) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_zoomPanelVisible_026b9dc8);
    if ((IVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setZoomPanelVisible__026b9dd0,0);
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_zoomPanel_026b9e40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_zoomPanel_026b9e40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchPanelVisible_026b9dd8);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchPanel_026b9de8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateEditorChromeInsets_026b9e30);
  IVar4 = local_28;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_0196740c;
  local_40 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  IVar3 = local_28;
  local_38 = IVar4;
  local_80 = puVar1;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_01967504;
  local_68 = &DAT_02579d00;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323ec8,puVar2,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_58,&local_80
            );
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_38,0);
  return;
}

