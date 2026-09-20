// applyStyleToTextOverlay: @ 0165018c

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::applyStyleToTextOverlay_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  double local_78;
  ID local_40;
  ID local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_28;
  FUN_0164f268();
  if ((IVar1 & 1) == 0) {
    local_2c = 1;
  }
  else {
    IVar1 = local_28;
    FUN_0164fd1c();
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar1;
    if (IVar1 == 0) {
      local_2c = 1;
    }
    else {
      IVar1 = local_28;
      _objc_getAssociatedObject(local_28,DAT_028c6010);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_40 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((IVar1 & 1) == 0) {
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAnnotateTextFillColor_026b20c8);
        _objc_retainAutoreleasedReturnValue();
        IVar1 = local_40;
        local_40 = IVar3;
        (*(code *)PTR__objc_release_02578630)(IVar1);
      }
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAnnotateStrokeColor_026b20d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      local_78 = 14.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAnnotateLineWidth_026b20d8);
      local_78 = local_78 * 4.0;
      if (local_78 <= 14.0) {
        local_78 = 14.0;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,puVar2,
                 PTR_s_systemFontOfSize_weight__026cab60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBackgroundColor__026ca888,local_40);
      _objc_setAssociatedObject(local_28,DAT_028c6010,local_40,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_layoutTextAnnotationLabel_inCard_026b20e0,local_38,local_28);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_resyncTextAnnotationSnapshot__026b20e8,local_28);
      _objc_storeStrong(&local_40,0);
      local_2c = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

