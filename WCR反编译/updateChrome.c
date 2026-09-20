// updateChrome @ 01af65fc

/* Function Stack Size: 0x10 bytes */

void WCRefineHomeAvatarStripView::updateChrome(ID param_1,SEL param_2)

{
  bool bVar1;
  double dVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  ID IVar6;
  long lVar7;
  undefined8 uVar8;
  ulong local_2a0;
  ulong local_298;
  undefined *local_270;
  double local_248;
  undefined *local_218;
  undefined *local_1b0;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  byte local_151;
  undefined *local_150;
  byte local_141;
  undefined *local_140;
  undefined *local_138;
  double local_130;
  byte local_121;
  undefined *local_120;
  byte local_111;
  undefined *local_110;
  undefined *local_108;
  byte local_f9;
  undefined *local_f8;
  byte local_e9;
  undefined *local_e8;
  byte local_d9;
  undefined *local_d8;
  undefined *local_d0;
  byte local_c2;
  byte local_c1;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar2 = DAT_02323d38;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_248 = DAT_02323d38;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_b0;
  local_c0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcr_isDark_026b29d0);
  local_c1 = (byte)IVar4;
  puVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_homeAvatarStripBackgroundUseMedi_026a2448);
  local_c2 = (byte)puVar3;
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar3;
  if ((local_c2 & 1) == 0) {
    puVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_homeAvatarStripBackgroundEnabled_026a2440);
    if (((ulong)puVar3 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_d0;
      local_d0 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      local_d9 = 0;
      local_e9 = 0;
      local_1b0 = local_c0;
      if ((local_c1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_homeAvatarStripBackgroundColorLi_026be2e8);
        _objc_retainAutoreleasedReturnValue();
        local_e9 = 1;
        local_e8 = local_1b0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_homeAvatarStripBackgroundColorDa_026be2f0);
        _objc_retainAutoreleasedReturnValue();
        local_d9 = 1;
        local_d8 = local_1b0;
      }
      _objc_storeStrong(&local_d0,local_1b0);
      if ((local_e9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_e8);
      }
      if ((local_d9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_d8);
      }
    }
  }
  local_f9 = 0;
  bVar1 = local_d0 == (undefined *)0x0;
  if (bVar1) {
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar3;
  }
  IVar4 = local_b0;
  local_f9 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cardContainer_026be658);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  if ((local_f9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f8);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_homeAvatarStripCornerRadius_026a2420);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cardContainer_026be658);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_homeAvatarStripStrokeWidth_026be6a0);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cardContainer_026be658);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  local_111 = 0;
  local_121 = 0;
  local_218 = local_c0;
  if ((local_c1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_homeAvatarStripStrokeColorLight_026be6b0);
    _objc_retainAutoreleasedReturnValue();
    local_121 = 1;
    local_120 = local_218;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_homeAvatarStripStrokeColorDark_026be6a8);
    _objc_retainAutoreleasedReturnValue();
    local_111 = 1;
    local_110 = local_218;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_108 = local_218;
  if ((local_121 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_120);
  }
  if ((local_111 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  puVar3 = local_108;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cardContainer_026be658);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar3 = local_d0;
  if (local_d0 == (undefined *)0x0) {
    local_248 = 0.0;
  }
  else {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
    _CGColorGetAlpha();
  }
  local_130 = local_248;
  if (((local_c2 & 1) == 0) && (local_248 <= dVar2)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_homeAvatarStripStrokeWidth_026be6a0);
  }
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cardContainer_026be658);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  local_141 = 0;
  local_151 = 0;
  local_270 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if ((local_c1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323da8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_151 = 1;
    local_150 = local_270;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c60,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_141 = 1;
    local_140 = local_270;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = local_270;
  if ((local_151 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_150);
  }
  if ((local_141 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_140);
  }
  _memset(auStack_1a0,0,0x40);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cellViews_026be660);
  _objc_retainAutoreleasedReturnValue();
  local_298 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_298 != 0) {
    lVar7 = *local_190;
    local_2a0 = 0;
    do {
      do {
        if (*local_190 - lVar7 != 0) {
          _objc_enumerationMutation(*local_190 - lVar7,IVar4);
        }
        uVar8 = *(undefined8 *)(local_198 + local_2a0 * 8);
        local_160 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_nameLabel_026ad1e8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar8);
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_forceAvatarGeometry_026be630);
        local_2a0 = local_2a0 + 1;
      } while (local_2a0 < local_298);
      local_298 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
      local_2a0 = 0;
    } while (local_298 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

