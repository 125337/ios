// resolvedLinkCardFieldsForResult: @ 010046a8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkMediaSender::resolvedLinkCardFieldsForResult_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_190;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  byte local_111;
  cfstringStruct *local_110;
  byte local_101;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  byte local_99;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  SEL local_78;
  ID local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = (cfstringStruct *)0x0;
  local_78 = param_2;
  local_70 = param_1;
  _objc_storeStrong(&local_80,param_3);
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_90 = (cfstringStruct *)0x0;
  pcVar3 = local_80;
  local_88 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_platform_026ad958);
  if (pcVar3 == (cfstringStruct *)((long)&MACH_HEADER.magic + 1)) {
    pcVar3 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_browserPlaybackURL_026ad968);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_90;
    local_90 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  else {
    pcVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_videoURL_026ad970);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (pcVar3 != (cfstringStruct *)0x0) {
      pcVar3 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_videoURL_026ad970);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_90;
      local_90 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
  }
  pcVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
  if ((pcVar2 == (cfstringStruct *)0x0) &&
     (pcVar2 = local_80, (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_platform_026ad958),
     pcVar2 != (cfstringStruct *)((long)&MACH_HEADER.magic + 1))) {
    pcVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_resolvedURL_026ad978);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_99 = 0;
    local_a9 = 0;
    local_158 = local_80;
    if (pcVar3 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_sourceURL_026ad980);
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 1;
      local_a8 = local_158;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_resolvedURL_026ad978);
      _objc_retainAutoreleasedReturnValue();
      local_99 = 1;
      local_98 = local_158;
    }
    _objc_storeStrong(&local_90,local_158);
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_autoParseLinkCardTitle_026ad988);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_88;
  local_b8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_autoParseLinkCardDesc_026ad990);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_88;
  local_c0 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_autoParseLinkCardCoverURL_026ad998);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_b8;
  local_c8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  local_d9 = 0;
  local_e9 = 0;
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_title_0269d250);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_168 = &cf_RN;
    }
    else {
      local_168 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_title_0269d250);
      _objc_retainAutoreleasedReturnValue();
      local_e9 = 1;
      local_e8 = local_168;
    }
    local_160 = local_168;
  }
  else {
    local_160 = local_b8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_160;
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  pcVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  local_101 = 0;
  local_111 = 0;
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_author_026ad9a0);
    _objc_retainAutoreleasedReturnValue();
    local_101 = 1;
    local_100 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_180 = &::cf___;
    }
    else {
      local_180 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_author_026ad9a0);
      _objc_retainAutoreleasedReturnValue();
      local_111 = 1;
      local_110 = local_180;
    }
    local_178 = local_180;
  }
  else {
    local_178 = local_c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = local_178;
  if ((local_111 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  if ((local_101 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  pcVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  bVar1 = false;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_128 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_coverURL_026ad9a8);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_1a0 = local_128;
    if (local_128 == (cfstringStruct *)0x0) {
      local_1a0 = &::cf___;
    }
    local_190 = local_1a0;
  }
  else {
    local_190 = local_c8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_120 = local_190;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_128);
  }
  local_68 = &cf_url;
  local_1b8 = local_90;
  if (local_90 == (cfstringStruct *)0x0) {
    local_1b8 = &::cf___;
  }
  local_48 = local_1b8;
  local_60 = &cf_title;
  if (local_d0 == (cfstringStruct *)0x0) {
    local_1c8 = &::cf___;
  }
  else {
    local_1c8 = local_d0;
  }
  local_40 = local_1c8;
  local_58 = &cf_desc;
  if (local_f8 == (cfstringStruct *)0x0) {
    local_1d8 = &::cf___;
  }
  else {
    local_1d8 = local_f8;
  }
  local_38 = local_1d8;
  local_50 = &cf_cover;
  if (local_120 == (cfstringStruct *)0x0) {
    local_1e8 = &::cf___;
  }
  else {
    local_1e8 = local_120;
  }
  local_30 = local_1e8;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_48,&local_68,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

