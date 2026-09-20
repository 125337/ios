// badgeInfoForActionID: @ 01ceb644

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineProfileCardFunctionPageViewController::badgeInfoForActionID_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *local_330;
  undefined *local_328;
  undefined *local_320;
  undefined *local_318;
  undefined *local_310;
  undefined *local_308;
  undefined *local_290;
  undefined *local_280;
  undefined *local_270;
  undefined *local_260;
  undefined *local_250;
  undefined *local_240;
  undefined *local_230;
  undefined *local_220;
  undefined *local_208;
  undefined *local_1f8;
  undefined *local_1e8;
  undefined *local_1d8;
  ulong local_1c8;
  SEL local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  undefined *local_188;
  undefined *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  undefined *local_158;
  undefined *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined *local_128;
  undefined *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  undefined *local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined *local_98;
  undefined *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  uVar13 = DAT_02339dd0;
  uVar12 = DAT_0232c678;
  uVar11 = DAT_0232c670;
  uVar10 = DAT_02324258;
  uVar9 = DAT_02324038;
  uVar8 = DAT_02324028;
  uVar7 = DAT_02323ec0;
  uVar6 = DAT_02323e00;
  uVar5 = DAT_02323d48;
  uVar4 = DAT_02323d40;
  uVar3 = DAT_02323c60;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c8 = 0;
  local_1c0 = param_2;
  local_1b8 = (undefined *)param_1;
  _objc_storeStrong(&local_1c8,param_3);
  puVar15 = PTR_WCRefineProfileCardActionCatalog_026ced78;
  puVar14 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_isGroupContact_026c3a30);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar15,PTR_s_isActionImplementedForGroupConta_026c3a50,puVar14,local_1c8);
  uVar16 = local_1c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1c8,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDTop);
  if ((uVar16 & 1) == 0) {
    uVar16 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1c8,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDMute);
    if ((uVar16 & 1) == 0) {
      uVar16 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c8,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDMessageBlock)
      ;
      if ((uVar16 & 1) == 0) {
        uVar16 = local_1c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c8,PTR_s_isEqualToString__0269ccc8,
                   _WCRefineProfileCardActionIDChangeWallpaper);
        if ((uVar16 & 1) == 0) {
          uVar16 = local_1c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c8,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDClearChat
                    );
          if ((uVar16 & 1) == 0) {
            uVar16 = local_1c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c8,PTR_s_isEqualToString__0269ccc8,
                       _WCRefineProfileCardActionIDAvatarURL);
            if ((uVar16 & 1) == 0) {
              if (((ulong)puVar15 & 1) == 0) {
                local_1a8 = &cf_text;
                uVar16 = local_1c8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1c8,PTR_s_isEqualToString__0269ccc8,
                           _WCRefineProfileCardActionIDThemeDelivery);
                local_190 = &cf__g;
                if ((uVar16 & 1) == 0) {
                  local_190 = &cf__ceQ;
                }
                local_1a0 = &cf_textColor;
                puVar15 = PTR__OBJC_CLASS___UIColor_026cdf78;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar11,uVar11,DAT_02323e10,PTR__OBJC_CLASS___UIColor_026cdf78,
                           PTR_s_colorWithRed_green_blue_alpha__0269cc48);
                _objc_retainAutoreleasedReturnValue();
                local_198 = &cf_backgroundColor;
                puVar14 = PTR__OBJC_CLASS___UIColor_026cdf78;
                local_188 = puVar15;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                           PTR_s_colorWithWhite_alpha__0269cf30);
                _objc_retainAutoreleasedReturnValue();
                puVar17 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_180 = puVar14;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_190,&local_1a8,3);
                _objc_retainAutoreleasedReturnValue();
                local_1b0 = puVar17;
                (*(code *)PTR__objc_release_02578630)(puVar14);
                (*(code *)PTR__objc_release_02578630)(puVar15);
              }
              else {
                local_178 = &cf_text;
                local_160 = &::cf_eQ;
                local_170 = &cf_textColor;
                puVar15 = PTR__OBJC_CLASS___UIColor_026cdf78;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar4,uVar9,uVar10,PTR__OBJC_CLASS___UIColor_026cdf78,
                           PTR_s_colorWithRed_green_blue_alpha__0269cc48);
                _objc_retainAutoreleasedReturnValue();
                local_168 = &cf_backgroundColor;
                puVar14 = PTR__OBJC_CLASS___UIColor_026cdf78;
                local_158 = puVar15;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar13,uVar5,uVar7,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                           PTR_s_colorWithRed_green_blue_alpha__0269cc48);
                _objc_retainAutoreleasedReturnValue();
                puVar17 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_150 = puVar14;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_160,&local_178,3);
                _objc_retainAutoreleasedReturnValue();
                local_1b0 = puVar17;
                (*(code *)PTR__objc_release_02578630)(puVar14);
                (*(code *)PTR__objc_release_02578630)(puVar15);
              }
            }
            else {
              local_148 = &cf_text;
              local_130 = &cf_Y6R;
              local_140 = &cf_textColor;
              puVar15 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar4,uVar9,uVar10,PTR__OBJC_CLASS___UIColor_026cdf78,
                         PTR_s_colorWithRed_green_blue_alpha__0269cc48);
              _objc_retainAutoreleasedReturnValue();
              local_138 = &cf_backgroundColor;
              puVar14 = PTR__OBJC_CLASS___UIColor_026cdf78;
              local_128 = puVar15;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar13,uVar5,uVar7,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                         PTR_s_colorWithRed_green_blue_alpha__0269cc48);
              _objc_retainAutoreleasedReturnValue();
              puVar17 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_120 = puVar14;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_130,&local_148,3);
              _objc_retainAutoreleasedReturnValue();
              local_1b0 = puVar17;
              (*(code *)PTR__objc_release_02578630)(puVar14);
              (*(code *)PTR__objc_release_02578630)(puVar15);
            }
          }
          else {
            local_118 = &cf_text;
            local_100 = &cf_nd;
            local_110 = &cf_textColor;
            puVar15 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar12,uVar6,uVar8,PTR__OBJC_CLASS___UIColor_026cdf78,
                       PTR_s_colorWithRed_green_blue_alpha__0269cc48);
            _objc_retainAutoreleasedReturnValue();
            local_108 = &cf_backgroundColor;
            puVar14 = PTR__OBJC_CLASS___UIColor_026cdf78;
            local_f8 = puVar15;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,uVar3,uVar3,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                       PTR_s_colorWithRed_green_blue_alpha__0269cc48);
            _objc_retainAutoreleasedReturnValue();
            puVar17 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_f0 = puVar14;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_100,&local_118,3);
            _objc_retainAutoreleasedReturnValue();
            local_1b0 = puVar17;
            (*(code *)PTR__objc_release_02578630)(puVar14);
            (*(code *)PTR__objc_release_02578630)(puVar15);
          }
        }
        else {
          local_e8 = &cf_text;
          local_d0 = &cf_n_;
          local_e0 = &cf_textColor;
          puVar15 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,uVar9,uVar10,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_d8 = &cf_backgroundColor;
          puVar14 = PTR__OBJC_CLASS___UIColor_026cdf78;
          local_c8 = puVar15;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar13,uVar5,uVar7,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_c0 = puVar14;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d0,&local_e8,3);
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = puVar17;
          (*(code *)PTR__objc_release_02578630)(puVar14);
          (*(code *)PTR__objc_release_02578630)(puVar15);
        }
      }
      else {
        puVar15 = local_1b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1b8,PTR_s_currentStateForActionID__026c3a58,local_1c8);
        local_b8 = &cf_text;
        local_a0 = &cf__O__;
        if (((ulong)puVar15 & 1) == 0) {
          local_a0 = &cf__gO__;
        }
        local_b0 = &cf_textColor;
        bVar1 = ((ulong)puVar15 & 1) == 0;
        if (bVar1) {
          local_328 = puVar15;
          FUN_01cec7d0();
          _objc_retainAutoreleasedReturnValue();
          local_270 = local_328;
        }
        else {
          local_328 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar12,uVar6,uVar8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_260 = local_328;
        }
        local_98 = local_328;
        local_a8 = &cf_backgroundColor;
        bVar2 = ((ulong)puVar15 & 1) == 0;
        local_330 = PTR__OBJC_CLASS___UIColor_026cdf78;
        if (bVar2) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithWhite_alpha__0269cf30);
          _objc_retainAutoreleasedReturnValue();
          local_290 = local_330;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,uVar3,uVar3,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_280 = local_330;
        }
        local_90 = local_330;
        puVar15 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_a0,&local_b8,3);
        _objc_retainAutoreleasedReturnValue();
        local_1b0 = puVar15;
        if (bVar2) {
          (*(code *)PTR__objc_release_02578630)(local_290);
        }
        else {
          (*(code *)PTR__objc_release_02578630)(local_280);
        }
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_270);
        }
        else {
          (*(code *)PTR__objc_release_02578630)(local_260);
        }
      }
    }
    else {
      puVar15 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b8,PTR_s_currentStateForActionID__026c3a58,local_1c8);
      local_88 = &cf_text;
      local_70 = &::cf__;
      if (((ulong)puVar15 & 1) == 0) {
        local_70 = &cf__g;
      }
      local_80 = &cf_textColor;
      bVar1 = ((ulong)puVar15 & 1) == 0;
      if (bVar1) {
        local_318 = puVar15;
        FUN_01cec7d0();
        _objc_retainAutoreleasedReturnValue();
        local_230 = local_318;
      }
      else {
        local_318 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323d98,DAT_02323d90,DAT_02323c68,0x3ff0000000000000,
                   PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_220 = local_318;
      }
      local_68 = local_318;
      local_78 = &cf_backgroundColor;
      bVar2 = ((ulong)puVar15 & 1) == 0;
      local_320 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if (bVar2) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithWhite_alpha__0269cf30);
        _objc_retainAutoreleasedReturnValue();
        local_250 = local_320;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,DAT_02332e50,DAT_02323f88,0x3ff0000000000000,
                   PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_240 = local_320;
      }
      local_60 = local_320;
      puVar15 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_70,&local_88,3);
      _objc_retainAutoreleasedReturnValue();
      local_1b0 = puVar15;
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_250);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_240);
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_230);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_220);
      }
    }
  }
  else {
    puVar15 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1b8,PTR_s_currentStateForActionID__026c3a58,local_1c8);
    local_58 = &cf_text;
    local_40 = &cf__n_v;
    if (((ulong)puVar15 & 1) == 0) {
      local_40 = &cf__gn_v;
    }
    local_50 = &cf_textColor;
    bVar1 = ((ulong)puVar15 & 1) == 0;
    if (bVar1) {
      local_308 = puVar15;
      FUN_01cec7d0();
      _objc_retainAutoreleasedReturnValue();
      local_1e8 = local_308;
    }
    else {
      local_308 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fc3333333333333,DAT_02324050,uVar8,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_1d8 = local_308;
    }
    local_38 = local_308;
    local_48 = &cf_backgroundColor;
    bVar2 = ((ulong)puVar15 & 1) == 0;
    local_310 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if (bVar2) {
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_208 = local_310;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar13,DAT_02323ff8,DAT_0232c6d8,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_1f8 = local_310;
    }
    local_30 = local_310;
    puVar15 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
    _objc_retainAutoreleasedReturnValue();
    local_1b0 = puVar15;
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_208);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_1f8);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_1e8);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_1d8);
    }
  }
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_1b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

