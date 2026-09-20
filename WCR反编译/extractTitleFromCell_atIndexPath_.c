// extractTitleFromCell:atIndexPath: @ 014d7738

/* Function Stack Size: 0x20 bytes */

ID WCRefineSearchManager::extractTitleFromCell_atIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  undefined *local_620;
  undefined *local_618;
  ulong local_570;
  ulong local_568;
  ulong local_4d8;
  ulong local_4d0;
  ulong local_3e0;
  ulong local_3d8;
  ulong local_3d0;
  char *local_3c8;
  char *local_3c0;
  uint local_3b4;
  ulong local_3b0;
  uint local_3a4 [4];
  byte local_391;
  ulong local_390;
  ulong local_388;
  ulong local_380;
  undefined1 auStack_378 [8];
  long local_370;
  long *local_368;
  undefined8 local_338;
  undefined *local_330;
  byte local_321;
  ulong local_320;
  ulong local_318;
  undefined1 auStack_310 [8];
  long local_308;
  long *local_300;
  ulong local_2d0;
  byte local_2c1;
  ulong local_2c0;
  ulong local_2b8;
  undefined1 auStack_2b0 [8];
  long local_2a8;
  long *local_2a0;
  ulong local_270;
  byte local_261;
  ulong local_260;
  byte local_251;
  ulong local_250;
  byte local_241;
  ulong local_240;
  byte local_231;
  ulong local_230;
  byte local_221;
  ulong local_220;
  undefined8 local_208;
  uint local_1fc;
  undefined8 local_1f8;
  ulong local_1f0;
  SEL local_1e8;
  ID local_1e0;
  ulong local_1d8;
  undefined1 auStack_1d0 [128];
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1f0 = 0;
  local_1e8 = param_2;
  local_1e0 = param_1;
  _objc_storeStrong(&local_1f0,param_3);
  local_1f8 = 0;
  _objc_storeStrong(&local_1f8,param_4);
  if (local_1f0 == 0) {
    local_1d8 = 0;
    local_1fc = 1;
  }
  else {
    local_208 = 0;
    local_221 = 0;
    local_231 = 0;
    local_241 = 0;
    local_251 = 0;
    uVar11 = local_1f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_textLabel_0269fd00);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    if (uVar11 != 0) {
      uVar2 = local_1f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_textLabel_0269fd00);
      _objc_retainAutoreleasedReturnValue();
      local_221 = 1;
      local_220 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_231 = 1;
      bVar1 = false;
      local_230 = uVar2;
      if (uVar2 != 0) {
        uVar2 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_textLabel_0269fd00);
        _objc_retainAutoreleasedReturnValue();
        local_241 = 1;
        local_240 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_251 = 1;
        local_250 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = uVar2 != 0;
      }
    }
    if ((local_251 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_250);
    }
    if ((local_241 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_240);
    }
    if ((local_231 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_230);
    }
    if ((local_221 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_220);
    }
    (*(code *)PTR__objc_release_02578630)(uVar11);
    if (bVar1) {
      uVar11 = local_1f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_textLabel_0269fd00);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar11;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_1d8 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar11);
      local_1fc = 1;
    }
    else {
      local_261 = 0;
      uVar11 = local_1f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_accessibilityLabel_0269e1c8);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = false;
      if (uVar11 != 0) {
        uVar2 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_accessibilityLabel_0269e1c8);
        _objc_retainAutoreleasedReturnValue();
        local_261 = 1;
        local_260 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = uVar2 != 0;
      }
      if ((local_261 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_260);
      }
      (*(code *)PTR__objc_release_02578630)(uVar11);
      if (bVar1) {
        uVar11 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_accessibilityLabel_0269e1c8);
        _objc_retainAutoreleasedReturnValue();
        local_1fc = 1;
        local_1d8 = uVar11;
      }
      else {
        _memset(auStack_2b0,0,0x40);
        uVar11 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_contentView_026ca5a8);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar11;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(uVar11);
        local_4d0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_a8,0x10
                  );
        if (local_4d0 != 0) {
          lVar5 = *local_2a0;
          local_4d8 = 0;
          do {
            do {
              if (*local_2a0 - lVar5 != 0) {
                _objc_enumerationMutation(*local_2a0 - lVar5,uVar2);
              }
              uVar6 = *(ulong *)(local_2a8 + local_4d8 * 8);
              puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
              local_270 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
              uVar11 = local_270;
              if ((uVar6 & 1) != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_2b8 = uVar11;
                local_2c1 = 0;
                (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_text_0269ce68);
                _objc_retainAutoreleasedReturnValue();
                bVar1 = false;
                if (uVar11 != 0) {
                  uVar6 = local_2b8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_text_0269ce68);
                  _objc_retainAutoreleasedReturnValue();
                  local_2c1 = 1;
                  local_2c0 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  bVar1 = uVar6 != 0;
                }
                if ((local_2c1 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_2c0);
                }
                (*(code *)PTR__objc_release_02578630)(uVar11);
                if (bVar1) {
                  uVar11 = local_2b8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_text_0269ce68);
                  _objc_retainAutoreleasedReturnValue();
                  local_1d8 = uVar11;
                }
                local_1fc = (uint)bVar1;
                _objc_storeStrong(&local_2b8,0);
                if (local_1fc != 0) goto LAB_014d829c;
              }
              _memset(auStack_310,0,0x40);
              uVar11 = local_270;
              (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              local_568 = uVar11;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_568 != 0) {
                lVar7 = *local_300;
                local_570 = 0;
                do {
                  do {
                    if (*local_300 - lVar7 != 0) {
                      _objc_enumerationMutation(*local_300 - lVar7,uVar11);
                    }
                    uVar8 = *(ulong *)(local_308 + local_570 * 8);
                    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
                    local_2d0 = uVar8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
                    uVar6 = local_2d0;
                    if ((uVar8 & 1) != 0) {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_318 = uVar6;
                      local_321 = 0;
                      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_text_0269ce68);
                      _objc_retainAutoreleasedReturnValue();
                      bVar1 = false;
                      if (uVar6 != 0) {
                        uVar8 = local_318;
                        (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_text_0269ce68);
                        _objc_retainAutoreleasedReturnValue();
                        local_321 = 1;
                        local_320 = uVar8;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        bVar1 = uVar8 != 0;
                      }
                      if ((local_321 & 1) != 0) {
                        (*(code *)PTR__objc_release_02578630)(local_320);
                      }
                      (*(code *)PTR__objc_release_02578630)(uVar6);
                      if (bVar1) {
                        uVar6 = local_318;
                        (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_text_0269ce68);
                        _objc_retainAutoreleasedReturnValue();
                        local_1d8 = uVar6;
                      }
                      local_1fc = (uint)bVar1;
                      _objc_storeStrong(&local_318,0);
                      if (local_1fc != 0) goto LAB_014d8208;
                    }
                    local_570 = local_570 + 1;
                  } while (local_570 < local_568);
                  local_568 = uVar11;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar11,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_310,
                             auStack_128,0x10);
                  local_570 = 0;
                } while (local_568 != 0);
              }
              local_1fc = 0;
LAB_014d8208:
              (*(code *)PTR__objc_release_02578630)(uVar11);
              if (local_1fc != 0) goto LAB_014d829c;
              local_4d8 = local_4d8 + 1;
            } while (local_4d8 < local_4d0);
            local_4d0 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_a8,
                       0x10);
            local_4d8 = 0;
          } while (local_4d0 != 0);
        }
        local_1fc = 0;
LAB_014d829c:
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (local_1fc == 0) {
          local_150 = &cf_title;
          local_148 = &cf_titleLabel;
          local_140 = &cf_m_title;
          local_138 = &cf__title;
          local_130 = &cf_text;
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_150,5);
          _objc_retainAutoreleasedReturnValue();
          local_330 = puVar3;
          _memset(auStack_378,0,0x40);
          puVar3 = local_330;
          (*(code *)PTR__objc_retain_02578638)();
          local_618 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,auStack_1d0,
                     0x10);
          if (local_618 != (undefined *)0x0) {
            lVar5 = *local_368;
            local_620 = (undefined *)0x0;
            do {
              do {
                if (*local_368 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_368 - lVar5,puVar3);
                }
                uVar11 = local_1f0;
                uVar9 = *(undefined8 *)(local_370 + (long)local_620 * 8);
                local_338 = uVar9;
                _NSSelectorFromString();
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar11,PTR_s_respondsToSelector__026ca818,uVar9);
                if ((uVar11 & 1) != 0) {
                  uVar11 = local_1f0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1f0,PTR_s_valueForKey__0269d128,local_338);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_380 = uVar11;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isKindOfClass__0269cd68,puVar4)
                  ;
                  if (((uVar11 & 1) == 0) ||
                     (uVar2 = local_380,
                     (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_length_0269cca0),
                     uVar11 = local_380, uVar2 == 0)) {
                    uVar11 = local_380;
                    puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar11,PTR_s_isKindOfClass__0269cd68,puVar4);
                    uVar2 = local_380;
                    if ((uVar11 & 1) != 0) {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_388 = uVar2;
                      local_391 = 0;
                      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_text_0269ce68);
                      _objc_retainAutoreleasedReturnValue();
                      bVar1 = false;
                      if (uVar2 != 0) {
                        uVar11 = local_388;
                        (*(code *)PTR__objc_msgSend_02578628)(local_388,PTR_s_text_0269ce68);
                        _objc_retainAutoreleasedReturnValue();
                        local_391 = 1;
                        local_390 = uVar11;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        bVar1 = uVar11 != 0;
                      }
                      if ((local_391 & 1) != 0) {
                        (*(code *)PTR__objc_release_02578630)(local_390);
                      }
                      (*(code *)PTR__objc_release_02578630)(uVar2);
                      if (bVar1) {
                        uVar11 = local_388;
                        (*(code *)PTR__objc_msgSend_02578628)(local_388,PTR_s_text_0269ce68);
                        _objc_retainAutoreleasedReturnValue();
                        local_1d8 = uVar11;
                      }
                      local_1fc = (uint)bVar1;
                      _objc_storeStrong(&local_388,0);
                      if (local_1fc != 0) goto LAB_014d8738;
                    }
                    local_1fc = 0;
                  }
                  else {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_1d8 = uVar11;
                    local_1fc = 1;
                  }
LAB_014d8738:
                  _objc_storeStrong(&local_380,0);
                  if (local_1fc != 0) goto LAB_014d87cc;
                }
                local_620 = local_620 + 1;
              } while (local_620 < local_618);
              local_618 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,
                         auStack_1d0,0x10);
              local_620 = (undefined *)0x0;
            } while (local_618 != (undefined *)0x0);
          }
          local_1fc = 0;
LAB_014d87cc:
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (local_1fc == 0) {
            local_3a4[0] = 0;
            uVar11 = local_1f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_class_0269cd60);
            _class_copyIvarList(uVar11,local_3a4);
            local_3b0 = uVar11;
            for (local_3b4 = 0; local_3b4 < local_3a4[0]; local_3b4 = local_3b4 + 1) {
              pcVar10 = *(char **)(local_3b0 + (ulong)local_3b4 * 8);
              local_3c0 = pcVar10;
              _ivar_getTypeEncoding();
              local_3c8 = pcVar10;
              if ((pcVar10 == (char *)0x0) ||
                 (pcVar10 = _strstr(pcVar10,"NSString"), pcVar10 == (char *)0x0)) {
                if ((local_3c8 != (char *)0x0) &&
                   (pcVar10 = _strstr(local_3c8,"UILabel"), pcVar10 != (char *)0x0)) {
                  uVar2 = local_1f0;
                  FUN_014d63c8(local_1f0,local_3c0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
                  local_3d8 = uVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
                  uVar11 = local_3d8;
                  if ((uVar2 & 1) == 0) {
LAB_014d8c54:
                    local_1fc = 0;
                  }
                  else {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_3e0 = uVar11;
                    (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_text_0269ce68);
                    _objc_retainAutoreleasedReturnValue();
                    bVar1 = false;
                    if (uVar11 != 0) {
                      uVar2 = local_3e0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_3e0,PTR_s_text_0269ce68);
                      _objc_retainAutoreleasedReturnValue();
                      uVar6 = uVar2;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      bVar1 = uVar6 != 0;
                      (*(code *)PTR__objc_release_02578630)(uVar2);
                    }
                    (*(code *)PTR__objc_release_02578630)(uVar11);
                    if (bVar1) {
                      if (local_3b0 != 0) {
                        _free(local_3b0);
                      }
                      uVar11 = local_3e0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_3e0,PTR_s_text_0269ce68);
                      _objc_retainAutoreleasedReturnValue();
                      local_1fc = 1;
                      local_1d8 = uVar11;
                    }
                    else {
                      local_1fc = 0;
                    }
                    _objc_storeStrong(&local_3e0,0);
                    if (local_1fc == 0) goto LAB_014d8c54;
                  }
                  _objc_storeStrong(&local_3d8,0);
                  goto joined_r0x014d8c6c;
                }
              }
              else {
                uVar2 = local_1f0;
                FUN_014d63c8(local_1f0,local_3c0);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_3d0 = uVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
                uVar11 = uVar2 & 0xffffffff;
                if ((uVar2 & 1) == 0) {
LAB_014d89ec:
                  local_1fc = 0;
                }
                else {
                  uVar2 = local_3d0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_3d0,PTR_s_length_0269cca0);
                  uVar11 = 0;
                  if (uVar2 == 0) goto LAB_014d89ec;
                  if (local_3b0 != 0) {
                    _free(local_3b0);
                  }
                  uVar11 = local_3d0;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_1d8 = uVar11;
                  uVar11 = 1;
                  local_1fc = 1;
                }
                _objc_storeStrong(uVar11,&local_3d0,0);
joined_r0x014d8c6c:
                if (local_1fc != 0) goto LAB_014d8cec;
              }
            }
            if (local_3b0 != 0) {
              _free(local_3b0);
            }
            local_1fc = 0;
          }
LAB_014d8cec:
          _objc_storeStrong(&local_330,0);
          if (local_1fc == 0) {
            local_1d8 = 0;
            local_1fc = 1;
          }
        }
      }
    }
    _objc_storeStrong(&local_208,0);
  }
  _objc_storeStrong(&local_1f8);
  _objc_storeStrong(&local_1f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_1d8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

