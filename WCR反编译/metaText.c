// metaText @ 00fd2978

/* Function Stack Size: 0x10 bytes */

ID __thiscall
WCRefineIconNameCaptureItem::metaText(WCRefineIconNameCaptureItem *this,ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  double in_d0;
  double dVar4;
  double local_50;
  double local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  double local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pointWidth_026ad1c0);
  if (in_d0 <= 0.0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pixelWidth_026ad1c8);
    local_48 = in_d0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pointWidth_026ad1c0);
    local_48 = in_d0;
  }
  local_28 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pointHeight_026ad1d0);
  if (local_48 <= 0.0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pixelHeight_026ad1d8);
    local_50 = local_48;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pointHeight_026ad1d0);
    local_50 = local_48;
  }
  local_30 = local_50;
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_kind_026a27e8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = &cf_SVG;
  if ((IVar2 & 1) == 0) {
    local_38 = &cf_PNG;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  dVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithFormat__0269cca8,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pixelWidth_026ad1c8);
  if ((0.0 < dVar4) &&
     ((*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pixelHeight_026ad1d8), 0.0 < dVar4)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pixelWidth_026ad1c8);
    dVar4 = ABS(dVar4 - local_28);
    if (dVar4 <= 0.5) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pixelHeight_026ad1d8);
      dVar4 = ABS(dVar4 - local_30);
      if (dVar4 <= 0.5) goto LAB_00fd2c40;
    }
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pixelWidth_026ad1c8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pixelHeight_026ad1d8);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&::cf_space_s_);
  }
LAB_00fd2c40:
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scale_026ca830);
  puVar3 = local_40;
  if (DAT_0232c668 < dVar4) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scale_026ca830);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&::cf_space_s_);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_appendFormat__0269d148,&::cf_space_s_);
  puVar3 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar3;
}

