// updateTextAnnotation:withText: @ 0165b34c

/* Function Stack Size: 0x20 bytes */

void WCRSuperFloatCropViewController::updateTextAnnotation_withText_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  double dVar5;
  ID local_d8;
  double local_c0;
  ID local_70;
  ID local_68;
  double local_60;
  double local_58;
  double local_50;
  undefined4 local_44;
  ID local_40;
  long local_38;
  long local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar3 = local_28;
  FUN_0164fd1c();
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar3;
  if (IVar3 == 0) {
    local_44 = 1;
  }
  else {
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedTextOverlay_026b20a8);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_release_02578630)();
      if (IVar4 == IVar3) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectTextOverlay__026b20f8,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeFromSuperview_026ca800);
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_floatingOverlays_026b1e00);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshPenUndoEnabled_026b21a8);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__RdeW_);
      local_44 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setText__026caa88,local_38);
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAnnotateStrokeColor_026b20d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      dVar5 = 14.0;
      local_50 = 14.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAnnotateLineWidth_026b20d8);
      local_58 = dVar5 * 4.0;
      local_c0 = local_58;
      if (local_58 <= local_50) {
        local_c0 = local_50;
      }
      local_60 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,puVar1,
                 PTR_s_systemFontOfSize_weight__026cab60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      IVar3 = local_28;
      _objc_getAssociatedObject(local_28,DAT_028c6010);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = IVar3;
      if (IVar3 == 0) {
        local_70 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAnnotateTextFillColor_026b20c8);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = local_70;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_d8;
      if (IVar3 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBackgroundColor__026ca888,local_68);
      _objc_setAssociatedObject(local_28,DAT_028c6010,local_68,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_layoutTextAnnotationLabel_inCard_026b20e0,local_40,local_28);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_resyncTextAnnotationSnapshot__026b20e8,local_28);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectTextOverlay__026b20f8,local_28);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__feeW_);
      _objc_storeStrong(&local_68,0);
      local_44 = 0;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

