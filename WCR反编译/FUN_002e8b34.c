// FUN_002e8b34 @ 002e8b34

void FUN_002e8b34(void)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  double local_3a0;
  cfstringStruct *local_398;
  cfstringStruct *local_390;
  cfstringStruct *local_388;
  double local_380;
  cfstringStruct *local_378;
  cfstringStruct *local_370;
  cfstringStruct *local_368;
  ulong local_360;
  ulong local_358;
  ulong local_350;
  ulong local_348;
  cfstringStruct *local_340;
  cfstringStruct *local_338;
  cfstringStruct *local_330;
  double local_328;
  cfstringStruct *local_320;
  cfstringStruct *local_318;
  cfstringStruct *local_310;
  ulong local_308;
  ulong local_300;
  ulong local_2f8;
  undefined8 local_2e0;
  undefined *local_2d8;
  undefined4 local_2cc;
  undefined1 *local_2c8;
  undefined *local_2c0;
  cfstringStruct *local_2b8;
  cfstringStruct *local_2b0;
  cfstringStruct *local_2a8;
  cfstringStruct *local_2a0;
  cfstringStruct *local_298;
  cfstringStruct *local_290;
  double local_288;
  double local_280;
  cfstringStruct *local_278;
  cfstringStruct *local_270;
  cfstringStruct *local_268;
  cfstringStruct *local_260;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  cfstringStruct *local_248;
  cfstringStruct *local_240;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  uint local_208;
  uint local_204;
  undefined *local_200;
  cfstringStruct *local_1f8;
  uint local_1ec;
  double local_1e8;
  undefined4 local_1dc;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined8 local_1a8;
  double local_1a0;
  undefined8 local_198;
  double local_190;
  bool local_181;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  bool local_169;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  double local_158;
  cfstringStruct *local_150;
  bool local_141;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  bool local_129;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  byte local_111;
  undefined *local_110;
  byte local_f1;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  cfstringStruct **local_d0;
  cfstringStruct **local_c8;
  double *local_c0;
  long *local_b8;
  double *local_b0;
  double *local_a8;
  byte *local_a0;
  byte *local_98;
  byte *local_90;
  byte local_83;
  byte local_82;
  byte local_81;
  double local_80;
  double local_78;
  long local_70;
  double local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  
  local_1e8 = DAT_02323d38;
  local_d0 = &local_58;
  local_58 = (cfstringStruct *)0x0;
  local_c8 = &local_60;
  local_60 = (cfstringStruct *)0x0;
  local_c0 = &local_68;
  local_68 = 1.0;
  local_b8 = &local_70;
  local_70 = 0;
  local_b0 = &local_78;
  local_78 = 0.0;
  local_a8 = &local_80;
  local_80 = 0.0;
  local_a0 = &local_81;
  local_81 = 0;
  local_98 = &local_82;
  local_82 = 0;
  local_90 = &local_83;
  local_83 = 0;
  local_f0 = PTR___NSConcreteGlobalBlock_02578658;
  local_e8 = 0xd0800000;
  local_1dc = 0;
  local_e4 = 0;
  local_e0 = FUN_002ebae4;
  local_d8 = &DAT_0257bc68;
  _dispatch_sync(DAT_028c9870,&local_f0);
  local_111 = (byte)local_1dc & 1;
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  local_1ec = 0;
  local_1d8 = pcVar2;
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    local_1ec = 0;
    local_1f8 = pcVar2;
    if (pcVar2 != (cfstringStruct *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      local_200 = puVar3;
      _objc_retainAutoreleasedReturnValue();
      local_111 = 1;
      local_110 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_204 = (uint)puVar3;
      local_1ec = local_204;
    }
  }
  local_208 = local_1ec;
  if ((local_111 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  local_f1 = (byte)local_208 & 1;
  local_129 = false;
  bVar1 = (local_208 & 1) == 0;
  if (bVar1) {
    local_218 = &cf___;
  }
  else {
    pcVar2 = local_60;
    FUN_002ebc0c();
    local_210 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    local_218 = pcVar2;
    local_128 = pcVar2;
  }
  local_129 = !bVar1;
  local_220 = local_218;
  (*(code *)PTR__objc_retain_02578638)();
  local_120 = local_220;
  if ((local_129 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_128);
  }
  local_141 = false;
  bVar1 = (local_f1 & 1) == 0;
  if (bVar1) {
    local_230 = &cf_truetype;
  }
  else {
    pcVar2 = local_60;
    FUN_002ebfb4();
    local_228 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    local_230 = pcVar2;
    local_140 = pcVar2;
  }
  local_141 = !bVar1;
  local_238 = local_230;
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = local_238;
  if ((local_141 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_140);
  }
  local_240 = &cf___;
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = local_240;
  if (local_70 != 0) {
    local_158 = (double)(local_70 * 100 + 400);
    if ((long)local_158 < 100) {
      local_158 = 4.94065645841247e-322;
    }
    if (900 < (long)local_158) {
      local_158 = 4.44659081257122e-321;
    }
    local_3a0 = local_158;
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    local_248 = pcVar4;
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_150;
    local_150 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  local_169 = false;
  bVar1 = ABS(local_78) <= local_1e8;
  if (bVar1) {
    local_258 = &cf___;
  }
  else {
    local_3a0 = local_78;
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
    local_250 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    local_258 = pcVar2;
    local_168 = pcVar2;
  }
  local_169 = !bVar1;
  local_260 = local_258;
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = local_260;
  if ((local_169 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_168);
  }
  local_181 = false;
  bVar1 = local_80 <= local_1e8;
  if (bVar1) {
    local_270 = &cf___;
  }
  else {
    local_3a0 = DAT_02323d50 * local_80 + 1.0;
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___3f);
    local_268 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    local_270 = pcVar2;
    local_180 = pcVar2;
  }
  local_181 = !bVar1;
  local_278 = local_270;
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = local_278;
  if ((local_181 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_180);
  }
  local_198 = 0x4051800000000000;
  local_1a8 = 0x4061800000000000;
  local_1b0 = local_68 * 100.0;
  local_280 = local_1b0;
  if (140.0 < local_1b0) {
    local_280 = 140.0;
  }
  local_1b8 = local_280;
  local_1a0 = local_280;
  if (local_280 <= 70.0) {
    local_288 = 70.0;
  }
  else {
    local_288 = local_280;
  }
  local_1c0 = local_288;
  local_190 = local_288;
  local_290 = local_58;
  if (local_58 == (cfstringStruct *)0x0) {
    local_298 = &cf___;
  }
  else {
    local_298 = local_58;
  }
  pcVar2 = local_298;
  FUN_002eb4ec();
  local_2a0 = pcVar2;
  _objc_retainAutoreleasedReturnValue();
  local_2a8 = local_120;
  if (local_120 == (cfstringStruct *)0x0) {
    local_2b0 = &cf___;
  }
  else {
    local_2b0 = local_120;
  }
  pcVar4 = local_2b0;
  local_1c8 = pcVar2;
  FUN_002eb4ec();
  local_2b8 = pcVar4;
  _objc_retainAutoreleasedReturnValue();
  local_2cc = 0;
  local_3a0 = (double)(ulong)((local_81 & 1) != 0);
  local_360 = (ulong)((local_82 & 1) != 0);
  local_358 = (ulong)((local_82 & 1) != 0);
  local_350 = (ulong)((local_83 & 1) != 0);
  local_348 = (ulong)((local_81 & 1) != 0);
  local_308 = (ulong)((local_82 & 1) != 0);
  local_300 = (ulong)((local_82 & 1) != 0);
  local_2f8 = (ulong)((local_83 & 1) != 0);
  local_390 = local_1c8;
  local_388 = local_138;
  local_380 = local_190;
  local_378 = local_150;
  local_370 = local_160;
  local_368 = local_178;
  local_338 = local_1c8;
  local_330 = local_138;
  local_328 = local_190;
  local_320 = local_150;
  local_318 = local_160;
  local_310 = local_178;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_398 = pcVar4;
  local_340 = pcVar4;
  local_2c8 = (undefined1 *)&local_3a0;
  local_1d0 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &
             cf__function___try_varC_window___WCRFontConfig___window___WCRFontConfig_____C_enabled___d__C_url______C_ps______C_fmt______C_scale____0f__C_weight______C_letter______C_line______C_web___d__C_article___d__C_mini___d__try_varL_localStorage_L_setItem__wcr_font_enabled____d___L_setItem__wcr_font_url________L_setItem__wcr_font_ps________L_setItem__wcr_font_fmt________L_setItem__wcr_font_scale_____0f___L_setItem__wcr_font_weight________L_setItem__wcr_font_letter________L_setItem__wcr_font_line________L_setItem__wcr_font_web____d___L_setItem__wcr_font_article____d___L_setItem__wcr_font_mini____d____catch_e___if_window___WCRFontApply_window___WCRFontApply___varst_null_try_st_document_getElementById____wcr_font_style______catch_e___varcssLen_st_st_textContent_length__1_try_if_document_fonts__document_fonts_load__document_fonts_load__100px_WCRefineCustomFont____then_function_fs__window___wcrLoad__OK___fs_length___function_e__window___wcrLoad__ERR___e______catch_e__window___wcrLoad__EX___e__varffc_0_try_document_fonts_forEach_function_f__if_f_family_indexOf__WCRefineCustomFont__>_0_ffc_______catch_e___varhost____try_host__location_host______slice_0_24___catch_e___varffReady_window___WCRFontFaceReady__Y___N__varhasData_window___WCRFontDataURL__Y___N__return_host___host__css___cssLen__ffCount___ffc__ffReady___ffReady__hasData___hasData__load____window___wcrLoad___pending____window___wcrFFErr___ffErr___window___wcrFFErr_______catch_e__return_SYNC_EX___e_______
            );
  local_2c0 = puVar3;
  _objc_retainAutoreleasedReturnValue();
  local_2e0 = 0;
  local_2d8 = puVar3;
  _objc_storeStrong(&local_1d0);
  _objc_storeStrong(&local_1c8,local_2e0);
  _objc_storeStrong(&local_178,local_2e0);
  _objc_storeStrong(&local_160,local_2e0);
  _objc_storeStrong(&local_150,local_2e0);
  _objc_storeStrong(&local_138,local_2e0);
  _objc_storeStrong(&local_120,local_2e0);
  _objc_storeStrong(&local_60,local_2e0);
  _objc_storeStrong(&local_58,local_2e0);
  _objc_autoreleaseReturnValue(local_2d8);
  return;
}

