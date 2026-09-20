// refreshMosaicAttrBarUI @ 0167e11c

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRSuperFloatCropViewController::refreshMosaicAttrBarUI
          (WCRSuperFloatCropViewController *this,ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  double in_d0;
  double local_68;
  double local_50;
  ID local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mosaicAttrBar_026b1de8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mosaicBrushStyle_026b27a8);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mosaicStyleSegment_026b27f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mosaicBrushSize_026b2780);
    if (in_d0 <= 0.0) {
      local_50 = 32.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mosaicBrushSize_026b2780);
      local_50 = in_d0;
    }
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mosaicSizeSlider_026b2800);
    _objc_retainAutoreleasedReturnValue();
    local_68 = (double)(ulong)(uint)(float)local_50;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mosaicBrushOpacity_026b2798);
    if (local_68 <= 0.0) {
      local_68 = 1.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mosaicBrushOpacity_026b2798);
    }
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mosaicOpacitySlider_026b2808);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)((float)local_68);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hasActiveCropSelection_026b1f60);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mosaicSelectionButton_026b2810);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mosaicBrushStyle_026b27a8);
    local_28 = &cf__j_;
    if (IVar1 != 1) {
      local_28 = &cf_l_KQ;
    }
    (*(code *)PTR__objc_retain_02578638)();
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mosaicSelectionButton_026b2810);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___uS_MR_S_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setTitle_forState__026caab8,puVar2,0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mosaicAttrBar_026b1de8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_30;
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((IVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setText__026caa88,&cf_Sbxe_);
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

