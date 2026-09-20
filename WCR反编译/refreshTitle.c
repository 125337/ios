// refreshTitle @ 01b5fbd0

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::refreshTitle(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_78;
  undefined *local_48;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  undefined *local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = (undefined *)param_1;
  if ((*(byte *)(param_1 + (long)_exportSelectMode) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isRootLevel_026bf878);
    if ((param_1 & 1) == 0) {
      puVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_packRelativePath_026bf868);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_28;
      local_28 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      _objc_storeStrong(&local_28,&cf__g0Wh_N_);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + (long)_selectedExportRels),PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_28;
    local_28 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTitle__0269cef0,0);
  puVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  bVar1 = ((ulong)puVar5 & 1) == 0;
  if (bVar1) {
    local_78 = (undefined *)0x0;
  }
  else {
    local_38 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_78;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_78;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_30 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc_init();
    puVar2 = local_30;
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4031000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
               PTR_s_boldSystemFontOfSize__0269cf28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setTextAlignment__026caa90,1);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setAdjustsFontSizeToFitWidth__026ca850,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fe8000000000000,local_30,PTR_s_setMinimumScaleFactor__026ca9d0);
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setText__026caa88,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sizeToFit_0269ec08);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

