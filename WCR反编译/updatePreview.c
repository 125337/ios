// updatePreview @ 019ed10c

/* Function Stack Size: 0x10 bytes */

void WCRefineFontConvertViewController::updatePreview(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a0;
  undefined *local_190;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  byte local_a1;
  undefined *local_a0;
  undefined *local_98;
  byte local_89;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  undefined *local_70;
  SEL local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = param_2;
  local_60 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_installPreviewPanelIfNeeded_026bb188);
  puVar2 = local_60;
  puVar1 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_sourcePaths_026bb210);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_validPathsFromArray__026bb1a0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_79 = 0;
  local_89 = 0;
  if (puVar1 != (undefined *)0x0) {
    puVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar2;
  }
  puVar2 = local_60;
  local_89 = puVar1 != (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_previewNameLabel_026bb260);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  puVar2 = local_70;
  FUN_019ed8e0(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  local_a1 = 0;
  local_190 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_190 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4036000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    local_a0 = local_190;
  }
  local_a1 = puVar2 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = local_190;
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_b8 = 16.0;
  puVar2 = local_98;
  _CTFontGetUnitsPerEm();
  local_c0 = (double)((ulong)puVar2 & 0xffffffff);
  local_1a0 = local_c0;
  if (local_c0 <= local_b8) {
    local_1a0 = local_b8;
  }
  local_c8 = local_1a0;
  local_b0 = local_1a0;
  local_d8 = 16.0;
  puVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_sizeOffset_026b1060);
  local_e0 = local_1a0 - (double)(long)puVar2;
  local_1b0 = local_e0;
  if (local_e0 <= local_d8) {
    local_1b0 = local_d8;
  }
  local_e8 = local_1b0;
  local_d0 = local_1b0;
  local_f8 = 12.0;
  dVar4 = 38.0;
  local_108 = 38.0;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_pointSize_026a1d68);
  local_110 = (dVar4 * local_b0) / local_d0;
  local_1b8 = local_110;
  if (local_108 < local_110) {
    local_1b8 = local_108;
  }
  local_118 = local_1b8;
  local_100 = local_1b8;
  if (local_1b8 <= local_f8) {
    local_1c0 = local_f8;
  }
  else {
    local_1c0 = local_1b8;
  }
  local_120 = local_1c0;
  local_f0 = local_1c0;
  puVar2 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,local_98,PTR_s_fontWithSize__026bb268);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_026cf238;
  local_128 = puVar2;
  _objc_alloc_init();
  puVar2 = local_60;
  local_130 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_lineHeightOffset_026b1068);
  (*(code *)PTR__objc_msgSend_02578628)
            (((double)(long)puVar2 / local_b0) * local_f0 * 2.0,local_130,
             PTR_s_setLineSpacing__026bb270);
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_58 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
  local_40 = local_128;
  local_50 = *(undefined8 *)PTR__NSKernAttributeName_02578078;
  puVar1 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_letterSpacingOffset_026b1070);
  (*(code *)PTR__objc_msgSend_02578628)
            (((double)(long)puVar1 / local_b0) * local_f0,puVar2,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_02578088;
  local_30 = local_130;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_40,&local_58,3);
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar1 = local_60;
  local_140 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_previewLabel_026aa860);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_weightOffset_026b1058);
  puVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_previewHintLabel_026bb278);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

