// onPickAnnotateColor: @ 016672ec

/* WARNING: Removing unreachable block (ram,0x0166752c) */
/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::onPickAnnotateColor_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID local_68;
  ID local_58;
  undefined4 local_50;
  byte local_49;
  ID local_48;
  undefined *local_40;
  ID local_38;
  ID local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  local_30 = lVar1 - 200;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotatePickerColorIndex_026b2030);
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAnnotatePickingTextFill__026b1c40,0);
  if (local_30 == local_38) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAnnotateColorIndex__026b1c30,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshPenColorSelectionUI_026b23d8);
    puVar3 = PTR__OBJC_CLASS___UIColorPickerViewController_026cee80;
    _objc_alloc_init();
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setDelegate__026ca910,local_18);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_customAnnotateColor_026b2038);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 0;
    local_68 = IVar2;
    if (IVar2 == 0) {
      local_68 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAnnotateStrokeColor_026b20d0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_68;
    }
    local_49 = IVar2 == 0;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setSelectedColor__026b2408,local_68);
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setSupportsAlpha__026b2410,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_40,1);
    _objc_storeStrong(&local_40,0);
    local_50 = 1;
  }
  else {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotatePaletteColors_026b2020);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_30;
    local_58 = IVar4;
    if (((long)local_30 < 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_count_0269cfe0),
       (long)IVar4 <= (long)IVar2)) {
      local_50 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAnnotateColorIndex__026b1c30,local_30)
      ;
      IVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAnnotateColor__026b1bf8);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshPenColorSelectionUI_026b23d8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_applyStrokeColorToActiveAnnotati_026b2418);
      local_50 = 0;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

